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

## 3 - Installing Debian

<p align="justify">
  
Choose your scale rate to get window bigger or smaller: 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/11.png">

The```cmd``` key on your keyboard will help you to switch the capture of your mouse from vm and your system.

1 | We will choose the version without graphic interface ```Install``` (is a mandatory part of the subject). 
 
  To confirm something is used ```Enter key```; The ```Arrow keys``` are used to move around.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/12.png">

2 | Choose the language. Select ```English```.  

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/13.png">

3 | Select the country. If yours there isn't in the list, go to ```other```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/14.png">

4 | Select your location (for me is Italy).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/15.png">

5 | Select the configure locales, choose ```United States```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/16.png">

6 | Select your keymap, I will choose ```American English```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/17.png">

7 | Set a ```Host Name``` of the machine, must be your login followed by a 42.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/18.png">

8 | The ```Domain name``` must be blank until the subject will require it. (see the version of the subject).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/19.png">

9 | Go to *Show Pawssword in Clear* and then press the ```Space bar```. Now set a strong password policy for the root user. **Save this password, will be useful**. Then you need to repeat the password to set.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/20.png">

10 | Set up the username. As is wrote in the subject, write your student login name. Then repeat

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/21.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/22.png">
  
11 | Set our new user password. I will use the same password. Just as before, you need to repeat the process.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/23.png">

12 | Select ```Manual```. (If you want to do the bonus, so we can edit the partitions one by one)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/24.png">


13 | It shows us a general description of our memory partitions and mount points. Currently, I don't have any partitions. To create a new partition, we must choose the disk where we want to create them. In our case, we will choose the only one available.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/25.png">

14 |  Accept the confirmation message. Basically, it warns us that if there are already partitions on the device, they will be deleted and if we are sure to create a new empty partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/26.png">

15 | Appears our partition table that is empty. Now we must configure it, for this we must select ```pri/log  32.2  GB FREE SPACE```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/27.png">
  
16 | Create a new partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/28.png">
  
17 | I start with sda1, as the subject indicates, the size of the partition must be 500 megabytes.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/29.png">
  
18 | Choose the type of partition. We choose primary because it will be the partition where the Operating System will be installed.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/30.png">
  
Brief description of all types of partitions:

◦ Primary: The only partition on which an OS can be installed. There can only be 4 primary partitions per hard drive or 3 primary and one extended.

◦ Extended: It was designed to break the 4 primary partition limitation on a single physical disk. An HDD may contain only one extended partition, but that extended partition can be subdivided into multiple logical partitions. It's used to contain logical partitions.

◦ Logical: It occupies a portion of the primary/extended partition or the whole of it, which has been formatted with a specific type of file system (in our case we will use ext4) and has been assigned a unit, so the operating system recognizes the logical partitions or its file system. There can be a maximum of 23 logical partitions in an extended partition, however, Linux, the OS we are currently working with, reduces it to 15, more than enough for this project.  
  
19 |   Select ```Beginning``` because we want that the new partition will be created at the beginning of the available space.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/31.png">

20 |  It shows the details of the partition. We will modify the mount point as specified in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/32.png">
  
We choose boot.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/33.png">

We finish configuring the current partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/34.png">
  
21 | Completed the previous step, the partition should already appear. Now we must create a logical partition with all the available space on the disk, which has no mount point and is encrypted. To do this, select the free space where we want to create it.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/35.png">
  
22 | Create a new partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/36.png">
  
Select the maximum size.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/37.png">
  
Select the type of partition, logical in this case.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/38.png">

Modify the mount point.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/39.png">
  
Choose the option ``` Do not mount it```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/40.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/41.png">
  
23 | Configure encrypted volumes, so we can encrypt our partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/42.png">
  
Accept the confirmation message.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/43.png">
  
Create the encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/44.png">
  
Select which partition we want to encrypt.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/45.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/46.png">
  
```Finish``` because we don't want to create more encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/47.png">

Accept the confirmation message. It tells us that everything inside the partition will be encrypted and it should not take long to finish.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/48.png">
  
We don't care if it takes a long time or not, cancel it because there is nothing to encrypt since the partition is empty.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/49.png">
  
Enter a password, this time it will be the encryption phrase.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/50.png">
  
24 | ```Configure the logical volume manager```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/51.png">
  
Accept the confirmation message as we agree to save the changes to the disk.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/52.png">

```Create a new volume group```. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/53.png">
  
Enter the name we want to give it: ```LVMGroup``` as indicated in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/54.png">
  
Select the partition where we want to create the group: ```sda5_crypt```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/55.png">
  
Create all the logical partitions as we requested from the subject. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/b.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/56.png">
  
Choose the group where we want to create the logical partitions. We select the only one available (the one we created).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/57.png">
  
The order of creation of the logical units must be the same of the subject, so we will start with root and end with var-log. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/58.png">
  
Size, as indicated in the subject, will be ```10g```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/59.png">
  
Repeat the process for all the seven logical volumes. Then continue with finish.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/60.png">
  
25 | Now we can see all our partitions and free space, all the logical partitions that we just created are already appearing. We must configure the mount point and the usage of these. Again we will go in order and select the first one that appears, which is ```home```.
  

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/61.png">
  
We can see the configuration of the partitions. We must choose a file system as it currently does not have one.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/62.png">

Choose the ```Ext4 file system``` in use as option, it is the most commonly used file system in Linux distributions.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/63.png">
  
Then select the mount point as home. And the first one is gone. Now we need to repeat, to see what mount point I use and the use as, watch the image below.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/64.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/65.png">
  
Final result is:

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/66.png">

Accept the message and the changes will be saved. Make sure that all of the partitions look the same as in the screenshot.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/67.png">

Select the option ```No``` because we don't need additional packages.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/68.png">
  
Choose your Country.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/69.png">
  
Choose ```deb.debian.org```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/70.png">

Leave this option empty and click ```Continue```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/71.png">
  
 We selected the option ```No``` because we do not want developers to see our statistics even though they are anonymous.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/72.png">

Remove all the software options using the spacebar and press ```Continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/73.png">
  
Select ```Yes``` to install  [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) in the primary drive.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/74.png">
  
Choose the device for the bootloader installation ```/dev/sda```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/75.png">
  
Press ```Continue``` to finish the installation.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/76.png">
  
</p>

## 4- Virtual machine setup ⚙️

<p align="justify">

➤ First of all, we must select ```Debian GNU/Linux```.

➤ Now we must introduce the encryptation password that we previously set. In my case ```Hello42bcn```.

<img width="714" alt="Captura de pantalla 2022-07-13 a las 20 47 26" src="https://user-images.githubusercontent.com/66915274/178808699-f1024129-5f90-41d0-a9a8-4806f5bc114b.png">

➤ After that we must introduce the user and password that we created. In my case the user is ```gemartin``` and the password is ```Hola42spain```.

<img width="798" alt="Captura de pantalla 2022-07-13 a las 20 48 38" src="https://user-images.githubusercontent.com/66915274/178808994-664025ac-36df-4332-8e44-505ecd2ca305.png">
  
</p>
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
