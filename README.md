# Quality-control-of-pills_OpenCV-and-Qt

This is an example quality control program for pill defect detection.
The program is in C++ and the user interface has been prepared in Qt.

# Set-up
- I have used OpenCV 4.11.0, Qt 6.8.2
- Don't forget to configure Qt for OpenCV

# Description of the project
Some buttons on the GUI have not been programmed and left for you in case you would like to use them or remove them.
The program controls three defects:

_ Color defect which is the presence of color spots on the pills. These unwanted spots are in yellow, pink and blue. The dark red spots are acceptable.

_ Crack defect on the edge of the pills.

_ Spoilled pills.

Here is a short description of the program.
First step is to make an elipse mask and remove the outer part to keep the pixels under the mask and remove all the background. This leads to have background as absolute zero and will avoid wrongly detection of spots on background. 

![Remove background](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/1.%20remove%20background.png)

Next for the detection of color spot defects, I convert the image to HSV color space. This helps better detection of the desired colors (yellow, pink, blue).

![Convert to HSV](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/2.%20convert%20to%20HSV.png)

For spoilled pill detection, I transformed the image to gray scale, and by verifying the histogram, I found that the spoiled pills are detectable by a thresholding.

![Convert to gray](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/3.%20convert%20to%20gray_spoil%20det.png)

For crack detection, I make two elipses and extract the area between them. The area is the border area of the pill because the cracks and broken parts are on the edge and I only search for cracks then on this area.

![crack detetction](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/4.%20elipse_crack%20det.png)

On the interface, I have added the "Start" and "Stop" buttons for the control. I added a button for entering or changing the OF (Order of fabrication). If it is useful for you, keep it or remove it. I didn't program it as it depends you prefer, it gets the OF from a file, or from a port etc. I have added a "Clear data" button, to clear data in the begining of each OF or day etc. By clicking, it asks the user if he is sure.

![clear data](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/5.%20clear%20data.png)

I have added buttons for deativation of control or part of control. This helps if the manager prefers to produce more products even with some defects. Or in case that you prefer to have the images but without controlling (For example in begining of production, it happens that all the products are in ideal quality). By clicking each one, the button deativates the control and turns the color to light blue.

![deactivate control](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/6.%20deactivate%20a%20control.png)

I have added counters for defects (each and total). I have also added many buttons for presentation of necessary information. An alarm box has been added in case you would like to inform the user for potential errors (or accidents in case you use cameras). This can be programmed for the errors of software, reading image, accident on machine, camera, lights etc. to go Red and make the user aware of it. 
A label on the left side becomes Green when the pill is conforme and goes Red if the pill is not conforme. 
Two previous controlled products are shown on the left side in case the operator needs a double check.
I have added a history window on down left corner in case the production team wants to verify how the control is going on.

![conforme](https://github.com/vmohammadi/Quality-control-of-pills_OpenCV-and-Qt/blob/main/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/7.%20conforme.png)
