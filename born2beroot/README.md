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

## 4- VM setup 

<p align="justify">

-> Select ```Debian GNU/Linux```.

-> Write the encryptation password that previously we set. For me is ```Pw.20STNG!81```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/77.png">

-> After that we must introduce the user and password that we created. In my case the user is ```fcorvaro``` and the password is ```Pw.20STNG!81```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/78.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/79.png">
  
### 1 - Installing sudo & configuration of user and groups 

1 | The beginning of the installation starts with changing user to root so we can install sudo, for this purpouse we write ```su -``` in the bash prompt and introduce the root password, for me ```Pw.20STNG!81```.
Once we are done we write down the command 
```
$>apt-get update
$>apt-get install vim
$>apt install sudo
```

Verify whether _sudo_ was successfully installed via `dpkg -l | grep sudo`.

```
$>dpkg -l | grep sudo
```

2 | Adding User to _sudo_ Group

```
$>adduser <username> sudo
```

Alternatively, add user to sudo group via `usermod -aG sudo <username>`.

	$>usermod -aG sudo <username>

Verify whether user was successfully added to sudo group via `getent group sudo`.

	$>getent group sudo

`sudo reboot` for changes to take effect, then log in and verify sudopowers via `sudo -v`.

3 | 

5 | We will create a new group called ```user42```. For that we must use ```sudo addgroup user42```.

<img width="367" alt="Screen Shot 2022-10-26 at 6 30 52 PM" src="https://user-images.githubusercontent.com/66915274/198082677-d393243e-363a-4d1f-95d8-a6695336a47a.png">

🧠 <b>What is GID❓</b> It's the group identifier, in short, Group 🆔.

🤔 <b> Was the group created without problems? </b> Truth is that there is no sign of one, still we can check it using ```getent group <groupname>``` or we can also use ```cat /etc/group``` and see all groups and the users in any of them.

6 ◦ With ```sudo adduser <user> <groupname>``` we can include a user to a group. We mst include out user in the groups ```sudo``` and ```user42```.

<img width="422" alt="Screen Shot 2022-10-26 at 6 32 30 PM" src="https://user-images.githubusercontent.com/66915274/198083019-c5a442bb-c625-45ce-84e1-bcbca3a7dba5.png">

<img width="404" alt="Screen Shot 2022-10-26 at 6 34 09 PM" src="https://user-images.githubusercontent.com/66915274/198083377-bd4162c6-317b-474f-8bc4-e542be4dcfde.png">

7 ◦ Once we are done with that we can check it using ```getent group <groupname>``` or editing the /etc/group file using ```nano /etc/group```; the groups ```sudo``` and ```user42``` must be present with our user.

<img width="328" alt="Screen Shot 2022-10-26 at 6 35 50 PM" src="https://user-images.githubusercontent.com/66915274/198083739-ad16e388-69c3-41d1-a061-e55dd66b0d14.png">

<img width="151" alt="Screen Shot 2022-10-26 at 6 36 18 PM" src="https://user-images.githubusercontent.com/66915274/198083854-0fba5296-a49f-44cc-8427-59a692e69288.png">

<img width="353" alt="Screen Shot 2022-10-26 at 6 39 22 PM" src="https://user-images.githubusercontent.com/66915274/198084464-f73352ee-ed21-478b-a44d-d86eb6d8a1cd.png">

<img width="183" alt="Screen Shot 2022-10-26 at 6 38 25 PM" src="https://user-images.githubusercontent.com/66915274/198084311-45a50162-ff89-4e7d-a3c5-45e7048520a4.png">

### 4.2 - Installing & configuring SSH 📶

🧠 <b> What is SSH❓</b> The acronym SSH stands for "Secure Shell." The SSH protocol was designed as a secure alternative to unsecured remote shell protocols. It utilizes a client-server paradigm, in which clients and servers communicate via a secure channel.

1 ◦ First thing, we should update the system using ```sudo apt update```.

<img width="774" alt="Captura de pantalla 2022-07-14 a las 3 09 44" src="https://user-images.githubusercontent.com/66915274/178864173-aa5a08cf-8562-4484-a60a-3e1c7a533a28.png">

2 ◦ Following up we will install the main tool for remote access with the SSH protocol, using OpenSSH. The installation requieres the package ```sudo apt install openssh-server```. When we are asked for confirmation we will write ```y```, and just then the installation will proceed.

<img width="772" alt="Captura de pantalla 2022-07-14 a las 3 14 52" src="https://user-images.githubusercontent.com/66915274/178865991-cdb90f12-ebd8-4583-bcbb-70f47c86abe6.png">

Anywan curious that the installation have been realices without problems we can use ```sudo service ssh status``` and it will show how is the state of it. **Active** must be show to continue.

<img width="702" alt="Captura de pantalla 2022-07-14 a las 3 53 59" src="https://user-images.githubusercontent.com/66915274/178876938-7fd74214-15df-4759-bf8d-52b53a8f4251.png">

3 ◦ Going on, some files have been created and we need to configur them. For that we will use [Nano](https://en.wikipedia.org/wiki/GNU_Nano) or [VIM](https://en.wikipedia.org/wiki/Vim_(text_editor)) (we will need to install vim since it's not preinstalled using ```sudo apt install vim```) or any other text editor. First file that we will edit will be ```/etc/ssh/sshd_config```. If you are not on root you will not be able to edit the file; as you know, for switching to root we use ```su```.

<img width="497" alt="Captura de pantalla 2022-07-14 a las 3 24 21" src="https://user-images.githubusercontent.com/66915274/178867150-273c75c1-c935-45f0-a551-1a115d3f6f6a.png">

4 ◦ The ```#``` means that line it is commented; the lines that we will be edit have to be uncommented. Once we are editing the  file we need to update the following lines:

➤ #Port 22 -> Port 4242

<img width="807" alt="Captura de pantalla 2022-07-14 a las 3 31 04" src="https://user-images.githubusercontent.com/66915274/178867929-0f8be11e-d0ca-4445-af05-a693d01411bd.png">

➤ #PermitRootLogin prohibit-password -> PermitRootLogin no

<img width="798" alt="Captura de pantalla 2022-07-14 a las 3 34 13" src="https://user-images.githubusercontent.com/66915274/178868266-fc6d6684-8196-4021-b884-a047a443a3ec.png">

When finish we have to save the changes and leave the file.

5 ◦ Now with the file ```/etc/ssh/ssh_config```. (not ```sshd_config```)

<img width="501" alt="Captura de pantalla 2022-07-14 a las 3 48 56" src="https://user-images.githubusercontent.com/66915274/178872582-8277e687-8ab7-4087-bd17-a71e5e86d5e6.png">

Edit the following line: 

➤ #Port 22 -> Port 4242

<img width="795" alt="Captura de pantalla 2022-07-14 a las 3 50 29" src="https://user-images.githubusercontent.com/66915274/178875013-1969c13f-9e43-4f2a-a037-f384a8e87a78.png">

6 ◦ Finally we must restart the ssh service so it can be updated. For that purpuse we will use ```sudo service ssh restart``` and once it is done we will check the service state with ```sudo service ssh status``` and confirm that everything is alright.

<img width="713" alt="Captura de pantalla 2022-07-14 a las 3 56 56" src="https://user-images.githubusercontent.com/66915274/178880333-0e2ad7fd-674b-4b4f-b92a-25acbc36c8a5.png">


### 4.3 Installing & configuring UFW 🔥🧱

🧠 <b>What is [UFW](https://en.wikipedia.org/wiki/Uncomplicated_Firewall)❓</b> It is a [firewall](https://en.wikipedia.org/wiki/Firewall_(computing)) which use the command line for setting up [iptables](https://en.wikipedia.org/wiki/Iptables) using a small number of easy commands.

1 ◦ First things first, we need to install the packages for UFW, for that we will use ```sudo apt install ufw```, then when we are asked for confirmation type ```y``` and the installation will proceed

<img width="771" alt="Captura de pantalla 2022-07-14 a las 19 28 55" src="https://user-images.githubusercontent.com/66915274/179045920-4a9aec64-b1d7-4785-89a1-4a299aae21a3.png">

<img width="802" alt="Captura de pantalla 2022-07-14 a las 19 29 25" src="https://user-images.githubusercontent.com/66915274/179045994-19cdf6e0-be61-454b-9adc-ba1f9c2dfd84.png">

2 ◦ When we are done with it, we want to start it using the command ```sudo ufw enable``` and then it have to show us the the *firewall is ative.*

<img width="498" alt="Captura de pantalla 2022-07-14 a las 19 32 57" src="https://user-images.githubusercontent.com/66915274/179046565-307c042b-243e-4224-bcb2-d02859332352.png">

3 ◦ Then we must allow our firewall to accept the connections that will happens in the 4242 port. What we will do is use ```sudo ufw allow 4242```. 

<img width="514" alt="Captura de pantalla 2022-07-14 a las 19 34 12" src="https://user-images.githubusercontent.com/66915274/179046765-5277ec55-b8e4-4d4f-a617-a2a8758b80a8.png">

4 ◦ Lastly we will check if everything done here is correct checking the actual state of our firewall. For that we will use ```sudo ufw status```. Alternatively ```sudo ufw status verbose``` or ```sudo ufw status numbered``` can be used.

<img width="575" alt="Captura de pantalla 2022-07-14 a las 19 38 37" src="https://user-images.githubusercontent.com/66915274/179047574-8073045c-6e78-4b6f-8487-cb0f490a2cd0.png">

### 4.4 Setting up the sudo policies 🔒

1 ◦ Begining with this section, we will create a file in */etc/sudoerd.d/*. The file will serve the purpouse of storing our sudo policy. The command that we will use will be ```touch /etc/sudoers.d/sudo_config```.

<img width="511" alt="Captura de pantalla 2022-07-14 a las 22 00 40" src="https://user-images.githubusercontent.com/66915274/179072822-2f86bd8b-216e-45e4-a15b-8fe3a49149ff.png">

2 ◦ Then we must create a directory as is asked in the subject in */var/log/* because each commands need to be logged, the input and output. We will use ```mkdir /var/log/sudo``` for our folder.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 21 56 53" src="https://user-images.githubusercontent.com/66915274/179072210-ad99e50d-fa57-494b-999d-3a80dd0f7849.png">

3 ◦ We must edit the file that we created in the first step of this section. Use any text editor, but for this guide as is in every screenshot we will use nano. Use ```nano /etc/sudoers.d/sudo_config```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 22 04 10" src="https://user-images.githubusercontent.com/66915274/179073389-5b2a9c16-811c-4133-87c6-479e770c880b.png">

4 ◦ Once we are editing the file we must set it up with the following commands.

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

➤ As it should be on the file.

<img width="1202" alt="Captura de pantalla 2022-07-16 a las 2 03 45" src="https://user-images.githubusercontent.com/66915274/179326003-1fd67295-4be2-47bd-98fc-d5821f5f1c4d.png">

🤔 <b>What does each command❓ </b>

![F5B5BED3-C144-4EDF-91AB-226533DD5B18_4_5005_c](https://user-images.githubusercontent.com/66915274/211846396-e3212104-b8ce-412c-ac1a-e4d3124dfba8.jpeg)

🟩 **GREEN**	-> Total tries for entering the sudo password.

🟥 **RED**		-> The message that will show when the password failed.

🟨 **YELLOW**	-> Path where will the sudo logs will be stored.

🟦 **BLUE**	-> What will be logged.

🟫 **BROWN**	-> TTY is required lol.

🟪 **PURPLE**	-> Folders that will be excluded of sudo

### 4.5 Setting up a strong password policy 🔑

1 ◦ First step will be editing the login.defs file.

<img width="493" alt="Captura de pantalla 2022-07-16 a las 2 54 06" src="https://user-images.githubusercontent.com/66915274/179327943-67432d4a-7042-44ea-96f4-5975556ce4dc.png">

2 ◦ Once we are done editing the file, we will set the next parameters:

➤ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

➤ PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2


<img width="802" alt="Captura de pantalla 2022-07-16 a las 3 05 49" src="https://user-images.githubusercontent.com/66915274/179328449-32a40f67-a18d-4f29-993b-94d013cd7670.png">

PASS_MAX_DAYS: It's the max days till password expiration.

PASS_MIN_DAYS: It's the min days till password change.

PASS_WARN_AGE: It's the days till password warning.

3 ◦ For continuing the installation we must install the next packages with the following command```sudo apt install libpam-pwquality``` , then we wrute ```Y``` so we can continue; we wait till it finish.

<img width="770" alt="Captura de pantalla 2022-07-16 a las 3 13 52" src="https://user-images.githubusercontent.com/66915274/179328708-c5054703-bdb0-4cca-82a8-6ab25ce42b40.png">

4 ◦ Next thing we must do is is edit a file and change itś content. We will use ```nano /etc/pam.d/common-password```. 

<img width="500" alt="Captura de pantalla 2022-07-16 a las 3 27 02" src="https://user-images.githubusercontent.com/66915274/179329260-0e18bd27-a522-4c7c-86bf-21823eee0f8b.png">

5 ◦ After retry=3 we must add the following commands:

```
minlen=10
ucredit=-1
dcredit=-1
lcredit=-1
maxrepeat=3
reject_username
difok=7
enforce_for_root
```
➤ This is how the line must be↙️

<img width="1127" alt="Captura de pantalla 2022-07-16 a las 3 34 33" src="https://user-images.githubusercontent.com/66915274/179329511-0619183a-8ccc-456b-8f27-3962fc542cc3.png">

➤ This is how the file must look ↙️

<img width="800" alt="Captura de pantalla 2022-07-16 a las 3 38 08" src="https://user-images.githubusercontent.com/66915274/179329787-1b718843-9272-43e4-8d92-8d83933cc938.png">

🤔 <b>What does each command❓</b>

minlen=10 ➤ The minimun characters a password must contain.

ucredit=-1 ➤ The password at least have to contain a capital letter. We must write it with a - sign, as is how it knows that's refering to minumum caracters; if we put a + sign it will refer to maximum characters.

dcredit=-1 ➤ The passworld at least have to containt a digit.

lcredit=-1 ➤ The password at least have to contain a lowercase letter.

maxrepeat=3 ➤ The password can not have the same character repited three contiusly times.

reject_username ➤ The password can not contain the username inside itself.

difok=7 ➤ The password it have to containt at least seven diferent characters from the last password ussed. 

enforce_for_root ➤ We will implement this password policy to root.

### 4.6 Connecting via SSH 🗣

1 ◦ If we want to connect via SSH we must close the machine and go to settings.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Once there we will click on ```Network```, click on ```Advanced``` so it shows more options, then we click on ```Port fowarding```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Click on the emoji for adding a new rule.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Lastly we will add the ```4242``` port to host and client. The IP's are not required. We will click accept so changes can be saved.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ To connect via ssh from the machine to the virstual machine using and the use the command ```ssh <user>@localhost -p 4242```; it will ask for the password of the user that we are trying to log in. Once the password is introduced it will show or login in green, that will mean that the connections has been successfully.

<img width="517" alt="Screen Shot 2022-10-27 at 12 40 23 AM" src="https://user-images.githubusercontent.com/66915274/198174777-28f7793b-273b-43ce-b1c2-4a890353cb8c.png">

<img width="566" alt="Screen Shot 2022-10-27 at 12 40 04 AM" src="https://user-images.githubusercontent.com/66915274/198174814-c1873c62-41dd-4c1d-ad2d-f268b2da0e4c.png">

## 5- Script 🚨
  

</p>
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
