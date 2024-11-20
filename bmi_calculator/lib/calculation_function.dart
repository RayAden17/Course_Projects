import 'dart:math';


class CalculationFunction {

//constructor
CalculationFunction({
required this.height,
required this.weight,

});


  final int height;
  final int weight;
  late double _bmi;

//bmi calculation function
String calculateBmi()
{
_bmi = weight/ pow(height/100,2);

//conversion to 1dp
return _bmi.toStringAsFixed(1);


}


String getResult()
{
  if (_bmi >= 25)
  {
    return 'Overweight ';
  }
  else if(_bmi >18.5)
  {
    return 'you lie within a normal range';
  }
  else
  {
    return 'Underweight';
  }


}

String GetInterpretation()
{

 if (_bmi >= 25)
  {
    return 'You have a body weight higher than normal range.Need to Control Weight ';
  }
  else if(_bmi >18.5)
  {
    return 'you lie within a normal range, Good Job!';
  }
  else
  {
    return 'You have a lower body weight than normal try to gain weight';
  }

}




}