import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'resusecard.dart';
import 'iconReuse.dart';
import 'constance.dart';
import 'result.dart';
import 'bottomButton.dart';
import 'round_Icon.dart';
import 'calculation_function.dart';
enum GenderEnum {
  male,
  female,
  none,
}

class InputPage extends StatefulWidget {
  const InputPage({super.key});

  @override
  _InputPageState createState() => _InputPageState();
}

class _InputPageState extends State<InputPage> {
  GenderEnum selectedGender = GenderEnum.none;
  int height = 180;
  int weight = 30;
  int age = 1;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title:  Hero(
    tag: 'bmiResultTitle',  // Same tag as used in Result page
    child: const Text('BMI CALCULATOR HOME'),
      ),),
      body: Column(
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: [
          Expanded(
            child: Row(
              children: [
                Expanded(
                  child: Padding(
                    padding: const EdgeInsets.all(17.0),
                    child: ResuableCard(
                      optionalonpress: () {
                        setState(() {
                          selectedGender = GenderEnum.male;
                          
                        });
                      },
                      optionalColor: selectedGender == GenderEnum.male
                          ? kContainerColor
                          : kInactiveColor,
                      optionalCardChild: ResusableIcon(
                        icon: FontAwesomeIcons.mars,
                        label: 'MALE',
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Padding(
                    padding: const EdgeInsets.all(17.0),
                    child: ResuableCard(
                      optionalonpress: () {
                        setState(() {
                          selectedGender = GenderEnum.female;
                        });
                      },
                      optionalColor: selectedGender == GenderEnum.female
                          ? kContainerColor
                          : kInactiveColor,
                      optionalCardChild: ResusableIcon(
                        icon: FontAwesomeIcons.venus,
                        label: 'FEMALE',
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),

          // Slider widget for height
          Expanded(
            child: Padding(
              padding: const EdgeInsets.all(12.0),
              child: ResuableCard(
                optionalColor: kContainerColor,
                optionalCardChild: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    const Text(
                      'HEIGHT',
                      style: kLabelTextstyle,
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      crossAxisAlignment: CrossAxisAlignment.baseline,
                      textBaseline: TextBaseline.alphabetic,
                      children: [
                        Text(
                          height.toString(),
                          style: kTxtstylnum,
                        ),
                        const Text(
                          'cm',
                          style: kLabelTextstyle,
                        ),
                      ],
                    ),
                    Slider(
                      value: height.toDouble(),
                      min: kMin,
                      max: kMax,
                      onChanged: (double newVal) {
                        setState(() {
                          height = newVal.toInt();
                        });
                      },
                    ),
                  ],
                ),
              ),
            ),
          ),

          // Weight and Age widgets
          Expanded(
            child: Row(
              children: [
                Expanded(
                  child: Padding(
                    padding: const EdgeInsets.all(17.0),
                    child: ResuableCard(
                      optionalColor: kContainerColor,
                      optionalCardChild: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          const Text(
                            'WEIGHT',
                            style: kLabelTextstyle,
                          ),
                          Text(
                            weight.toString(),
                            style: kTxtstylnum,
                          ),
                          Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              FloatingActionButton(
                                onPressed: () {
                                  setState(() {
                                    weight--;
                                  });
                                },
                                backgroundColor:
                                    const Color.fromARGB(255, 87, 22, 72),
                                child: const Icon(
                                  FontAwesomeIcons.minus,
                                  color: Colors.white,
                                ),
                              ),
                              const SizedBox(width: 17.0),
                              RoundIconButton(
                                icon: FontAwesomeIcons.plus,
                                onPressed: () {
                                  setState(() {
                                    weight++;
                                  });
                                },
                              ),
                            ],
                          ),
                        ],
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Padding(
                    padding: const EdgeInsets.all(17.0),
                    child: ResuableCard(
                      optionalColor: kContainerColor,
                      optionalCardChild: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          const Text(
                            'AGE',
                            style: kLabelTextstyle,
                          ),
                          Text(
                            age.toString(),
                            style: kTxtstylnum,
                          ),
                          Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              FloatingActionButton(
                                onPressed: () {
                                  setState(() {
                                    age--;
                                  });
                                },
                                backgroundColor:
                                    const Color.fromARGB(255, 87, 22, 72),
                                child: const Icon(
                                  FontAwesomeIcons.minus,
                                  color: Colors.white,
                                ),
                              ),
                              const SizedBox(width: 17.0),
                              RoundIconButton(
                                icon: FontAwesomeIcons.plus,
                                onPressed: () {
                                  setState(() {
                                    age++;
                                  });
                                },
                              ),
                            ],
                          ),
                        ],
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),

          // Bottom bar for navigation
          BottomButton(
            onTap: ()
            {

              CalculationFunction calc = 
              CalculationFunction(height: height,
               weight: weight);


              Navigator.push(context,
               MaterialPageRoute(builder: 
               (context) => Result(
                bmiResults: calc.calculateBmi(),
                resultText: calc.getResult(),
                interpretation: calc.GetInterpretation(),
                
               )
               ));
            },
            buttonTitle: 'CALCULATE',
            

          ),
        ],
      ),
    );
  }
}


