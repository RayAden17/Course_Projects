import 'package:bmi_calculator/resusecard.dart';
import 'package:flutter/material.dart';
import 'constance.dart';
import 'bottomButton.dart';
class Result extends StatelessWidget {
  const Result({super.key, required this.bmiResults, required this.resultText, required this.interpretation});

final String bmiResults;
final String resultText;
final String interpretation;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        // Wrap the AppBar title with a Hero widget
        title: Hero(
          tag: 'bmiCalculatorTitle',  // Use the same tag as the InputPage
          child: const Text('BMI CALCULATOR CALCULATE'),
        ),
      ),
      body: Column(
        crossAxisAlignment: CrossAxisAlignment.stretch,
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          Expanded(
            child: Container(
              padding: EdgeInsets.all(15.0),
              alignment: Alignment.bottomLeft,
              child: const Text(
                'Your Results',
                style: kTitleStyle,
                textAlign: TextAlign.center,
              ),
            ),
          ),
          Expanded(
            flex: 5,
            child: ResuableCard(
              optionalColor: kInactiveColor,
              optionalCardChild: Column(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                crossAxisAlignment: CrossAxisAlignment.center,
                children: [
                  Text(
                    resultText.toUpperCase(),
                    style: kResultText,
                    textAlign: TextAlign.center,
                  ),
                  Text(
                    bmiResults,
                    style: kBMIStyle,
                    textAlign: TextAlign.center,
                  ),
                  Text(
                    interpretation,
                    style: kInterpreationStyle,
                    textAlign: TextAlign.center,
                  ),
                ],
              ),
            ),
          ),

          BottomButton(buttonTitle: 'RE-CALCULATE', 
          onTap: ()
          {
            Navigator.pop(context);
          }
          
          )


        ],
      ),
    );
  }
}
