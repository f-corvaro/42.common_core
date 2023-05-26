# ✅ **BORN2BEROOT** [![fcorvaro's 42 Born2beroot Score](https://badge42.vercel.app/api/v2/clftrr31n000608jvhnng5zld/project/3069523)](https://profile.intra.42.fr/users/fcorvaro)

<a href="https://github.com/f-corvaro/42.common_core/tree/main/born2beroot"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/born.png">

## Outcome

<p align="justify">
	
[![subject](https://img.shields.io/badge/subject-born2beroot-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/en.subject.pdf)
</p>

## Index

0. [About](#0---about)
	
1. [Download the virtual machine ISO](#1---download-the-virtual-machine-iso)

2. [Installing the VM (virtual machine)](#2---installing-the-vm---virtual-machine)

3. [Installing Debian](#3---installing-debian)

4. [VM setup](#4---vm-setup)

	4.1 [Installing sudo & configuration of user and groups](#41---installing-sudo--configuration-of-user-and-groups)

	4.2 [Installing & configuring SSH](#42---installing--configuring-ssh)
	
	4.3 [Installing & configuring UFW](#43---installing--configuring-ufw)

	4.4 [Setting up a strong password policy](#44---setting-up-a-strong-password-policy)
	
	4.5 [Connecting via SSH](#45---connecting-via-ssh)
	
5. [Script System Info](#5---script-system-info)
	
	5.1 [Architecture](#51---architecture)
	
	5.2 [Physical Cores](#52---physical-cores)
	
	5.3 [Virtual Cores](#53---virtual-cores)
	
	5.4 [RAM](#54---ram)
	
	5.5 [Disk memory](#55---disk-memory)
	
	5.6 [CPU usage percentage](#56---cpu-usage-percentage)
	
	5.7 [Last reboot](#57---last-reboot)
	
	5.8 [LVM activation](#58---lvm-activation)
	
	5.9 [TCP](#59---tcp)
	
	5.10 [Number of users](#510---number-of-users)
	
	5.11 [IP adress](#511---ip-adress)
	
	5.12 [Number of commands executed with sudo](#512---number-of-commands-executed-with-sudo)
	
	5.13 [Total result of the script](#513---total-result-of-the-script)
	
6. [Crontab](#6---crontab)
	
7. [Bonus](#7---bonus)
	
	7.1 [Wordpress & services configuration](#71---wordpress--services-configuration)
	
	7.1.a [Lighttpd](#71a---lighttpd)
	
	7.1.b [WordPress](#71b---wordpress)
	
	7.1.c [Mariadb](#71c---mariadb)
	
	7.1.d [Database](#71d---database)
	
	7.1.e [PHP](#71e---php)
	
	7.2 [Additional service](#72---additional-service)
	
8. [Signature.txt](#8---signaturetxt)
	
9. [Theory](#9---theory)
	
	9.1 [How to correct - evaluator version](#91---how-to-correct---evaluator-version)
	
	9.2 [Must to know](#92---must-to-know)
	
	9.3 [Correction Sheet](#93---correction-sheet)
	
[LICENSE](#license)

## 0 - _About_
  
<p align="justify">
Born2beRoot is an introduction to virtualization and system administration. The purpose is to create a virtual machine which is a server implementing strict rules, and minimum required services. The Born2beroot project is distinct from the programming-focused projects of the 42 curriculum. The project revolves around setting up a Virtual Machine, which is encrypted with a passphrase to ensure system security. As a result, the project repository only contains a script programmed to run every 10 minutes after the virtual machine starts, as well as the virtual machine signature.
</p>

## 1 - Download the virtual machine ISO

<p align="justify">
    
[Debian ISO url](https://www.debian.org/download.en.html). I have chosen debian because is highly recommended in the subject.
</p>
  
## 2 - Installing the VM - virtual machine

<p align="justify">
In this tutorial we will use [Virtual Box](https://www.virtualbox.org/).

1 | Open VirtualBox and click ```New```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/1.png">

2 | Choose a name for the machine and the folder which will locate it. 
	
**IMPORTANT:** Store the machine created inside the goinfre folder located in your cluster server. This will avoid the run out of memory space in your session and avoid that the installation will fail. (Ask your staff if you can't find it). Then click ```continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/2.png">

3 | Select the total RAM memory which we will reserve for the machine.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/3.png">

4 | Select the second option - ```create a virtual hard disk now```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/4.png">

5 | Choose ```VDI``` option (we downloaded an ISO).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/5.png">

6 | Select the ```Dynamically allocated``` option, it will allocate the memory of the physical machine as it feels necessary while using the virtual machine until we reach the available limit.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/6.png">

7 | Set ```30 GB```, because we are doing the bonus.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/7.png">

8 | Click on ```Settings```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/8.png">

9 | Now click on ```Storage``` , again click on ```💿 Empty```. Click the ```💿``` in the line of "optical drive" and click ```Choose a disk file```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/9.png">

10 | Select the ISO that we just downloaded and click ```Open```, then click on ```Ok```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/10.png">

11 | Once all this steps have been completed we can ```Start``` our new virtual machine from VirtualBox.
</p>

## 3 - Installing Debian

<p align="justify">
	
Choose your scale rate to get window bigger or smaller: (I prefer 300%)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/11.png">

The ```cmd``` key on your keyboard will help you to switch the capture of your mouse from vm to your system or viceversa.
  
**WARNING:** when you will switch from one to another, pay attention to change uppercase to lowercase or viceversa. This could be a common mistake that you wuold do and you would have problem with the input of the password, because the vm will remain at the old choice.

1 | We will choose the version without graphic interface ```Install``` (is a mandatory part of the subject). 
 
To confirm something is used ```Enter key```.
  
The ```Arrow keys``` are used to move around.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/12.png">

2 | Choose the language. Select ```English```.  

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/13.png">

3 | Select the country. If yours there isn't in the list, go to ```other```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/14.png">

4 | Select your location (for me is Italy).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/15.png">

5 | Select the configure locales, choose ```United States```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/16.png">

6 | Select your keymap, I will choose ```American English```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/17.png">

7 | Set a ```Host Name``` of the machine, must be your login followed by a 42.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/18.png">

8 | The ```Domain name``` must be blank until the subject will require it (see the version of the subject).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/19.png">

9 | Go to *Show Password in Clear* and then press the ```Space bar```. Now set a strong password policy for the root user. **Save this password, will be useful**. Then you need to repeat the password to set.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/20.png">

10 | Set up the username. As is wrote in the subject, write your student login name. Then repeat

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/21.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/22.png">
  
11 | Set our new user password. I will use the same password. Just as before, you need to repeat the process.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/23.png">

12 | Select ```Manual```. (Is required part for the bonus, so we can edit the partitions one by one)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/24.png">

13 | It shows us a general description of our memory partitions and mount points. Currently, I don't have any partitions. To create a new partition, we must choose the disk where we want to create them. In our case, we will choose the only one available.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/25.png">

14 |  Accept the confirmation message. Basically, it warns us that if there are already partitions on the device, they will be deleted and if we are sure to create a new empty partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/26.png">

15 | Appears our partition table that is empty. Now we must configure it, for this we must select ```pri/log  32.2  GB FREE SPACE```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/27.png">
  
16 | Create a new partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/28.png">
  
17 | I start with sda1, as the subject indicates, the size of the partition must be 500 megabytes.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/29.png">
  
18 | Choose the type of partition. We choose primary because it will be the partition where the operating system will be installed.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/30.png">

+ **Brief description of all types of [disk partitions](https://en.wikipedia.org/wiki/Disk_partitioning) :**

* **Primary:** The only partition on which an OS can be installed. There can only be 4 primary partitions per hard drive or 3 primary and one extended. 

* **Extended:** It was designed to break the 4 primary partition limitation on a single physical disk. An HDD may contain only one extended partition, but that extended partition can be subdivided into multiple logical partitions. It's used to contain logical partitions.

- **Logical:** It occupies a portion of the primary/extended partition or the whole of it, which has been formatted with a specific type of file system (in our case we will use ext4) and has been assigned a unit, so the operating system recognizes the logical partitions or its file system. There can be a maximum of 23 logical partitions in an extended partition, however, Linux (the OS we are currently working with), reduces it to 15, more than enough for this project.  

Check also **[GUID Partion Table](https://en.wikipedia.org/wiki/GUID_Partition_Table)**.
	
19 |   Select ```Beginning``` because we want that the new partition will be created at the beginning of the available space.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/31.png">

20 |  It shows the details of the partition. We will modify the mount point as specified in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/32.png">
  
Choose ```/boot```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/33.png">

Finish configuring the current partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/34.png">
  
21 | Completed the previous step, the partition should already appear. Now we must create a logical partition with all the available space on the disk, which has no mount point and is encrypted. To do this, select the free space where we want to create it.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/35.png">
  
22 | Create a new partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/36.png">
  
Select the maximum size.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/37.png">
  
Select the type of partition, logical in this case.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/38.png">

Modify the mount point.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/39.png">
  
Choose the option ```Do not mount it```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/40.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/41.png">
  
23 | Configure encrypted volumes, so we can encrypt our partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/42.png">
  
Accept the confirmation message.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/43.png">
  
Create the encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/44.png">
  
Select which partition we want to encrypt.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/45.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/46.png">
  
```Finish``` because we don't want to create more encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/47.png">

Accept the confirmation message. It tells us that everything inside the partition will be encrypted and it should not take long to finish.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/48.png">
  
```cancel``` it because there is nothing to encrypt (the partition is empty).
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/49.png">
  
Enter a password, this time it will be the encryption phrase.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/50.png">
  
24 | ```Configure the logical volume manager```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/51.png">
  
Accept the confirmation message as we agree to save the changes to the disk.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/52.png">

```Create a new volume group```. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/53.png">
  
Enter the name we want to give it: ```LVMGroup``` as indicated in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/54.png">
  
Select the partition where we want to create the group: ```sda5_crypt```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/55.png">
  
Create all the logical partitions as we requested from the subject. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/b.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/56.png">
  
Choose the group where we want to create the logical partitions. We select the only one available (the one we created).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/57.png">
  
The order of creation of the logical units must be the same of the subject, so we will start with ```root``` and end with ```var-log```. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/58.png">
  
Size, as indicated in the subject, will be ```10g```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/59.png">
  
Repeat the process for all the seven logical volumes. Then continue with finish.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/60.png">
  
25 | Now we can see all our partitions and free space, all the logical partitions that we just created are already appearing. We must configure the mount point and the usage of these. Again we will go in order and select the first one that appears, which is ```home```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/61.png">
  
We can see the configuration of the partitions. We must choose a file system as it currently does not have one.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/62.png">
	
Choose the ```Ext4 file system``` in use as option, it is the most commonly used [file system](https://en.wikipedia.org/wiki/File_system) in Linux distributions.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/63.png">
  
Then select the [mount point](https://en.wikipedia.org/wiki/Mount_(computing)#MOUNT-POINT) as home.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/64.png">

And the first one is gone.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/65.png">
  
Now we need to repeat, to see what mount point I use and the use as, watch the image below that resume the final result:

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/66.png">

Accept the message and the changes will be saved. Make sure that all of the partitions look the same as in the screenshot.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/67.png">

Select the option ```No``` because we don't need additional packages.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/68.png">
  
Choose your Country.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/69.png">
  
Choose ```deb.debian.org```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/70.png">

Leave this option empty and click ```Continue```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/71.png">
  
 We selected the option ```No``` because we do not want that developers watch our statistics even though they are anonymous.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/72.png">

Remove all the software options using the spacebar and press ```Continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/73.png">
  
Select ```Yes``` to install  [GRUB](https://es.wikipedia.org/wiki/GNU_GRUB) boot in the primary drive.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/74.png">
  
Choose the device for the bootloader installation ```/dev/sda```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/75.png">
  
Press ```Continue``` to finish the installation.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/76.png">

## 4 - VM setup 

### Boot - When the system boot 
  
-> Select ```Debian GNU/Linux```.

### Boot - The system will require the password of the encrypted disk 
  
-> Write the encryptation password that previously we set. For me is ```Pw.20STNG!81```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/77.png">

### Boot - The system will require the user and password that we created 
  
-> In my case the user is ```fcorvaro``` and the password is ```Pw.20STNG!81```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/78.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/79.png">
  
### 4.1 - Installing sudo & configuration of user and groups 

1 | The beginning of the installation starts with changing user to root so we can install [sudo](https://en.wikipedia.org/wiki/Sudo). For doing this write ```su -``` in the bash prompt and introduce the root password (for me ```Pw.20STNG!81```). Furthermore we will install [VIM](https://en.wikipedia.org/wiki/Vim_(text_editor)) to configure some files. 
Write the command 
  
```
$>apt-get update
$>apt-get install vim
$>apt install sudo
```

Verify whether _sudo_ was successfully installed via:

```
$>dpkg -l | grep sudo
```

2 | Adding User to _sudo_ Group

```
$>adduser <username> sudo
```

Alternatively, add user to sudo group via:

	$>usermod -aG sudo <username>

Verify whether user was successfully added to sudo group via:

	$>getent group sudo

`sudo reboot` for changes to take effect, then log in and verify sudopowers via `sudo -v`.

3 | Running root-privilege commands 

Run root-privileged command via prefix ```sudo```.

### 4.2 - Installing & configuring SSH

[SSH](https://en.wikipedia.org/wiki/Secure_Shell) stands for "Secure Shell." The SSH protocol was designed as a secure alternative to unsecured remote shell protocols. It utilizes a client-server paradigm, in which clients and servers communicate via a secure channel.

1 | Update the system using ```sudo apt update```.

2 | Install the main tool for remote access with the SSH protocol, using OpenSSH. The packagerequired:

```sudo apt install openssh-server``` 

Confirm writing ```y```, and wait for the installation time.

```sudo service ssh status``` to check if the package was succesfully installed. **Active** is required to continue.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/80.png">

3 | Edit the file ```/etc/ssh/sshd_config```. If you are not on root you will not be able to edit the file; as you know, for switching to root we use ```su```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/81.png">

4 | The ```#``` means that line it is commented. The lines that we will be edit have to be uncommented. Once we are editing the file we need to update the following lines:

+ ```#Port 22 -> Port 4242```

* ```#PermitRootLogin prohibit-password -> PermitRootLogin no```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/82.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/83.png">

Save the changes and leave the file.

5 | With the file ```/etc/ssh/ssh_config``` (not ```sshd_config```) we will do the same we do early. Edit the following line: 

+ ```#Port 22 -> Port 4242```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/84.png">

6 | Restart the ssh service so it can be updated. Use ```sudo service ssh restart``` and once it is done we will check the service state with ```sudo service ssh status``` and confirm that everything is alright.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/85.png">

### 4.3 - Installing & configuring UFW 

[UFW](https://en.wikipedia.org/wiki/Uncomplicated_Firewall) is a [firewall](https://en.wikipedia.org/wiki/Firewall_(computing)) which use the command line for setting up [iptables](https://en.wikipedia.org/wiki/Iptables) using a small number of easy commands.

1 | Install the packages for UFW: ```sudo apt install ufw```and type ```y``` when is requested. The installation will proceed

2 | Start the UFW using the command ```sudo ufw enable``` and then it have to show us the *firewall is active.*

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/86.png">

3 | We must allow our firewall to accept the connections (that will happens in the 4242 port). Use ```sudo ufw allow 4242```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/87.png">

4 | For checking if everything done is correct, we need to check the actual state of our firewall. Use ```sudo ufw status```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/88.png">

### 4.3 - Setting up the sudo policies 

1 | Create a file in ```/etc/sudoerd.d/```. The file will serve the purpouse of storing our sudo policy. Use: ```sudo touch /etc/sudoers.d/sudo_config```.

2 | We must create a directory, as is asked in the subject, in ```/var/log/``` because each commands need to be logged, the input and output. Use ```sudo mkdir /var/log/sudo```.

3 | Edit the file that we created in the first step of this section. Use ```sudo vim /etc/sudoers.d/sudo_config```.

4 | Write into the file the following lines:

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

As it should be:

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/89.png">

+ passwd_tries -> Total tries for entering the sudo password.

* badpass_message -> The message that will show when the password failed, can be customized.

* logfile	-> Path where will the sudo logs will be stored.

* log_input, log_output, iolog_dir  -> What will be logged.

* requiretty  -> [TTY](https://www.ibm.com/docs/en/aix/7.2?topic=t-tty-command) is required for security reason (subject).

- secure_path	-> Folders that will be excluded of sudo
	
### 4.4 - Setting up a strong password policy 

1 | Edit the login.defs file.

```sudo vim /etc/login.defs```

2 | Edit the file, set the parameters:

+ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

* PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/90.png">

* PASS_MAX_DAYS: It's the max days till password expiration.

* PASS_MIN_DAYS: It's the min days till password change.

- PASS_WARN_AGE: It's the days till password warning.

3 | Install the package ```sudo apt install libpam-pwquality``` , then write ```Y``` when is required. Wait till it finish.

4 | Edit the file using ```sudo vim /etc/pam.d/common-password```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/91.png">

5 | Immediately after ```retry=3```, add (in the same line) the commands:

```
minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/92.png">

+ minlen=10 -> The minimun characters a password must contain.

**- sign, that's refering to minumum caracters. + sign it refer to maximum characters.**
	
* ucredit=-1 -> The password at least have to contain a capital letter. 
	
* dcredit=-1 -> The password at least have to containt a digit.

* lcredit=-1 -> The password at least have to contain a lowercase letter.

* maxrepeat=3 -> The password can not have the same character repited three contiusly times.

* reject_username -> The password can not contain the username inside itself.

* difok=7 -> The password it have to containt at least seven diferent characters from the last password used. 

- enforce_for_root -> We will implement this password policy to root.

### 4.5 - Connecting via SSH

1 | To connect via SSH we must close the machine and go to settings.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/93.png">

2 | Click on ```Network```, click on ```Advanced``` so it shows more options, then we click on ```Port fowarding```.

3 | Click on the emoji for adding a new rule.

4 | Add the ```4242``` port to Host and Guest. The IP's are not required. Click accept so changes are saved.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/94.png">

-> To connect via ssh from the machine to the vm use the command ```ssh <user>@localhost -p 4242```. It will ask for the password of the user that we are trying to log in. Once the password is introduced it will show login in different colour, that will mean that the connections has been successfully.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/95.png">
</p>
	
## 5 - Script System Info
	
<p align="justify">
	
You need to pay attention to all things in this section. You will be asked how the script works during the evaluation.

A **script** is a sequence of commands stored in a file that when executed will do the commands writed.

### 5.1 - Architecture

[Architecture](https://en.wikipedia.org/wiki/Computer_architecture).
To show the architecture of the OS, you can use the command ```uname -a``` ("-a" == "--all"). This command print information about the current machine and the OS running on it, except the hardware information and the CPU. ```uname -a``` print all available system information.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/96.png">
  
### 5.2 - Physical Cores

[Physical Cores](https://en.wikipedia.org/wiki/Central_processing_unit). 
To show the number of physical cores use the file ```/proc/cpuinfo```, which give us information about the CPU: its type, brand, model, performance, etc. We will use ```grep "physical id" /proc/cpuinfo | wc -l``` with the command ```grep``` we are searching and matching into the file "physical id". With ```wc -l``` to count the line of the grep output. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/97.png">

### 5.3 - Virtual Cores

[Virtual Cores](https://en.wikipedia.org/wiki/Central_processing_unit).
To show the number of virtual cores we use the file ```/proc/cpuinfo```, but in this case we will use the command ```grep processor /proc/cpuinfo | wc -l```. The usage is same as before instead of counting the lines of "physical id" we will do it with "processor". We do it this way for the same reason as before, the way of quantifying marks 0 if there is a processor.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/98.png">
	
### 5.4 - RAM

[RAM](https://en.wikipedia.org/wiki/Random-access_memory).
To show the RAM memory use the command ```free``` to see at the moment information about the RAM (the amount used, the amount available, the amount reserved for other resources, etc). For more info use the command ```free --help```. We will use ```free --mega``` since that unit of measure appears in the subject.
	
We must filter our search because we do not need all the information that it provides. The first thing we need to show is the used memory, using the ```awk``` command, which processes data based on text files,  we can use the data that interests us from a file. We compare if the first word of a row is equal to "Mem:" we will print the third word of that row, which will be the used memory. The whole command together would be ```free --mega | awk '$1 == "Mem:" {print $3}'```. In the script the return value of this command will be assigned to a variable that will be concatenated with other variables so that everything is the same as specified in the subject.

To obtain the total memory, we change the third one with the second one.
```free --mega | awk '$1 == "Mem:" {print $2}'```.

For calculate the % of used memory. The differences between the code we wrote before and this one is the printing part. We are using ```%.2f``` so that only 2 decimals are shown. In printf to show a ```%``` you have to put ```%%```. The whole command ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'```.
	
To obtain the total memory, we change the third one with the second one.
```free --mega | awk '$1 == "Mem:" {print $2}'```.

For calculate the % of used memory. The differences between the code we wrote before and this one is the printing part. We are using ```%.2f``` so that only 2 decimals are shown. In printf to show a ```%``` you have to put ```%%```. The whole command ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/99.png">

### 5.5 - Disk memory
	
[Disk memory](https://en.wikipedia.org/wiki/Disk_storage).
To view the occupied and available memory of the disk, we will use the ```df``` command ("disk filesystem"), it is used to get a complete summary of the use of disk space. As indicated in the subject, the used memory is shown in MB. We use the -m flag. Next, we will do a grep to only show us the lines that contain "/dev/" and then we will do another grep with the -v flag to exclude lines that contain "/boot". Finally, we will use the awk command and sum the value of the third word of each line to once all the lines are summed, print the final result of the sum. 
```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'```.

To obtain the total space, the only differences will be that the values we will sum will be $2 instead of $3 and the other difference is that in the subject the total size appears in Gb, so as the result of the sum gives us the number in Mb we must transform it to Gb, for this we must divide the number by 1024 and remove the decimals.
```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_result += $2} END {printf ("%.0fGb\n"), memory_result/1024)}'```.

We must show a percentage of the used memory. We combine the two previous commands to have two variables, one represents the used memory and the other the total. The operation to obtain the percentage is: ```use/total*100``` and the result of this operation will be printed as it appears in the subject, between parentheses and with the % symbol at the end.
```df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n"), use/total*100}'```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/100.png">

### 5.6 - CPU usage percentage

To view the percentage of CPU usage, we will use the ```vmstat``` command, which shows system statistics, allowing us to obtain a general detail of the processes, memory usage, CPU activity, system status, etc. We could put no option but I will put an interval of seconds from 1 to 3. We will also use the ```tail -1``` command, which will allow us to produce the output only on the last line, so of the 3 generated, only the last one will be printed. We will only print word 15, which is the available memory usage. The entire command is as follows: ```vmstat 1 3| tail -1 | awk '{print$15}'```. 
The result of this command is only part of the final result since there is still some operation to be done in the script for it to be correct. What should be done is to subtract the amount returned by our command from 100, the result of this operation will be printed with one decimal and a % at the end and the operation would be finished.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/101.png">
	
### 5.7 - Last reboot

To see the date and time of our last reboot, we will use the ```who``` command with the ```-b``` flag, as this flag will display the time of the last system boot on the screen. It shows us more information than we want, so we will filter it and only show what we are interested in, for this we will use the awk command and compare if the first word of a line is "system", the third word of that line will be printed on the screen, a space, and the fourth word. ```who -b | awk '$1 == "system" {print $3 " " $4}'```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/102.png">
	
### 5.8 - LVM activation

To check if LVM is active or not, we will use the ```lsblk``` command, which shows us information about all block devices (hard drives, SSDs, memories, etc) among all the information it provides. This command will print Yes or No. Basically, the condition we are looking for will be to count the number of lines in which "lvm" appears and if there are more than 0 we will print Yes, if there are 0 we will print No. ```if [ $(lsblk | grep lvm | wc -l) -gt 0 ];then echo yes; else echo no; fi```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/103.png">

### 5.9 - TCP

[TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol) connections.
To check the number of established TCP connections, we will use the ```ss``` command replacing the netstat. We will filter with the ```-ta``` flag so only TCP connections are shown. ```ss -ta | grep ESTAB | wc -l```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/104.png">

### 5.10 - Number of users

We will use the ```users``` command which will show us the names of the users there are, we will put ```wc -w``` to count the number of words in the command output. ```users | wc -w```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/105.png">

### 5.11 - IP adress

[IP adress](https://en.wikipedia.org/wiki/IP_address).
To obtain the host address, we will use the ```hostname -I``` command and to obtain the MAC, we will use the ```ip link``` command which is used to show or modify the network interfaces. We will use the grep command to search for what we want and thus be able to print only what is requested. ```ip link | grep "link/ether" | awk '{print $2}'``` and in this way we will only print the MAC.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/106.png">
	
### 5.12 - Number of commands executed with sudo

To obtain the number of commands executed with sudo, we will use the ```journaclctl``` command, which is a tool that is responsible for collecting and managing the system logs. Next, we will put ```_COMM=sudo``` in order to filter the entries by specifying its path. In our case we put ```_COMM``` because it refers to an executable script. Once we have filtered the search and only the sudo logs appear, we still need to filter a bit more as when you start or close the root session it also appears in the log, so to finish filtering we will put a ```grep COMMAND``` and this will only show the command lines. Finally, we will put ```wc -l``` so that the lines are numbered. The entire command is as follows: ```journalctl _COMM=sudo | grep COMMAND | wc -l)```. To check that it works correctly, we can run the command in the terminal, put a command that includes sudo and run the command again and it should increase the number of sudo executions.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/107.png">

### 5.13 - Total result of the script

Now we need write this script togheter. Go ```cd /home/fcorvaro/``` (fcorvaro is for me, change with your username) and then write the script into the ```monitoring.sh``` file. ```sudo vim monitoring.sh```. Copy and paste the script below.

```
#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" $cpu_op)

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNEXIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
ulog=$(users | wc -w)

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $cmnd cmd"
```

Save the file and test with the command ```sh monitoring.sh```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/108.png">
</p>

## 6 - Crontab 
	
<p align="justify">

[Crontab](https://en.wikipedia.org/wiki/Cron) is a background process manager. The specified processes will be executed at the time you specify in the crontab file.

To configure crontab, we must edit the crontab file with the following command ```sudo crontab -u root -e```. We need to insert the password and make a choice for the text editor.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/109.png">

We must add into the file the rule: the script must execute every 10 minutes ```*/10 * * * * sh /home/fcorvaro/monitoring.sh```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/110.png">

Operation of each crontab parameter:

+ m -> Corresponds to the minute at which the script will be executed (from 0 to 59).

* h -> The exact hour, the 24-hour format is used (from 0 to 23 - with 0 being midnight).

* dom -> refers to the day of the month (for example, you can specify 15 if you want to execute every 15th of the month).

* dow -> means the day of the week (it can be numeric 0 to 7, where 0 and 7 are Sunday - or the first three letters of the day in English: mon, tue, wed, thu, fri, sat, sun).

* user -> Defines the user who will execute the command, it can be root, or another user as long as it has permission to execute the script.

- command -> Refers to the command or the absolute path of the script to be executed.
</p>

## 7 - Bonus 

### 7.1 - Wordpress & services configuration 

### 7.1.a - Lighttpd 
	
<p align="justify">
	
[Lighttpd](https://en.wikipedia.org/wiki/Lighttpd) is a web server designed to be fast, secure, flexible, and standards-compliant. It is optimized for environments where speed is a top priority because it consumes less CPU and RAM than other servers.

1 | Installation of Lighttpd packages. ```sudo apt install lighttpd```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/111.png">

2 | Allow connections through port 80 with the command ```sudo ufw allow 80```. Check the status with ```sudo ufw status```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/112.png">

3 | Add the rule that includes port 80 in virtual box settings. Little reminder how to add rules in port forwarding: Close your VM → Settings → Network → Advanced → Port forwarding → Add Rule

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/113.png">

### 7.1.b - WordPress 

[Wordpress](https://en.wikipedia.org/wiki/WordPress) is a web content management system focused on the creation of any type of website.

1 | To install the latest version of WordPress we must first install wget and zip. To do this we will use the following command ```sudo apt install wget tar```.

+ [Wget](https://en.wikipedia.org/wiki/Wget) is a command line tool used to download files from the web.

* [Tar](https://en.wikipedia.org/wiki/Tar_(computing)) is a command line utility for compressing and decompressing files in tar format.

2 | Locate ourselves in the folder ```cd /var/www/html/```.

3 | Download the latest version of WordPress. ```sudo wget http://wordpress.org/latest.tar.gz```.

4 | Tar the file you just downloaded ```sudo tar -xzvf latest.tar.gz```.

5 | Move the files inside the folder ```sudo mv wordpress/* /var/www/html/```.

6 | Remove the tar file ```rm -rf latest.tar.gz wordpress/```.

7 | Set permissions for the html folder. Move backword ```cd ..```. For set the permissions use: ```sudo chmod -R 755 html```. The number 7 indicates that the owner has read, write and execute permissions. The number 5 indicates that the group and others only have read and execute permissions.

### 7.1.c - Mariadb

[MariaDB](https://en.wikipedia.org/wiki/MariaDB) is a database. It is used for various purposes, such as data warehousing, e-commerce, enterprise-level functions, and logging applications. 

1 | Install the packages: ```sudo apt install mariadb-server```.

2 | The default configuration leaves your MariaDB installation unsecure, we will use a script provided by the mariadb-server package to restrict access to the server and remove unused accounts. We will run the script with the following command: ```sudo mysql_secure_installation```. It will ask to you the password of the root. Additional it will ask you:

```
Switch to unix_socket autentication? [Y/N] → N
Change the root password? [Y/N] → N
Remove anonymous users? [Y/N] → Y
Disallow root login remotely? [Y/N] → Y
Remove test database and acces to it? [Y/N] → Y
Reaload privilege tables now? [Y/N] → Y
````

+ Switch to unix_socket authentication? ```N``` because we don't want it to switch to Unix socket authentication because we already have a protected root account.

* Change the root password? ```N```. We do not want to change the root password. By default we have no password but in mariadb he is not really root as we must give him administrator permissions.

* Remove anonymous users? ```Y```. By default when you install mariadb it has an anonymous user, which allows anyone to log into mariadb without having to create their own user account. This is designed for testing purposes and to make the installation smoother. When we leave the development environment and want to move to a production environment we must remove the anonymous users. 

* Disallow root login remotely? ```Y```. Disabling root login remotely will prevent anyone from guessing the root password. We will only be able to connect to root from localhost.

* Remove test database and access to it? ```Y```. This will remove the test database and any users who have access to it.

- Reaload privilege tables now? ```Y```. This will reload the MySQL permission tables so that the changes to the security settings will take effect immediately.

### 7.1.d - Database

1 | Finished the installation of mariadb we must create the database and the user for the WordPress. First we must access mariadb typing ```sudo mariadb```.


2 | Create a database for the WordPress. I will do all this with the command ```CREATE DATABASE wp_database;```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/114.png">

3 | To make sure that the database for WordPress has been created we can view all existing databases with the command ```SHOW DATABASES;```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/115.png">

4 | Next we need to create a user inside the database. ```CREATE USER 'fcorvaro'@'localhost' IDENTIFIED BY '12345';```.


5 | We bind the new user to our database so that we grant him the necessary permissions to be able to work. ```GRANT ALL PRIVILEGES ON wp_database.* TO 'fcorvaro'@'localhost';```.

6 | We update the permissions for the changes to take effect with the command ```FLUSH PRIVILEGES;```.

7 | ```exit``` mariadb.

### 7.1.e - PHP

[PHP](https://en.wikipedia.org/wiki/PHP) is a programming language. It is mainly used to develop dynamic web applications and interactive websites. PHP runs on the server side.

1 | We install the necessary packages to be able to run web applications written in PHP language and that need to connect to a MySQL database. ```sudo apt install php-cgi php-mysql``` and then ```y```.

### WordPress configuration

1 | Set your path to the folder html ```cd /var/www/html```.

2 | Copy the file ```sudo cp wp-config-sample.php wp-config.php```.

3 | Edit the file  ```sudo vim wp-config.php``` and modify the following values.

From

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/116.png">

To (values that we have previously set when we created the database and the user so that WordPress).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/117.png">

4 | We enabled the fastcgi-php module in Lighttpd to improve the performance and speed of web applications on the server. ```sudo lighty-enable-mod fastcgi```

5 | We enabled the fastcgi-php module in Lighttpd to improve the performance and speed of PHP-based web applications on the server. ```sudo lighty-enable-mod fastcgi-php```

6 | We update and apply the changes in the configuration with the command ```sudo service lighttpd force-reload```.

7 | Once we have completed the previous steps we can go back to our browser and type ```localhost```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/118.png">

8 | We must fill in all the fields.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/119.png">

9 | Click on ```Install WordPress``` and we will have finished the installation. You will see the next tab. Now WordPress can create the tables and dump all the data it needs to work in the database we have assigned to it.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/120.png">

10 | If we access again to our localhost from the browser we can see our functional page.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/121.png">

11 | If we want to access the admin panel to make changes to our site we will have to put in the browser ```localhost/wp-admin``` and log in with our account.

12 | Once you have logged in, you can modify whatever you like. Customizing the page is optional, as it is not specified in the subject of this guide, we will not deal with it. 
	
### 7.2 - Additional service 

### LiteSpeed ⚡️

[LiteSpeed](https://en.wikipedia.org/wiki/LiteSpeed_Web_Server) is a proprietary web server software. 

1 | Before installing any software, it is important to ensure that the system is up to date.

```sudo apt update```

```sudo apt upgrade```

2 | OpenLiteSpeed is available in the Debian 11 base repository. So, you must run the following command to add the OpenLiteSpeed repository to your Debian system:

```wget -O - http://rpms.litespeedtech.com/debian/enable_lst_debian_repo.sh | sudo bash```

3 | Again, we update the packages and install OpenLiteSpeed.

```sudo apt update```

```sudo apt install openlitespeed```

```y```

4 | The default password for OpenLiteSpeed is 123456. We will change the password to something more secure

```sudo /usr/local/lsws/admin/misc/admpass.sh```

```User name [admin]: idroot```

```Password: 123456```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/122.png">

5 | We configure the firewall to allow connections through ports 8088 and 7080. We then add the rules in the port forwarding.

```sudo ufw allow 8088/tcp```

```sudo ufw allow 7080/tcp```

```sudo ufw reload```

Add the rule that includes port 7080 and 8088 in virtual box settings. Little reminder how to add rules in port forwarding: 
Close your VM → Settings → Network → Advanced → Port forwarding → Add Rule

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/123.png">
	
6 | Completed the previous steps we can connect. We will put in the search engine of our browser ```localhost:7080``` (obviously with the VM online).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/124.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/125.png">
</p>
	
## 8 - Signature.txt

<p align="justify">

To obtain the signature, we must shutdown the virtual machine saving the machine state. If you turn it on or modify something, the signature will change.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/126.png">

The next step will be to locate ourselves in the path where we have the .vdi of our virtual machine. You can see the path in the settings -> storage. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/127.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/128.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/129.png">

**FINAL** | Run ```shasum Born2beroot.vdi``` and this will give us the signature. The result of this signature is what we will add and push into the intra folder of the school. It is very important not to reopen the machine since the signature will be modified. For corrections, remember to clone the machine (just copy the directory of born2beroot vm) so you can turn it on without fear of changing the signature.

[shasum](https://ss64.com/osx/shasum.html) is a command that allows you to identify the integrity of a file using the SHA-1 hash check sum of a file.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/130.png">
	
Now copy the signature into the intra folder ```vim signature.txt```.
</p>
	
## 9 - Theory

<p align="justify">

### 9.1 - How to correct - evaluator version

1 | Preliminary tests:

```Git clone``` the repo.

2 | General instructions:

+ Check if the repo contains the ```signature.txt``` file.
* Check the signature against the students “.vdi” file, make sure it’s identical. 
- Clone VM || create a snapshot && open VM.

3 | Mandatory Part (Questions for the student):

> How does a virtual machine work and what is its purpose?
	
> The basic differences between CentOS and Debian?
	
> Their choice of operating system?
	
> If CentOS: what SELinux and DNF are.
	
> If Debian: the difference between aptitude, apt and what APPArmor is.
	
> During the defense, a script must display all information every 10 minutes. Its operation will be checked in detail later.
	
All explanations are satisfactory (else evaluation stops here)

4 | Setup:

+ Ensure that the machine does not have a graphical environment at launch.
	
* Connect to VM as a created user (which isn’t a root)
	
* Ensure the password follows the required policy (2 days min, 7, 30 days max). 
	
```sudo chage -l username```
	
* Evaluator checks UFW service is started.
	
```sudo ufw status			//look for status: active```
	
* Evaluator checks SSH service is started.

```sudo systemctl status ssh```

- Evaluator checks the chosen operating system (Debian or CentOS).

```lsb_release -a || cat /etc/os-release```
	
5 | User:

+ The subject requests that a user with the login of the student being evaluated is present on the virtual machine. Check that it has been added and that it belongs to “sudo” and “user42” groups.
	
```getent group sudo```
	
```getent group user42```
	
6 | Password policy check:
	
+ Create new user (e.g. user42).
	
```sudo adduser new_username```
	
* Assign a password of your choice, respecting subject rules.
	
```getent group sudo```
	
> Explanation from student explaining how to implement the password policy. Normally there should be one or two modified files. If there is any problem, the evaluation stops here.

* With the new user, ask the student to create a group named “evaluating” and assign it to the new user.

```sudo groupadd evaluating```
	
```sudo usermod -aG evaluating your_new_username```
	
* Check if the new user belongs to the “evaluating” group.
	
```getent group evaluating```
	
> Ask the student to explain advantages of the password policy (beyond the fact that it is required for the project) 

> Ask the student the advantages/disadvantages of the policy implementation.

7 | Hostname and partitions:
	
+ Check the hostname of the machine is correctly formatted as follows: login42 (login of the student being evaluated).

```hostnamectl```

* Modify this hostname by replacing the login with yours, then restart VM.

```sudo hostnamectl set-hostname new_hostname```

```sudo reboot```

Note:	If on restart, the hostname has not been updated, the evaluation stops here.

* Restore the machine to the original hostname, then restart VM.

```sudo hostnamectl set-hostname new_hostname```

```sudo reboot```

> Ask the student being evaluated how to view the partitions for the VM.

```lsblk```

- Compare the output with the example given in the subject (if there are bonuses, refer to the bonus example).

> Ask the student for a brief explanation of LVM and how it works.

8 | SUDO:

+ Check that the “sudo” program is properly installed on the virtual machine.

```dpkg -l | grep sudo```

* The student must explain the value and operation of sudo using examples of their choice.

```sudo visudo ls```

* Verify the ```“/var/log/sudo/”``` folder exists and has at least one file. Check the contents of the files in the folder, you should see a history of the commands used with sudo.

- Run a command via sudo. See if the file(s) in the ```“/var/log/sudo/”``` folder have been updated.

9 | UFW:

+ Check the “UFW” program is properly installed on the VM and works properly.

```sudo ufw status numbered```

> Ask the student for a basic explanation of UFW and the value of using it.

* List the active rules in UFW. A rule must exist for port 4242.

* Add a new rule to open port 8080. Check that this one has been added by listing the active rules.

```sudo ufw allow 8080```

- Delete this new rule with the help of the student being evaluated.

```sudo ufw delete 4```

```sudo ufw delete 2```

10 | SSH:

+ Check that the SSH service is properly installed on the VM, and is working properly.

```sudo service ssh status 			//check if its active and port 4242```

> Ask the student for an explanation of what SSH is and the value of using it. (answer: secure shell, allows 2 computers to securely talk to each other)

* Verify that the SSH service only uses port 4242.

* Ask the student to help you use SSH in order to log in with the newly created user. To do this, you can use a key or simple password, depending on the student being evaluated.

```ssh new_user@127.0.0.1 -p 4242```

- Make sure you cannot use SSH with the “root” user as stated in the subject.

```ssh amusso-g42@127.0.0.1 -p 4242 		//should come up as permission denied```


11 | Script Monitoring (questions for the student):

> Ask the student how their script works and see their code for it.

+ Script inputted in the monitoring .sh file to display system information

```cd /usr/local/bin && vim monitoring.sh```

* Ask: 

> what is “cron”?

> How does the script run every 10 minutes from when the server starts?

* Once correct functioning of the script is verified, ask the student to make sure the script runs with dynamic values correctly.

```sudo crontab -u root -e (***change 10 value to 1***)```

*The student being evaluated should make the script stop running when the server has started up, without modifying the script itself. To check this, restart the VM.

```
sudo cronstop
sudo cronstart
```

-At startup, check if the script still exists in the same place, the rights have remained unchanged and that it has not been modified.

```
sudo reboot
sudo crontab -u root -e
```

### 9.2 - Must to know
	
### What is a virtual machine?

A [Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine) is software that simulates a computer system and can run programs as if it were a real computer. It allows the creation of multiple simulated environments or dedicated resources from a single physical hardware system. 

### Why did you choose Debian/CentOS?

This is a personal answer. [Debian](https://en.wikipedia.org/wiki/Debian) <------> [CentOS](https://en.wikipedia.org/wiki/CentOS)

### Basic differences between CentOS and Debian

v.1 | v.2
:-------------------------:|:-------------------------:
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/CvD1.jpeg">  |  <img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/CvD2.png">



### What is the purpose of virtual machines?

Their purpose is to provide a hardware platform and operating system independent execution environment, which hides the details of the underlying system and allows a program to always run the same way on any platform.

### Differences between apt and aptitude 

Aptitude It offers a command-line and text-based front-end for package management. It doesn't come by default, so you need to install it with the `apt` command. Aptitude offers the possibility to manage your packages through command lines and also from a visual interface directly 
on your terminal. You can perform the main actions like installing, updating, and deleting your packages. it also offers sub-commands to manage your packages as apt but some people prefer the visual interface as it's easy to use.. APT is a lower-level package manager and aptitude 
is a high-level package manager. Another big difference is the functionality offered by both tools. Aptitude offers better functionality compared to apt-get.Both are able to provide the necessary means to perform package management.
If you consider only the command-line interfaces of each, they are quite similar. There are a few differences that we can list:

+ Apt offers a command-line interface, while aptitude offers a visual interface.

* When facing a package conflict, `apt` will not fix the issue while `aptitude` will suggest a resolution.

* aptitude can interactively retrieve and displays the Debian changelog of all available official packages.

- Apt requires the user to have a solid knowledge of Linux systems and package management as you are running everything in the command line. It can be difficult for a novice to handle.

On the other hand, aptitude with its interface is more user-friendly as it offers a layer of abstraction regarding the different sub-commands to use for installation, upgrades, etc.

### What is APPArmor?

[APParmor](https://en.wikipedia.org/wiki/AppArmor#:~:text=AppArmor%20(%22Application%20Armor%22),capabilities%20with%20per%2Dprogram%20profiles.) is a security module in the Linux kernel that allows the system administrator to restrict the capabilities of a program.

### What is LVM?

[LVM](https://en.wikipedia.org/wiki/Logical_volume_management#:~:text=In%20computer%20storage%2C%20logical%20volume,partitioning%20schemes%20to%20store%20volumes.) is a logical volume manager. It provides a method for allocating space on mass storage devices, which is more 
flexible than conventional partitioning schemes for storing volumes.

### 9.3 - Correction Sheet 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/b2b_cs1.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/b2b_cs2.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/b2b_cs3.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/.extra/b2b_cs4.png">

</p>
	
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
