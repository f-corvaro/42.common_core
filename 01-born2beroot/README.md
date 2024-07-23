<h1 align="center"><a href="https://github.com/f-corvaro/42.common_core/tree/main/01-born2beroot">
    <img src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/born.png">
  </a></h1>

<p align="center">
	<b><i>"BORN2BEROOT is a project that immerses students in system administration, focusing on system and network basics, server services, and strict access policies."</i></b><br>
</p>

<p align="justify">

<p align="center">
  <a href="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/en.subject.pdf">
    <img src="https://img.shields.io/badge/subject-born2beroot-blueviolet">
  </a>
</p>

<h3 align="center">Index</h3>
<p align="center">

- [Introduction to Born2BeRoot](#introduction-to-born2beroot)
- [Born2BeRoot Project Guide](#born2beroot-project-guide)
	- [1 - Download the Virtual Machine ISO](#1---download-the-virtual-machine-iso)
	- [2 - Step-by-Step Guide to Installing the Virtual Machine](#2---step-by-step-guide-to-installing-the-virtual-machine)
	- [3 - Step-by-Step Guide to Installing Debian Without a GUI](#3---step-by-step-guide-to-installing-debian-without-a-gui)
	- [Brief Description of Disk Partition Types](#brief-description-of-disk-partition-types)
		- [Primary](#primary)
		- [Extended](#extended)
		- [Logical](#logical)
		- [Partition Configuration Steps](#partition-configuration-steps)
		- [Configure Encrypted Volumes](#configure-encrypted-volumes)
		- [Configure the Logical Volume Manager](#configure-the-logical-volume-manager)
		- [Configure Partitions and Mount Points](#configure-partitions-and-mount-points)
		- [Configure Debian Installation](#configure-debian-installation)
	- [4 - Virtual Machine Setup](#4---virtual-machine-setup)
		- [Boot - Selecting the Operating System](#boot---selecting-the-operating-system)
		- [Boot - Enter Encrypted Disk Password](#boot---enter-encrypted-disk-password)
		- [Boot - Enter User Credentials](#boot---enter-user-credentials)
	- [4.1 - Installing Sudo and Configuring User and Groups](#41---installing-sudo-and-configuring-user-and-groups)
	- [5.3 - Virtual Cores](#53---virtual-cores)
	- [5.4 - RAM](#54---ram)
	- [5.5 - Disk memory](#55---disk-memory)
	- [5.6 - CPU usage percentage](#56---cpu-usage-percentage)
	- [5.7 - Last reboot](#57---last-reboot)
	- [5.8 - LVM activation](#58---lvm-activation)
	- [5.9 - TCP](#59---tcp)
	- [5.10 - Number of users](#510---number-of-users)
	- [5.11 - IP adress](#511---ip-adress)
	- [5.12 - Number of commands executed with sudo](#512---number-of-commands-executed-with-sudo)
	- [5.13 - Total result of the script](#513---total-result-of-the-script)
	- [6 - Crontab](#6---crontab)
	- [7 - Bonus](#7---bonus)
		- [7.1 - Wordpress \& services configuration](#71---wordpress--services-configuration)
		- [7.1.a - Lighttpd](#71a---lighttpd)
		- [7.1.b - WordPress](#71b---wordpress)
		- [7.1.c - Mariadb](#71c---mariadb)
		- [7.1.d - Database](#71d---database)
			- [WordPress Configuration](#wordpress-configuration)
	- [8 - Signature.txt](#8---signaturetxt)
	- [9 - Theory](#9---theory)
		- [9.1 - How to Correct - Evaluator Version](#91---how-to-correct---evaluator-version)
	- [1. Preliminary Tests:](#1-preliminary-tests)
	- [2. General Instructions:](#2-general-instructions)
	- [3. Mandatory Part (Questions for the Student):](#3-mandatory-part-questions-for-the-student)
		- [4. Setup:](#4-setup)
		- [5. User:](#5-user)
		- [6. Password Policy Check:](#6-password-policy-check)
		- [7. Hostname and Partitions:](#7-hostname-and-partitions)
		- [8. SUDO:](#8-sudo)
		- [9. UFW (Uncomplicated Firewall):](#9-ufw-uncomplicated-firewall)
		- [10. SSH:](#10-ssh)
		- [9.2 - Essential Information](#92---essential-information)
		- [What is a virtual machine?](#what-is-a-virtual-machine)
		- [Why did you choose Debian/CentOS?](#why-did-you-choose-debiancentos)
		- [Basic differences between CentOS and Debian](#basic-differences-between-centos-and-debian)
		- [What is the purpose of virtual machines?](#what-is-the-purpose-of-virtual-machines)
		- [Differences between apt and aptitude](#differences-between-apt-and-aptitude)
		- [What is AppArmor?](#what-is-apparmor)
		- [What is LVM?](#what-is-lvm)
		- [9.3 - Correction Sheet](#93---correction-sheet)
	- [Support Me](#support-me)
	- [Skills developed](#skills-developed)
	- [Author](#author)

</p>





<br>

# Introduction to Born2BeRoot

<p align="justify">

Born2beRoot is an introduction to virtualization and system administration. The objective is to create a virtual machine that functions as a server, adhering to strict rules and providing the minimum required services. Unlike the programming-focused projects in the 42 curriculum, Born2beRoot emphasizes system setup and security. The project involves configuring a Virtual Machine, which is encrypted with a passphrase to ensure system security. Consequently, the project repository contains a script that runs every 10 minutes after the virtual machine starts, as well as the virtual machine signature.

</p>
<br>

# Born2BeRoot Project Guide

<p align="justify">
This repository is a step-by-step guide for the Born2BeRoot project.
</p>
<br>

## 1 - Download the Virtual Machine ISO

<p align="justify">
To get started, download the Debian ISO from the official Debian website. Debian is highly recommended for this project due to its stability and extensive documentation.
</p>

<p align="center">
<a href="https://www.debian.org/download.en.html">Download Debian ISO</a>
</p>

## 2 - Step-by-Step Guide to Installing the Virtual Machine

<p align="justify">

In this tutorial we will use [Virtual Box](https://www.virtualbox.org/).

1. Open VirtualBox and click on `New`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/1.png">

2. Choose a name for the machine and the folder where it will be located.
	
	**IMPORTANT:** Store the machine inside the `goinfre` folder located on your cluster server. This will prevent running out of memory space in your session and avoid installation failures. (Ask your staff if you can't find it). Then click `Continue`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/2.png">

3. Select the total RAM memory to reserve for the machine.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/3.png">

4. Select the second option - `Create a virtual hard disk now`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/4.png">

5. Choose the `VDI` option (we downloaded an ISO).

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/5.png">

6. Select the `Dynamically allocated` option. This will allocate the memory of the physical machine as needed while using the virtual machine until the available limit is reached.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/6.png">

7. Set `30 GB` for the virtual hard disk, as we are doing the bonus.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/7.png">

8. Click on `Settings`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/8.png">

9. Click on `Storage`, then click on `💿 Empty`. Click the `💿` icon next to "Optical Drive" and select `Choose a disk file`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/9.png">

10. Select the ISO that we just downloaded and click `Open`, then click `OK`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/10.png">

11. Once all these steps have been completed, you can `Start` your new virtual machine from VirtualBox.

</p>
<br>

## 3 - Step-by-Step Guide to Installing Debian Without a GUI

<p align="justify">

Choose your scale rate to adjust the window size: (I prefer 300%)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/11.png">

The `cmd` key on your keyboard will help you switch the capture of your mouse from the VM to your system or vice versa.

**WARNING:** When switching between the VM and your system, pay attention to changing uppercase to lowercase or vice versa. This could be a common mistake that might cause issues with password input, as the VM will retain the previous state.

1. **Choose the Version Without a Graphical Interface**

   Select `Install` (this is a mandatory part of the project).

   - Use the `Arrow` keys to navigate.
   - Press the `Enter` key to confirm your selection.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/12.png">

2. **Choose the Language**

	Select `English`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/13.png">

3. **Select the Country**

	Choose your country. If it is not listed, select `Other`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/14.png">

4. **Select Your Location**

	Choose your specific location (e.g., Italy).

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/15.png">

5. **Configure Locales**

	Select `United States`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/16.png">

6. **Select Your Keymap**

	Choose `American English`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/17.png">

7. **Set the Host Name**

	Set the `Host Name` of the machine to your login followed by `42`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/18.png">

8. **Leave the Domain Name Blank**

	Leave the `Domain Name` blank unless specified otherwise in the project requirements.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/19.png">

9. **Set the Root Password**
   
   - Go to *Show Password in Clear* and press the `Space bar`.
   - Set a strong password for the root user. **Save this password, it will be useful later.**
   - Repeat the password to confirm.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/20.png">

10. **Set Up the Username**

    - Enter your student login name as the username.
    - Repeat the username to confirm.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/21.png">

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/22.png">

11. **Set the User Password**
    
	- Set a password for the new user. You can use the same password as before.
    - Repeat the password to confirm.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/23.png">

12. **Select Manual Partitioning**

	Select `Manual` to edit the partitions one by one. This is required for the bonus part of the project.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/24.png">

13. **Create New Partitions**

	- You will see a general description of your memory partitions and mount points. If there are no existing partitions, you need to create new ones.
    - Choose the disk where you want to create the partitions. In this case, select the only available disk.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/25.png">

14. **Accept the Confirmation Message**

	Accept the confirmation message. It warns that any existing partitions on the device will be deleted. Confirm to create a new empty partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/26.png">

15. **Select Free Space**
    
	The partition table appears empty. Select `pri/log 32.2 GB FREE SPACE` to configure it.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/27.png">

16. **Create a New Partition**

	Choose to create a new partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/28.png">

17. **Set Partition Size**

	Start with `sda1`. As specified, set the partition size to 500 megabytes.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/29.png">

18. **Choose Partition Type**
    
	Choose the type of partition. Select `Primary` because it will be the partition where the operating system is installed.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/30.png">

## Brief Description of Disk Partition Types

[disk partitions](https://en.wikipedia.org/wiki/Disk_partitioning)

### Primary
The only partition on which an OS can be installed. There can only be 4 primary partitions per hard drive or 3 primary and one extended.

### Extended
Designed to break the 4 primary partition limitation on a single physical disk. An HDD may contain only one extended partition, but that extended partition can be subdivided into multiple logical partitions. It's used to contain logical partitions.

### Logical
Occupies a portion of the primary/extended partition or the whole of it, formatted with a specific type of file system (in our case, ext4), and assigned a unit so the operating system recognizes the logical partitions or their file system. There can be a maximum of 23 logical partitions in an extended partition; however, Linux (the OS we are currently working with) reduces it to 15, which is more than enough for this project.

Check also the **[GUID Partition Table](https://en.wikipedia.org/wiki/GUID_Partition_Table)**.

### Partition Configuration Steps

19. **Select Beginning**
    
	Select `Beginning` because we want the new partition to be created at the beginning of the available space.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/31.png">

20. **Modify Mount Point**
    
	It shows the details of the partition. We will modify the mount point as specified in the subject.

	Choose `/boot`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/32.png">

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/33.png">

	Finish configuring the current partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/34.png">

21. **Create a Logical Partition**
    
	After completing the previous step, the partition should already appear. Now, create a logical partition using all the available space on the disk. This partition will have no mount point and will be encrypted. To do this, select the free space where you want to create it.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/35.png">

22. **Create a New Partition**

	Select the option to create a new partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/36.png">

	Choose the maximum size for the partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/37.png">

	Select the type of partition. In this case, choose `Logical`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/38.png">

	Modify the mount point.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/39.png">

	Choose the option `Do not mount it`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/40.png">

	Finish configuring the current partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/41.png">

### Configure Encrypted Volumes

1. **Configure Encrypted Volumes**
	
	Configure the encrypted volumes to encrypt the partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/42.png">

2. **Accept Confirmation Message**

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/43.png">

3. **Create Encrypted Volumes**

	Proceed to create the encrypted volumes.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/44.png">

4. **Select Partition to Encrypt**

	Select the partition you want to encrypt.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/45.png">

5. **Finish Configuring Partition**

	Finish configuring the current partition.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/46.png">

6. **Complete Encryption Setup**

	Click `Finish` because no more encrypted volumes need to be created.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/47.png">

7. **Accept Final Confirmation**

	Accept the final confirmation message. It indicates that everything inside the partition will be encrypted and the process should complete quickly.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/48.png">

8. **Cancel Encryption**
   
   Click `Cancel` if there is nothing to encrypt (the partition is empty).

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/49.png">

9. **Enter Encryption Password**

	Enter a password for the encryption. This will be the encryption phrase.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/50.png">

### Configure the Logical Volume Manager

1. **Configure the Logical Volume Manager**

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/51.png">

	Accept the confirmation message to save the changes to the disk.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/52.png">

2. **Create a New Volume Group**

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/53.png">

	Enter the name for the volume group: `LVMGroup` as specified in the project requirements.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/54.png">

	Select the partition where the group will be created: `sda5_crypt`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/55.png">

3. **Create Logical Partitions**

	Create all the logical partitions as specified in the project requirements.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/b.png">

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/56.png">

	Choose the volume group where the logical partitions will be created. Select the one we just created.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/57.png">

	Follow the order of creation for the logical units as specified in the project requirements, starting with `root` and ending with `var-log`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/58.png">

	Set the size for each logical volume as specified, e.g., `10g`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/59.png">

	Repeat the process for all seven logical volumes. Once done, click `Finish`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/60.png">

### Configure Partitions and Mount Points

1. **View Partitions and Free Space**

	Now we can see all our partitions and free space. All the logical partitions that we just created are already appearing. We must configure the mount point and the usage of these. Start by selecting the first one that appears, which is `home`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/61.png">

2. **Configure Partition File System**

	We can see the configuration of the partitions. We must choose a file system as it currently does not have one.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/62.png">

	Choose the `Ext4 file system` as it is the most commonly used [file system](https://en.wikipedia.org/wiki/File_system) in Linux distributions.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/63.png">

3. **Select Mount Point**

	Then select the [mount point](https://en.wikipedia.org/wiki/Mount_(computing)#MOUNT-POINT) as `home`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/64.png">

	The first partition is now configured.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/65.png">

4. **Repeat for Remaining Partitions**

	Repeat the process for the remaining partitions. Refer to the image below for the final configuration of mount points and file systems:

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/66.png">

5. **Save Changes**

	Accept the message to save the changes. Ensure that all of the partitions look the same as in the screenshot.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/67.png">

6. **Skip Additional Packages**

	Select the option `No` because we don't need additional packages.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/68.png">

7. **Choose Your Country**

	Choose your country to proceed with the installation.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/69.png">

### Configure Debian Installation

1. **Choose Debian Mirror**

	Choose `deb.debian.org`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/70.png">

2. **Leave HTTP Proxy Empty**

	Leave this option empty and click `Continue`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/71.png">

3. **Opt-Out of Popularity Contest**
   
   Select the option `No` because we do not want developers to watch our statistics, even though they are anonymous.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/72.png">

4. **Deselect Software Options**

	Remove all the software options using the spacebar and press `Continue`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/73.png">

5. **Install GRUB Bootloader**

	Select `Yes` to install [GRUB](https://en.wikipedia.org/wiki/GNU_GRUB) bootloader on the primary drive.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/74.png">

6. **Choose Bootloader Device**

	Choose the device for the bootloader installation: `/dev/sda`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/75.png">

7. **Finish Installation**
   
   Press `Continue` to finish the installation.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/76.png">
<br>

## 4 - Virtual Machine Setup

### Boot - Selecting the Operating System

-> Select ```Debian GNU/Linux```.

### Boot - Enter Encrypted Disk Password

-> Enter the encryption password that was previously set. For me, it is ```Pw.20STNG!81```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/77.png">

### Boot - Enter User Credentials

-> Enter the user credentials that were created. In my case, the user is ```fcorvaro``` and the password is ```Pw.20STNG!81```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/78.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/79.png">

## 4.1 - Installing Sudo and Configuring User and Groups

1. **Switch to Root User and Install Sudo**
   Begin by switching to the root user to install [sudo](https://en.wikipedia.org/wiki/Sudo). Enter `su -` in the bash prompt and provide the root password (for me, it is `Pw.20STNG!81`). Additionally, install [VIM](https://en.wikipedia.org/wiki/Vim_(text_editor)) to configure some files. Run the following commands:
   ```bash
	apt-get update
	apt-get install vim
	apt install sudo
	```
	Verify whether sudo was successfully installed via:

	```bash
	dpkg -l | grep sudo
	```

2. **Add User to Sudo Group**

	Add the user to the sudo group with the following command:

	```bash
	adduser <username> sudo
	```

	Alternatively, you can add the user to the `sudo` group via:

	```bash 
	usermod -aG sudo <username>
	```

	Verify whether the user was successfully added to the sudo group via:

	```bash
	getent group sudo
	```

	Reboot the system for changes to take effect:

	```bash
	sudo reboot
	```

	After the system reboots, log in and verify sudo powers via:

	```bash
	sudo -v
	```

3. **Running Root-Privileged Commands**

	Run root-privileged command by prefixing them with `sudo`.

## 4.2 - Installing and Configuring SSH

[SSH](https://en.wikipedia.org/wiki/Secure_Shell) stands for "Secure Shell." The SSH protocol was designed as a secure alternative to unsecured remote shell protocols. It utilizes a client-server paradigm, in which clients and servers communicate via a secure channel.

1. **Update the System**
	
	Update the system using:

	```bash
	sudo apt update
	```

2. **Install OpenSSH Server**

   Install the main tool for remote access with the SSH protocol, using OpenSSH:

	```bash
	sudo apt install openssh-server
	```

	Confirm by typing `y`. When prompted wait for the installation to complete.

	Check if the package was successfully installed:

	```bash
	sudo service ssh status
	```

	The status should be **active** to continue

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/80.png">

3. **Edit the SSH Configuration File**

	Edit the file `/etc/ssh/sshd_config`. You need root privileges to edit this file. Switch to root using `su`.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/81.png">

4. **Uncomment and Update Configuration Lines**

	The `#` symbol indicates that a line is commented out. Uncomment and update the following lines:

    - Change `#Port 22` to `Port 4242`
    - Change `#PermitRootLogin prohibit-password` to `PermitRootLogin no`

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/82.png">

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/83.png">

	Save the changes and exit the file.

5. **Edit the SSH Client Configuration File**

	Edit the file `/etc/ssh/ssh_config` (not `sshd_config`). Update the following line:

    - Change `#Port 22` to `Port 4242`

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/84.png">

6. **Restart the SSH Service**

	Restart the SSH service to apply the changes. Use the following commands:

    ```sh
    sudo service ssh restart
    sudo service ssh status
    ```

    Confirm that the service is running correctly.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/85.png">

## 4.3 - Installing & Configuring UFW

[UFW](https://en.wikipedia.org/wiki/Uncomplicated_Firewall) is a [firewall](https://en.wikipedia.org/wiki/Firewall_(computing)) that uses the command line for setting up [iptables](https://en.wikipedia.org/wiki/Iptables) with a small number of easy commands.

1. **Install UFW**

	Install the UFW package by running the following command and typing `y` when prompted:

    ```sh
    sudo apt install ufw
    ```

2. **Enable UFW**

	Start UFW using the command below. It should display a message indicating that the firewall is active:

    ```sh
    sudo ufw enable
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/86.png">

3. **Allow Connections on Port 4242**

	Configure the firewall to accept connections on port 4242:

    ```sh
    sudo ufw allow 4242
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/87.png">

4. **Check UFW Status**

	Verify that everything is configured correctly by checking the status of the firewall:

    ```sh
    sudo ufw status
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/88.png">

## 4.4 - Setting up the sudo policies

1. **Create the Sudo Configuration File**

    Create a file in `/etc/sudoers.d/` to store the sudo policy:

    ```sh
    sudo touch /etc/sudoers.d/sudo_config
    ```

2. **Create the Logging Directory**

    Create a directory in `/var/log/` to log each command's input and output:

    ```sh
    sudo mkdir /var/log/sudo
    ```

3. **Edit the Sudo Configuration File**

    Edit the file created in the first step:

    ```sh
    sudo vim /etc/sudoers.d/sudo_config
    ```

4. **Add Sudo Policies**

    Write the following lines into the file:

    ```sh
    Defaults  passwd_tries=3
    Defaults  badpass_message="Custom error message"
    Defaults  logfile="/var/log/sudo/sudo_config"
    Defaults  log_input, log_output
    Defaults  iolog_dir="/var/log/sudo"
    Defaults  requiretty
    Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
    ```

    The file should look like this:

    <img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/89.png">

    - `passwd_tries`: Total attempts allowed for entering the sudo password.
    - `badpass_message`: Custom message displayed when the password is incorrect.
    - `logfile`: Path where sudo logs will be stored.
    - `log_input`, `log_output`, `iolog_dir`: Specifies what will be logged.
    - `requiretty`: Requires a TTY for security reasons.
    - `secure_path`: Directories included in the secure path for sudo.

## 4.5 - Setting up a strong password policy

1. **Edit the `login.defs` File**

    Open the `login.defs` file for editing:

    ```sh
    sudo vim /etc/login.defs
    ```

2. **Set the Password Parameters**

    Update the following parameters in the file:

    - Change `PASS_MAX_DAYS 99999` to `PASS_MAX_DAYS 30`
    - Change `PASS_MIN_DAYS 0` to `PASS_MIN_DAYS 2`

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/90.png">

   - `PASS_MAX_DAYS`: Maximum days until password expiration.
   - `PASS_MIN_DAYS`: Minimum days until password change.
   - `PASS_WARN_AGE`: Days until password expiration warning.

3. **Install the `libpam-pwquality` Package**

    Install the package and confirm the installation when prompted:

    ```sh
    sudo apt install libpam-pwquality
    ```

4. **Edit the `common-password` File**

    Open the `common-password` file for editing:

    ```sh
    sudo vim /etc/pam.d/common-password
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/91.png">

5. **Update Password Quality Settings**

    Immediately after `retry=3`, add the following parameters on the same line:

    ```sh
    minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/92.png">

   - `minlen=10`: Minimum number of characters a password must contain.
   - `ucredit=-1`: Password must contain at least one uppercase letter.
   - `dcredit=-1`: Password must contain at least one digit.
   - `lcredit=-1`: Password must contain at least one lowercase letter.
   - `maxrepeat=3`: Password cannot have the same character repeated more than three times consecutively.
   - `reject_username`: Password cannot contain the username.
   - `difok=7`: Password must contain at least seven different characters from the previous password.
   - `enforce_for_root`: Apply this password policy to the root user.

## 4.6 - Connecting via SSH

1. **Shut Down the Virtual Machine**

	To connect via SSH, first shut down the virtual machine and go to its settings.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/93.png">

2. **Configure Network Settings**

	Click on `Network`, then click on `Advanced` to show more options. Next, click on `Port Forwarding`.

3. **Add a New Port Forwarding Rule**

    Click on the plus icon to add a new rule.

4. **Set Up Port Forwarding**

    Add `4242` as the port for both Host and Guest. The IP addresses are not required. Click `OK` to save the changes.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/94.png">
	
5. **Connect via SSH**

	To connect via SSH from your host machine to the virtual machine, use the following command:

    ```sh
    ssh <user>@localhost -p 4242
    ```

    Replace `<user>` with the username you want to log in with. You will be prompted to enter the password for that user. Once the password is entered, you should see a login prompt in a different color, indicating a successful connection.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/95.png">

</p>
<br>

## 5 - Script System Info

<p align="justify">

Pay close attention to all details in this section. You will be asked how the script works during the evaluation.

A **script** is a sequence of commands stored in a file that, when executed, will perform the specified commands.

## 5.1 - Architecture

[Architecture](https://en.wikipedia.org/wiki/Computer_architecture) refers to the design and organization of a computer's components.

To display the architecture of the OS, you can use the command `uname -a` (`-a` stands for `--all`). This command prints information about the current machine and the OS running on it, excluding hardware information and the CPU. `uname -a` prints all available system information.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/96.png">

## 5.2 - Physical Cores

[Physical Cores](https://en.wikipedia.org/wiki/Central_processing_unit) refer to the actual hardware components of a CPU. To display the number of physical cores, we can use the `/proc/cpuinfo` file, which provides detailed information about the CPU, including its type, brand, model, and performance.

Use the following command to count the number of physical cores:

```sh
grep "physical id" /proc/cpuinfo | sort -u | wc -l
```

- `grep "physical id" /proc/cpuinfo`: Searches for lines containing "physical id" in the `/proc/cpuinfo` file.
- `sort -u`: Sorts the output and removes duplicate lines.
- `wc -l`: Counts the number of lines in the output, which corresponds to the number of physical cores.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/97.png">

## 5.3 - Virtual Cores

[Virtual Cores](https://en.wikipedia.org/wiki/Central_processing_unit) refer to the logical divisions of a physical core, often created through technologies like Hyper-Threading. To display the number of virtual cores, we use the `/proc/cpuinfo` file.

Use the following command to count the number of virtual cores:

```sh
grep -c "processor" /proc/cpuinfo
```

- `grep -c "processor" /proc/cpuinfo`: Searches for lines containing "processor" in the `/proc/cpuinfo` file and counts the number of matches. This approach ensures that we accurately count the number of virtual cores by counting the logical processors.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/98.png">

## 5.4 - RAM

[RAM](https://en.wikipedia.org/wiki/Random-access_memory) refers to the computer's short-term memory. To display RAM usage, use the `free` command, which provides real-time information about the RAM (amount used, amount available, amount reserved for other resources, etc.). For more details, use `free --help`. We will use `free --mega` since that unit of measure is specified in the subject.

We need to filter our search because we do not need all the information provided. To show the used memory, we use the `awk` command, which processes data based on text files. We compare if the first word of a row is equal to "Mem:" and print the third word of that row, which represents the used memory. The complete command is:

```sh
free --mega | awk '$1 == "Mem:" {print $3}'
```

In the script, the return value of this command will be assigned to a variable that will be concatenated with other variables to match the specified format.

To obtain the total memory, use the following command:

```sh
free --mega | awk '$1 == "Mem:" {print $2}'
```

To calculate the percentage of used memory, use the following command:

```sh
free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'
```
Certainly! Here's the improved version of the selected section:

```markdown
To display the used memory, use the following command:

```sh
free --mega | awk '$1 == "Mem:" {print $3}'
```

In the script, the return value of this command will be assigned to a variable that will be concatenated with other variables to match the specified format.

To obtain the total memory, use the following command:

```sh
free --mega | awk '$1 == "Mem:" {print $2}'
```

To calculate the percentage of used memory, use the following command:

```sh
free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'
```

- `%.2f`: Formats the number to display only 2 decimal places.
- `%%`: In `printf`, use `%%` to display a `%` symbol.

This approach ensures that the memory usage is displayed accurately and formatted correctly.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/99.png">

## 5.5 - Disk memory

[Disk memory](https://en.wikipedia.org/wiki/Disk_storage) refers to the storage capacity of a disk drive. To view the occupied and available memory of the disk, we will use the `df` command ("disk filesystem"), which provides a summary of disk space usage. As specified, the used memory should be shown in MB, so we use the `-m` flag.

To filter the output, we will:
1. Use `grep` to show only lines containing "/dev/".
2. Use `grep -v` to exclude lines containing "/boot".
3. Use the `awk` command to sum the values of the third column (used memory) and print the final result.

The complete command is:

```sh
df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'
```

- `df -m`: Displays disk space usage in MB.
- `grep "/dev/"`: Filters lines to include only those containing "/dev/".
- `grep -v "/boot"`: Excludes lines containing "/boot".
- `awk '{memory_use += $3} END {print memory_use}'`: Sums the values of the third column (used memory) and prints the total.

To obtain the total space, we need to sum the values in the second column (`$2`) instead of the third column (`$3`). Additionally, since the total size should be displayed in GB, we must divide the result by 1024 and remove the decimals. The complete command is:

```sh
df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_result += $2} END {printf("%.0fGb\n", memory_result/1024)}'
```

We must show a percentage of the used memory. We combine the two previous commands to have two variables: one representing the used memory and the other representing the total memory. The operation to obtain the percentage is: `use/total*100`. The result of this operation will be printed as it appears in the subject, between parentheses and with the `%` symbol at the end.

Use the following command:

```sh
df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n", use/total*100)}'
```

- `df -m`: Displays disk space usage in MB.
- `grep "/dev/"`: Filters lines to include only those containing "/dev/".
- `grep -v "/boot"`: Excludes lines containing "/boot".
- `awk '{use += $3} {total += $2} END {printf("(%d%%)\n", use/total*100)}'`: Sums the used memory and total memory, then calculates and prints the percentage of used memory.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/100.png">

## 5.6 - CPU usage percentage

To view the percentage of CPU usage, we will use the `vmstat` command, which shows system statistics, including details about processes, memory usage, CPU activity, and system status. We will use an interval of 1 second and take 3 samples. The `tail -1` command will ensure that only the last line of the output is processed. We will then use `awk` to print the 15th word, which represents the idle CPU percentage.

The complete command is:

```sh
vmstat 1 3 | tail -1 | awk '{print $15}'
```

The result of this command is the idle CPU percentage. To get the CPU usage percentage, we need to subtract this value from 100. The final result will be printed with one decimal place and a % symbol.

Here is the full command to calculate and display the CPU usage percentage:

```sh
vmstat 1 3 | tail -1 | awk '{print 100 - $15"%"}'
```

This approach ensures that we accurately calculate and display the CPU usage percentage.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/101.png">

## 5.7 - Last reboot

To see the date and time of our last reboot, we will use the `who` command with the `-b` flag, which displays the time of the last system boot. Since this command provides more information than needed, we will filter the output to show only the relevant details. We will use the `awk` command to check if the first word of a line is "system" and then print the third and fourth words of that line.

Use the following command:

```sh
who -b | awk '$1 == "system" {print $3 " " $4}'
```

- `who -b`: Displays the time of the last system boot.
- `awk '$1 == "system" {print $3 " " $4}'`: Filters the output to show only the date and time of the last reboot.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/102.png">

## 5.8 - LVM activation

To check if LVM is active, we will use the `lsblk` command, which shows information about all block devices (hard drives, SSDs, memories, etc.). We will count the number of lines containing "lvm" and print "Yes" if there are any, or "No" if there are none.

Use the following command:

```sh
if [ $(lsblk | grep -c lvm) -gt 0 ]; then echo "Yes"; else echo "No"; fi
```

- `lsblk`: Displays information about all block devices.
- `grep -c lvm`: Counts the number of lines containing "lvm".
- `if [ $(...) -gt 0 ]; then echo "Yes"; else echo "No"; fi`: Prints "Yes" if LVM is active, otherwise prints "No".

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/103.png">

## 5.9 - TCP

[TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol) connections.

To check the number of established TCP connections, we will use the `ss` command, which is a modern replacement for `netstat`. We will filter the output to show only TCP connections using the `-ta` flag and then count the number of established connections.

Use the following command:

```sh
ss -ta | grep ESTAB | wc -l
```

- `ss -ta`: Displays all TCP connections.
- `grep ESTAB`: Filters the connections to show only those that are established.
- `wc -l`: Counts the number of established connections.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/104.png">

## 5.10 - Number of users

To count the number of currently logged-in users, we will use the `users` command, which displays the usernames of all logged-in users. We will then pipe the output to `wc -w` to count the number of words, which corresponds to the number of users.

Use the following command:

```sh
users | wc -w
```

- `users`: Displays the usernames of all logged-in users.
- `wc -w`: Counts the number of words in the output, representing the number of logged-in users.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/105.png">

## 5.11 - IP adress

[IP address](https://en.wikipedia.org/wiki/IP_address).

To obtain the host's IP address, we will use the `hostname -I` command. To obtain the MAC address, we will use the `ip link` command, which shows or modifies network interfaces. We will use the `grep` command to search for the MAC address and `awk` to print only the requested information.

Use the following commands:

- To get the IP address:
	```sh
	hostname -I
	``` 

- To get the MAC address:
	```sh
	ip link | grep "link/ether" | awk '{print $2}'
	```

- `hostname -I`: Displays the IP address(es) of the host.
- `ip link`: Shows information about network interfaces.
- `grep "link/ether"`: Filters the output to show only lines containing "link/ether".
- `awk '{print $2}'`: Prints the second field, which is the MAC address.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/106.png">

## 5.12 - Number of commands executed with sudo

To obtain the number of commands executed with `sudo`, we will use the `journalctl` command, which is responsible for collecting and managing system logs. We will filter the entries by specifying `_COMM=sudo`, which refers to the executable script for `sudo`. 

Next, we will use `grep COMMAND` to further filter the logs, ensuring that only command lines are shown (excluding session start or close logs). Finally, we will use `wc -l` to count the number of lines, representing the number of `sudo` commands executed.

The complete command is:

```sh
journalctl _COMM=sudo | grep COMMAND | wc -l
```

- `journalctl _COMM=sudo`: Filters the logs to show only entries related to the `sudo` command.
- `grep COMMAND`: Further filters the logs to show only command lines.
- `wc -l`: Counts the number of lines, representing the number of `sudo` commands executed.

To verify that it works correctly, you can run the command in the terminal, execute a command with `sudo`, and then run the command again. The count should increase, reflecting the additional `sudo` execution.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/107.png">

## 5.13 - Total result of the script

Now we need to write this script together. Go to the directory `/home/your_username/` (replace `your_username` with your actual username) and then create the script in the `monitoring.sh` file. Use the following command to open the file in `vim`:

```sh
sudo vim monitoring.sh
```

Copy and paste the script below into the `monitoring.sh` file:

```sh
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

Save the file and test it with the command:

```sh
sh monitoring.sh
```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/108.png">

</p>
<br>

## 6 - Crontab

<p align="justify">

[Crontab](https://en.wikipedia.org/wiki/Cron) is a background process manager. It allows you to schedule tasks to be executed at specified times.

To configure crontab, edit the crontab file with the following command:

```sh
sudo crontab -u root -e
```

You will need to enter your password and choose a text editor.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/109.png">

Add the following rule to the file to execute the script every 10 minutes:

```sh
*/10 * * * * sh /home/fcorvaro/monitoring.sh
```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/110.png">

Explanation of each crontab parameter:

- `m`: Minute at which the script will be executed (0-59).
- `h`: Hour at which the script will be executed (0-23, with 0 being midnight).
- `dom`: Day of the month (1-31).
- `mon`: Month (1-12).
- `dow`: Day of the week (0-7, where 0 and 7 are Sunday, or the first three letters of the day: mon, tue, wed, thu, fri, sat, sun).
- `command`: The command or the absolute path of the script to be executed.

In this example, `*/10 * * * *` means the script will run every 10 minutes.

</p>
<br>

## 7 - Bonus

### 7.1 - Wordpress & services configuration

### 7.1.a - Lighttpd

<p align="justify">

[Lighttpd](https://en.wikipedia.org/wiki/Lighttpd) is a web server designed to be fast, secure, flexible, and standards-compliant. It is optimized for environments where speed is a top priority because it consumes less CPU and RAM than other servers.

1. **Install Lighttpd packages:**
   ```sh
   sudo apt install lighttpd
   ```
	
	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/111.png">

2. **Allow connections through port 80:**
   ```sh
   sudo ufw allow 80
   ```
   Check the status with 
   ```sh
   sudo ufw status
   ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/112.png">

3. **Add the rule that includes port 80 in VirtualBox settings:**
   - Close your VM
   - Go to `Settings` → `Network` → `Advanced` → `Port Forwarding`
   - Add Rule

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/113.png">

### 7.1.b - WordPress

[WordPress](https://en.wikipedia.org/wiki/WordPress) is a web content management system focused on the creation of any type of website.

1. **Install wget and tar:**
   To install the latest version of WordPress, we must first install `wget` and `tar`. Use the following command:
   ```sh
   sudo apt install wget tar
   ```

- [Wget](https://en.wikipedia.org/wiki/Wget) is a command line tool used to download files from the web.

- [Tar](https://en.wikipedia.org/wiki/Tar_(computing)) is a command line utility for compressing and decompressing files in tar format.

2. Navigate to the folder:

   ```sh
   cd /var/www/html/
   ```

3. **Download the latest version of WordPress:**

   ```sh
   sudo wget http://wordpress.org/latest.tar.gz
   ```

4. **Extract the downloaded file:**
   
   ```sh
   sudo tar -xzvf latest.tar.gz
   ```

5. **Move the files inside the folder:**
   
   ```sh
   sudo mv wordpress/* /var/www/html/
   ```

6. **Remove the tar file and the empty WordPress directory:**
   
   ```sh
   sudo rm -rf latest.tar.gz wordpress/
   ```

7. **Set permissions for the html folder:**
   Move back to the parent directory:

   ```sh
   cd ..
   ``` 

   Set the permissions using:

   ```sh
   sudo chmod -R 755 html
   ``` 

   The number `7` indicates that the owner has read, write, and execute permissions. The number `5` indicates that the group and others have read and execute permissions.

### 7.1.c - Mariadb

[MariaDB](https://en.wikipedia.org/wiki/MariaDB) is a relational database management system. It is used for various purposes, such as data warehousing, e-commerce, enterprise-level functions, and logging applications.

1. **Install the MariaDB server package:**

   ```sh
   sudo apt install mariadb-server
   ```

	The default configuration leaves your MariaDB installation insecure. To secure it, we will use a script provided by the `mariadb-server` package to restrict access to the server and remove unused accounts. Run the script with the following command:

	```sh
	sudo mysql_secure_installation
	```
	It will prompt you for the root password. Additionally, it will ask you the following questions:

	```
	Switch to unix_socket authentication? [Y/N] → N
	Change the root password? [Y/N] → N
	Remove anonymous users? [Y/N] → Y
	Disallow root login remotely? [Y/N] → Y
	Remove test database and access to it? [Y/N] → Y
	Reload privilege tables now? [Y/N] → Y
	````

   - Switch to unix_socket authentication? `N`. We don't want to switch to Unix socket authentication because we already have a protected root account.

   - Change the root password? `N`. We do not want to change the root password. By default, there is no password, but in MariaDB, the root user does not have full administrative permissions by default.

   - Remove anonymous users? `Y`. By default, MariaDB includes an anonymous user, which allows anyone to log in without creating their own user account. This is designed for testing purposes and to make the installation smoother. When moving from a development environment to a production environment, it is essential to remove anonymous users.

   - Disallow root login remotely? `Y`. Disabling remote root login will prevent anyone from guessing the root password. Root access will only be possible from localhost.

   - Remove test database and access to it? `Y`. This will remove the test database and any users who have access to it.

   - Reload privilege tables now? `Y`. This will reload the MySQL permission tables so that the changes to the security settings take effect immediately.

### 7.1.d - Database

1. **Access MariaDB:**
   After finishing the installation of MariaDB, we need to create the database and the user for WordPress. First, access MariaDB by typing:
   
   ```sh
   sudo mariadb
   ```


2. **Create a database for WordPress:**
   Use the following command to create a database:

   ```sql
   CREATE DATABASE wp_database;
   ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/114.png">

3. **Verify the creation of the WordPress database:**
   To ensure that the database for WordPress has been created, you can view all existing databases with the following command:

   ```sql
   SHOW DATABASES;
   	```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/115.png">

4. **Create a user inside the database:**
   Use the following command to create a new user:

   ```sql
   CREATE USER 'fcorvaro'@'localhost' IDENTIFIED BY '12345';
   ```

5. **Grant the new user permissions on the WordPress database:**
   Bind the new user to the database and grant the necessary permissions with the following command:

   ```sql
   GRANT ALL PRIVILEGES ON wp_database.* TO 'fcorvaro'@'localhost';
   ```

6. **Apply the changes:**
   Update the permissions for the changes to take effect with the following command:

   ```sql
   FLUSH PRIVILEGES;
   ```

7. **Exit MariaDB:**
   To exit the MariaDB shell, use the following command:
   
   ```sh
   exit
    ```

### 7.1.e - PHP

[PHP](https://en.wikipedia.org/wiki/PHP) is a programming language primarily used for developing dynamic web applications and interactive websites. PHP runs on the server side.

To install the necessary packages for running PHP web applications that connect to a MySQL database, use the following command:

```bash
sudo apt install php-cgi php-mysql
``` 

When prompted, confirm the installation by typing `y`.

#### WordPress Configuration

1. Navigate to the `html` directory:
   
   ```bash
   cd /var/www/html
   ```

2. Copy the sample configuration file: 

	```sh
   sudo cp wp-config-sample.php wp-config.php
   ```

3. Edit the configuration file: 
   
   ```bash
   sudo vim wp-config.php
   ```
   
   Modify the following values:

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/116.png">

	Update the configuration file with the values that were set when the database and user were created for WordPress.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/117.png">

4. Enable the `fastcgi` module in Lighttpd to improve the performance and speed of web applications on the server:
   
	```bash
   sudo lighty-enable-mod fastcgi
   ```

5. Enable the `fastcgi-php` module in Lighttpd to improve the performance and speed of PHP-based web applications on the server:
	
	```bash
	sudo lighty-enable-mod fastcgi-php
	```

6. Update and apply the changes in the configuration:

	```bash
	sudo service lighttpd force-reload
	```

7. Once the previous steps are completed, open your browser and navigate to:

	```plaintext
	http://localhost
	```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/118.png">

8. Fill in all the required fields.	

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/119.png">

9. Click on **Install WordPress** to complete the installation. You will see the following screen. WordPress will now create the necessary tables and populate the database with the required data.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/120.png">

10. To view your functional page, open your browser and navigate to:
    
	```plaintext
    http://localhost
    ```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/121.png">

11. To access the admin panel and make changes to your site, navigate to:
    
    ```plaintext
    http://localhost/wp-admin
    ```
    Log in with your account credentials.

12. Once logged in, you can customize your site as desired. Note that customizing the page is optional and not covered in this guide.

### 7.2 - Additional service: LiteSpeed

[LiteSpeed](https://en.wikipedia.org/wiki/LiteSpeed_Web_Server) is a proprietary web server software.

### Steps to Install and Configure OpenLiteSpeed on Debian 11

1. Update the System:
   Before installing any software, ensure that the system is up to date:

   ```bash
   sudo apt update
   sudo apt upgrade
   ```

2. Add OpenLiteSpeed Repository:
   OpenLiteSpeed is available in the Debian 11 base repository. Add the OpenLiteSpeed repository to your Debian system:

	```bash
	wget -O - http://rpms.litespeedtech.com/debian/enable_lst_debian_repo.sh | sudo bash
	```

3. Install OpenLiteSpeed:
   Update the package list and install OpenLiteSpeed:

	```bash
	sudo apt update
	sudo apt install openlitespeed
	```

Confirm the installation by typing `y` when prompted.

4. Change Default Password:
   The default password for OpenLiteSpeed is `123456`. Change it to something more secure by running the following command:
   
   ```bash
   sudo /usr/local/lsws/admin/misc/admpass.sh
   ```

	Follow the prompts to set a new username and password:

	```bash
	User name [admin]: idroot
	Password: [your_secure_password]
	```

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/122.png">

5. **Configure Firewall:**
   Allow connections through ports 8088 and 7080, then reload the firewall rules:

   ```bash
   sudo ufw allow 8088/tcp
   sudo ufw allow 7080/tcp
   sudo ufw reload
   ```

	Add the rules for ports 7080 and 8088 in VirtualBox settings. Here's a quick reminder on how to add rules in port forwarding:

	1. Close your VM.
	2. Go to `Settings` → `Network` → `Advanced` → `Port Forwarding`.
	3. Click on `Add Rule` and enter the necessary details for ports 7080 and 8088.

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/123.png">

6. After completing the previous steps, you can connect to the OpenLiteSpeed Web Admin. Open your browser and navigate to:
   
   ```plaintext
   http://localhost:7080
   ``` 
   
	Ensure that your VM is online. 

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/124.png">

	<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/125.png">

</p>
<br>

## 8 - Signature.txt

<p align="justify">

To obtain the signature, you must shut down the virtual machine while saving the machine state. If you turn it on or modify anything, the signature will change.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/126.png">

Next, navigate to the directory where your virtual machine's `.vdi` file is located. You can find the path in `Settings` → `Storage`.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/127.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/128.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/129.png">

**FINAL STEP:** Run the following command to generate the signature:

 ```bash
 shasum Born2beroot.vdi
 ``` 

 This command will generate the signature. The result of this signature should be added and pushed into the intra folder of the school. It is very important not to reopen the machine, as this will modify the signature. For corrections, remember to clone the machine (just copy the directory of the	Born2beroot VM) so you can turn it on without fear of changing the	signature.

 [shasum](https://ss64.com/osx/shasum.html) is a command that allows you to verify the integrity of a file using the SHA-1 hash checksum.

 <img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/130.png">

 Now, copy the signature into the intra folder:

 ```bash
 vim signature.txt
 ```
 
</p>
<br>

## 9 - Theory

<p align="justify">

### 9.1 - How to Correct - Evaluator Version

## 1. Preliminary Tests:

 - Clone the repository using:
 ```bash
 git clone <repository_url>
 ```

## 2. General Instructions:

 - Verify that the repository contains the `signature.txt` file.
 - Check the signature against the student's `.vdi` file to ensure they match
 - Clone the VM or create a snapshot, then open the VM.

## 3. Mandatory Part (Questions for the Student):

 - How does a virtual machine work and what is its purpose?
 - What are the basic differences between CentOS and Debian?
 - What is their choice of operating system and why?
 - If CentOS: Explain SELinux and DNF.
 - If Debian: Explain the difference between `aptitude` and `apt`, and what AppArmor is.
 - During the defense, a script must display all information every 10 minutes. Its operation will be checked in detail later.

 All explanations must be satisfactory (otherwise, the evaluation stops here).

### 4. Setup:

 - Ensure that the machine does not have a graphical environment at launch.
 - Connect to the VM as a created user (not root).
 - Ensure the password follows the required policy (2 days min, 7 days warning, 30 days max):
 ```bash
 sudo chage -l username
 ```

 - Check that the UFW service is started:

 ```bash
 sudo ufw status  # Look for status: active
 ```

 - Check that the SSH service is started:

 ```bash
 sudo systemctl status ssh
  ```

 - Verify the chosen operating system (Debian or CentOS):

 ```bash
 lsb_release -a || cat /etc/os-release
 ```

### 5. User:

 Ensure that a user with the login of the student being evaluated is present on the virtual machine. Verify that the user has been added and belongs to the sudo and user42 groups:

 ```bash
 getent group sudo
 ```

 ```bash
 getent group user42
 ```
### 6. Password Policy Check:

1. **Create a New User:**

 - Create a new user (e.g., `user42`):
 ```bash
 sudo adduser new_username
 ```

2. **Assign a Password:**

 - Assign a password of your choice, ensuring it complies with the subject rules.

3. **Verify Sudo Group Membership:**

 - Check if the new user is part of the `sudo` group:
 ```bash
 getent group sudo
 ```

4. **Student Explanation:**

 - Ask the student to explain how to implement the password policy. Typically, this involves modifying one or two configuration files. If there are any issues, the evaluation stops here.

5. **Create and Assign Group:**

 - With the new user, ask the student to create a group named `evaluating` and assign the new user to this group:
 ```bash
 sudo groupadd evaluating
 sudo usermod -aG evaluating new_username
 ```

6. **Verify Group Membership:**

 - Check if the new user belongs to the `evaluating` group:
 ```bash
 getent group evaluating
 ```

7. **Discussion on Password Policy:**

 - Ask the student to explain the advantages of the password policy beyond its requirement for the project.
 - Discuss the advantages and disadvantages of the policy implementation.

### 7. Hostname and Partitions:

1. **Check Hostname:**

 - Ensure the hostname of the machine is correctly formatted as `login42` (where `login` is the student's login):
 ```bash
 hostnamectl
 ```

2. **Modify Hostname:**

 - Change the hostname to your own login and restart the VM:
 ```bash
 sudo hostnamectl set-hostname new_hostname
 sudo reboot
 ```

 - **Note:** If the hostname is not updated after the restart, the evaluation stops here.

3. **Restore Original Hostname:**

 - Restore the machine to the original hostname and restart the VM:
 ```bash
 sudo hostnamectl set-hostname original_hostname
 sudo reboot
 ```

4. **View Partitions:**

 - Ask the student how to view the partitions for the VM:
 ```bash
 lsblk
 ```

 - Compare the output with the example provided in the subject. If there are bonuses, refer to the bonus example.

5. **LVM Explanation:**

 - Ask the student for a brief explanation of Logical Volume Management (LVM) and how it works.

### 8. SUDO:

1. **Check SUDO Installation:**

 - Ensure that the `sudo` program is properly installed on the virtual machine:
 ```bash
 dpkg -l | grep sudo
 ```

2. **Student Explanation:**

 - Ask the student to explain the value and operation of `sudo` using examples of their choice.
 - **Example:** `sudo` allows a permitted user to execute a command as the superuser or another user, as specified by the security policy.

3. **Verify SUDO Configuration:**

 - Open the sudoers file to check its configuration:
 ```bash
 sudo visudo
 ```

4. **Check SUDO Logs:**

 - Verify that the `/var/log/sudo/` directory exists and contains at least one file. Check the contents of the files in this directory to see a history of commands executed with `sudo`:
 ```bash
 ls /var/log/sudo/
 cat /var/log/sudo/some_log_file  # Replace 'some_log_file' with an actual file name
 ```

5. **Run a Command via SUDO:**

 - Execute a command using `sudo` and verify that the log files in the `/var/log/sudo/` directory have been updated:
 ```bash
 sudo ls /root
 ls /var/log/sudo/
 cat /var/log/sudo/some_log_file  # Check for the new entry
 ```

### 9. UFW (Uncomplicated Firewall):

1. **Check UFW Installation:**

 - Ensure that UFW is properly installed and functioning on the VM:
 ```bash
  sudo ufw status numbered
 ```

2. **Student Explanation:**

 - Ask the student to provide a basic explanation of UFW and its benefits.
 - **Answer:** UFW (Uncomplicated Firewall) is a user-friendly interface for managing iptables firewall rules, making it easier to configure and maintain firewall settings.

3. **List Active Rules:**

 - Verify the active UFW rules. Ensure there is a rule for port 4242:
  ```bash
  sudo ufw status numbered
  ```

4. **Add a New Rule:**

 - Add a new rule to open port 8080 and verify it has been added:
 ```bash
 sudo ufw allow 8080
 sudo ufw status numbered
 ```

5. **Delete the New Rule:**

 - With the student's assistance, delete the newly added rule for port 8080:
 ```bash
 sudo ufw delete <rule_number>
 ```
 - Note: Replace `<rule_number>` with the actual number of the rule for port 8080 from the listed rules.

### 10. SSH:

1. **Check SSH Service:**

 - Ensure the SSH service is properly installed and running on the VM:
 ```bash
 sudo service ssh status  # Check if it's active and using port 4242
 ```

2. **Student Explanation:**

 - Ask the student to explain what SSH is and its benefits.
 - **Answer:** SSH (Secure Shell) allows two computers to securely communicate over a network.

3. **Verify SSH Port:**

 - Confirm that the SSH service is configured to use only port 4242.

4. **SSH Login Test:**

 - Ask the student to assist you in logging in using SSH with the newly created user. This can be done using either a key or a simple password, depending on the student's setup:
 ```bash
 ssh new_user@127.0.0.1 -p 4242
 ```

5. **Root Login Restriction:**

 - Ensure that SSH login with the "root" user is disabled, as required:
 ```bash
 ssh root@127.0.0.1 -p 4242  # Should result in "Permission denied"
 ```

11. Script Monitoring (Questions for the Student):

1. **Understanding the Script:**

 - Ask the student how their script works and review their code.
 - The script should be located in the `monitoring.sh` file and display system information:
 ```bash
 cd /usr/local/bin && vim monitoring.sh
 ```

2. **Questions to Ask:**

 - What is “cron”?
 - How does the script run every 10 minutes from when the server starts?

3. **Verification:**

 - Verify the correct functioning of the script. Ensure it runs with dynamic values correctly:
 ```bash
 sudo crontab -u root -e  # Change the 10-minute interval to 1 minute for testing
 ```

4. **Stopping the Script:**

 - The student should demonstrate how to stop the script from running at startup without modifying the script itself. To check this, restart the VM:
 ```bash
 sudo cronstop
 sudo cronstart
 ```

5. **Post-Restart Checks:**

 - After restarting, ensure the script still exists in the same location, the permissions remain unchanged, and it has not been modified:
 ```bash
 sudo reboot
 sudo crontab -u root -e
 ```

### 9.2 - Essential Information

### What is a virtual machine?

A [Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine) (VM) is software that emulates a computer system, allowing it to run programs as if it were a physical machine. VMs enable the creation of multiple isolated environments or dedicated resources from a single physical hardware system.

### Why did you choose Debian/CentOS?

This is a personal choice. Here are some links for more information:
- [Debian](https://en.wikipedia.org/wiki/Debian)
- [CentOS](https://en.wikipedia.org/wiki/CentOS)

### Basic differences between CentOS and Debian

| CentOS vs Debian | CentOS vs Debian |
|:-------------------------:|:-------------------------:|
| <img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/CvD1.jpeg"> | <img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/CvD2.png"> |


### What is the purpose of virtual machines?

Virtual machines (VMs) provide a hardware and operating system-independent execution environment. They abstract the underlying system details, ensuring that programs run consistently across different platforms.

### Differences between apt and aptitude

`aptitude` offers both a command-line and text-based front-end for package management. It doesn't come by default, so you need to install it using the `apt` command. `aptitude` allows you to manage your packages through command lines and also from a visual interface directly in your terminal. You can perform main actions like installing, updating, and deleting packages. It also offers sub-commands to manage your packages similar to `apt`, but some people prefer the visual interface as it's easier to use.

`apt` is a lower-level package manager, while `aptitude` is a high-level package manager. Another significant difference is the functionality offered by both tools. `aptitude` offers better functionality compared to `apt-get`. Both tools provide the necessary means to perform package management. If you consider only the command-line interfaces of each, they are quite similar. Here are a few differences:

- `apt` offers a command-line interface, while `aptitude` offers a visual interface.
- When facing a package conflict, `apt` will not fix the issue, while `aptitude` will suggest a resolution.
- `aptitude` can interactively retrieve and display the Debian changelog of all available official packages.
- `apt` requires the user to have a solid knowledge of Linux systems and package management, as you are running everything in the command line. It can be difficult for a novice to handle.
- On the other hand, `aptitude` with its interface is more user-friendly as it offers a layer of abstraction regarding the different sub-commands to use for installation, upgrades, etc.
### What is AppArmor?

[AppArmor](https://en.wikipedia.org/wiki/AppArmor) (Application Armor) is a security module in the Linux kernel that allows system administrators to restrict the capabilities of programs using per-program profiles.

### What is LVM?

[LVM](https://en.wikipedia.org/wiki/Logical_volume_management) (Logical Volume Manager) is a system for managing logical volumes, or filesystems, in a more flexible manner than traditional partitioning schemes. It allows for dynamic resizing and efficient allocation of storage space on mass storage devices.

### 9.3 - Correction Sheet

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/b2b_cs1.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/b2b_cs2.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/b2b_cs3.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/01-born2beroot/.extra/b2b_cs4.png">

</p>
<br>

## Support Me

<p align="justify">
If you find this repository helpful, please consider starring it. Your support is greatly appreciated!</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Skills developed

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,linux,wordpress" />
  </a>
</p><br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>
