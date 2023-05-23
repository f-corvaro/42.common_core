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


  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/67.png">
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/68.png">
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/69.png">
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/70.png">
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  We choose the disk wich we wish to create the partition (it only have to show one disk).

<img width="789" alt="Captura de pantalla 2022-07-13 a las 19 40 03" src="https://user-images.githubusercontent.com/66915274/178796481-29ef7ebc-0518-40f0-9429-3f43316b35d3.png">

17 ◦ Once we choosed the disk we must make the partition as is in the subject. To do it properly we select the second option ```Separate /home partition```.

<img width="787" alt="Screen Shot 2023-03-08 at 1 44 16 PM" src="https://user-images.githubusercontent.com/66915274/223716446-9ffb6f66-1ad3-4bfe-81ce-1f297bed0ede.png">

18 ◦ We choose option ```Yes``` so the changes will be writen in the disk and so we can set the logical volume manager (LVM).

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 44 30" src="https://user-images.githubusercontent.com/66915274/178797258-8c34bc31-16a7-4aef-8406-cecc21fdf028.png">

19 ◦ We click on ```Cancel```; the erasing of the data is not required. 

<img width="782" alt="Captura de pantalla 2022-07-13 a las 19 46 45" src="https://user-images.githubusercontent.com/66915274/178797666-78cdf892-1a83-4c68-8f85-0d5440cd4854.png">

20 ◦ Again, we must choose desired password for the LVM encrypt. As is mention before we must repite the process and I advice you to write it down.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 51 17" src="https://user-images.githubusercontent.com/66915274/178798491-4c9b4a0c-d698-47c7-9579-10b16aa47275.png">

21 ◦ In this step we must input the required amount of volume group to use during the guided partitioning. We can write down ```max``` or the total avalaible memory, in this case being ```12.4 GB```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 55 02" src="https://user-images.githubusercontent.com/66915274/178799165-c6b05fd2-86ad-45b7-a026-9ee169eda5d5.png">

22 ◦ To wrap the partitioning and write the changes in the disk we choose the option ```Finish partitioning and write changes to disk```.

<img width="789" alt="Screen Shot 2023-03-08 at 1 46 17 PM" src="https://user-images.githubusercontent.com/66915274/223716909-c20cea01-950f-49cd-9ce6-99ec0eab0ea4.png">

23 ◦ We choose the option ```Yes``` and then we confirm that we do not want more changes.

<img width="770" alt="Screen Shot 2023-03-08 at 1 46 52 PM" src="https://user-images.githubusercontent.com/66915274/223716940-b2e29ee7-3c98-434e-bccd-ac21d72eda2d.png">

24 ◦ We select the option ```No``` as is not required addicional packages.

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

25 ◦ We choose our Country.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

26 ◦ We choose ```deb.debian.org``` as is the recommended by debian itself.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

27 ◦ We will left this option blank and we click on ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

28 ◦ We select the option ```No``` as we want to remain out of the stadistics.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

29 ◦ We will left in blank all software choises (with the space bar) and click on ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

30 ◦ We select ```Yes``` for install [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) in the hard disk.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

31 ◦ We will choose the device ```/dev/sda (ata_VBOX_HARDDISK)``` for the installation for boot loader.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

32 ◦ To finish the installation we click on ```Continue```. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

## 4- Virtual machine setup ⚙️

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
