import 'package:flutter/material.dart';
import 'input.dart'; 

void main() => runApp(const BMICalculator());

class BMICalculator extends StatelessWidget {
  const BMICalculator({super.key});

  @override
  Widget build(BuildContext context) {
    const Color myCustomColor = Color(0xFF0C0F1E);
    // ignore: constant_identifier_names
    const BackgroundColor =  Color(0xFF0C0F1E);
    return MaterialApp(
      theme: ThemeData(
        //for changing the tools bars and 
        //app bars color doesnt apply to the scaffold
        primaryColor: Colors.white,
        colorScheme : ColorScheme.fromSwatch().copyWith(
          primary: Colors.white,
          secondary: Colors.white,
        ),
        appBarTheme: const AppBarTheme(
          color: myCustomColor,
          foregroundColor: Colors.white,
        ),
        scaffoldBackgroundColor: BackgroundColor,
        textTheme: const TextTheme(
          bodyMedium: TextStyle(
            color: Colors.white,
          ),
        )
        ),
      home: const InputPage(),
    );
  }
}



