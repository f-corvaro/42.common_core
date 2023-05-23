# **BORN2BEROOT** [![fcorvaro's 42 Born2beroot Score](https://badge42.vercel.app/api/v2/clftrr31n000608jvhnng5zld/project/3069523)](https://profile.intra.42.fr/users/fcorvaro)

<a href="https://github.com/f-corvaro/42.common_core/tree/main/born2beroot"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/born2beroot_intra.png">

## Outcome

<p align="justify">
  
[![subject](https://img.shields.io/badge/subject-born2beroot-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/en.subject.pdf)

</p>

  ## Index
  
  ## Introduction
  
  <p align="justify">
    
 Born2beRoot is an introduction to virtualization and system administration. The purpose is to create a virtual machine which is a server implementing strict rules, and minimum required services.
    
  </p>

## 1 - Download the virtual machine ISO

  <p align="justify">
    
  [CLICK HERE](https://www.debian.org/download.en.html) for the URL of the debian ISO. I have chosen debian because is highly recommended.

  </p>
  
  ## 2 - Installing the VM (virtual machine)
  
<p align="justify">
  
In this tutorial we will use [Virtual Box](https://www.virtualbox.org/).

  1 | Open VirtualBox and click ```New```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/1.png">

2 | Choose a name for the machine and the folder which will locate it. **!_IMPORTANT_!** Store the machine created inside the goinfre folder located in your cluster server; this is important because we will run out of memory space in our session and the installation will fail. (Ask your staff if you can't find it)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/2.png">

3 | Select the total RAM memory which we will reserve for the machine.

<img width="685" alt="Captura de pantalla 2022-07-13 a las 13 06 05" src="https://user-images.githubusercontent.com/66915274/178781098-8aa07fbc-e1d2-4bee-8021-ddf052880364.png">

4 | Select the second option so we can create a virtual disk now.

<img width="826" alt="Captura de pantalla 2022-07-13 a las 18 13 24" src="https://user-images.githubusercontent.com/66915274/178781390-289236e0-1732-4dd8-8d3d-34eb0a229a18.png">

5 | Choose the first option ```VDI``` since we downloaded a ISO.

<img width="829" alt="Captura de pantalla 2022-07-13 a las 18 16 35" src="https://user-images.githubusercontent.com/66915274/178781999-a42c3c6c-bc1e-4ad5-8bc5-b4b3f811c3f2.png">

6 | Select the first option ```Dynamically allocated``` so it will allocate the memory of the fisical machine as it feels necessary while using the virtual machine until we reach the available limit.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 19 33" src="https://user-images.githubusercontent.com/66915274/178782529-fb309739-3169-4e20-b3e1-23d17a122a18.png">

7 | One we established the recommended ```12 GB``` we must click on ```Create```. If we are doing the bonus we might set ```30 GB```.

<img width="835" alt="Captura de pantalla 2022-07-13 a las 18 25 20" src="https://user-images.githubusercontent.com/66915274/178783666-4fa624a3-9c38-4c45-b6a8-d476c2864200.png">

8 | It might seem that we have already finish the installation , but there's still some steps to do. Click on ```Settings```.

<img width="831" alt="Captura de pantalla 2022-07-13 a las 18 30 46" src="https://user-images.githubusercontent.com/66915274/178784822-38228e96-ca37-4cc0-b3ca-551829e4c8c8.png">

9 | Now click on ```Storage``` , again click on the 💿 that we find on the right and click on ```Choose a disk file```.

<img width="962" alt="Captura de pantalla 2022-07-13 a las 18 33 28" src="https://user-images.githubusercontent.com/66915274/178785148-2904cf4f-93c0-4866-a5d6-778390bddeb7.png">

10 | Select the ISO that we just downloaded and click ```Open```, then click on ```Ok```. 

<img width="790" alt="Captura de pantalla 2022-07-13 a las 18 38 39" src="https://user-images.githubusercontent.com/66915274/178786115-24f93fde-bc01-4e60-bf8d-20d7a5ae83be.png">

11 | Once all this steps have been completed we can ```Start``` our new virtual machine.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 44 55" src="https://user-images.githubusercontent.com/66915274/178787317-aab80b53-8244-4ede-9c75-11fcf4efdd1c.png">
  
    </p>

## 3- Installing Debian 🌀
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
