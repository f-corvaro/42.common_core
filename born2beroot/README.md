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
    
  [Debian ISO url](https://www.debian.org/download.en.html). I have chosen debian because is highly recommended.

  </p>
  
  ## 2 - Installing the VM (virtual machine)
  
<p align="justify">
  
In this tutorial we will use [Virtual Box](https://www.virtualbox.org/).

  1 | Open VirtualBox and click ```New```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/1.png">

2 | Choose a name for the machine and the folder which will locate it. **!_IMPORTANT_!** Store the machine created inside the goinfre folder located in your cluster server; this is important because we will run out of memory space in our session and the installation will fail. (Ask your staff if you can't find it). Then click ```continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/2.png">

3 | Select the total RAM memory which we will reserve for the machine.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/3.png">

4 | Select the second option - "create a virtual hard disk now".

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/4.png">

5 | Choose ```VDI``` option (we downloaded an ISO).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/5.png">

6 | Select the ```Dynamically allocated``` option, it will allocate the memory of the physical machine as it feels necessary while using the virtual machine until we reach the available limit.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/6.png">

7 | Select the ```12 GB``` recommended then click on ```Create```. If we are doing the bonus, set ```30 GB```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/7.png">

8 | Click on ```Settings```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/8.png">

9 | Now click on ```Storage``` , again click on ```💿 Empty```. Click the ```💿``` in the line of "optical drive" and click ```Choose a disk file```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/9.png">

10 | Select the ISO that we just downloaded and click ```Open```, then click on ```Ok```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/10.png">

11 | Once all this steps have been completed we can ```Start``` our new virtual machine.
  
</p>

## 3- Installing Debian 🌀
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
