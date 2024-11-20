import 'package:flutter/material.dart';

// Custom widget for reusable card
class ResuableCard extends StatelessWidget {
  final Color? optionalColor;
  final Widget? optionalCardChild;
  final Function()? optionalonpress; // Use a nullable Function type

  const ResuableCard({
    super.key,
    this.optionalColor,
    this.optionalCardChild,
    this.optionalonpress,
  });

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: optionalonpress, // Invoke the function directly if provided
      child: Container(
        height: 200,
        width: 170,
        decoration: BoxDecoration(
          color: optionalColor ?? Colors.grey, // Default to grey if no color provided
          borderRadius: BorderRadius.circular(30.0),
        ),
        child: optionalCardChild ?? const SizedBox.shrink(), // Provide an empty widget if no child provided
      ),
    );
  }
}
