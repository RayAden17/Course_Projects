import 'package:flutter/material.dart';
import 'constance.dart';

class BottomButton extends StatelessWidget {

const BottomButton ({super.key, required this.buttonTitle, required this.onTap});

final VoidCallback onTap;
final String buttonTitle;


  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: onTap,
      


      child: Container(
        color: const Color(0xFFEB1555),
        margin: const EdgeInsets.only(top: 10.0),
        width: double.infinity,
        padding: EdgeInsets.only(bottom: 20.0),
        height: kBottomContainerHeight,
        child:  Center(
          child: Text(
            buttonTitle,
            style: kLargeButtonStyle,
          ),
        ),
      ),
    );
  }
}