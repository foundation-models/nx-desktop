######################################################################
#                                                                    #
#  Copyright (c) 2001, 2018 NoMachine, http://www.nomachine.com.     #
#                                                                    #
#  All rights reserved.                                              #
#                                                                    #
######################################################################

#
# Configuration file format version.
#
ConfigFileVersion 4.0

#
# Set the log level of NX Server. NX Server logs to the syslog all
# the events that are <= to the level specified below, according to
# the following convention:
#
# KERN_ERR         3: Error condition.
# KERN_INFO        6: Informational.
# KERN_DEBUG       7: Debug-level messages.
#
# Note that NX Server uses level 6 in the syslog to log the event.
# This is intended to override settings on the local syslog configur-
# ation that would prevent the event from being actually logged.
#
# The suggested values are:
#
# 6: This is the default value. Only the important events
#    are logged.
#
# 7: Sets logs to level debug.
#
#SessionLogLevel 6

#
# Point the server to log to a specific file. The default log file is
# /Library/Application Support/NoMachine/var/log/nxserver.log on Mac
# OS X, %PROGRAMDATA%/NoMachine/var/log/nxserver.log on Windows and
# /usr/NX/var/log/nxserver.log on Linux. 
#
#SystemLogFile /usr/NX/var/log/nxserver.log

#
# Set how often NoMachine must check for updates on the repository.
# Default value, 172800 seconds, allow to check once every two days.
# To disable check for updates, set this key to 0.
#
#UpdateFrequency 172800

#
# Specify the TCP port where the NX service is listening.
#
#NXPort 4000

#
# Enable support for NAT-PMP and UPnP networking protocols to redirect
# a port from server side to allow end-users to connect to the server
# through a firewall. Accepted values are:
#
# NX:   Redirect port of the nxd service.
#
# SSH:  Redirect port of the SSH server.
#
# HTTP: Redirect port of the HTTP server.
#
# none: Do not redirect port. Connections via NX, SSH or HTTP
#       protocol are possible only if NoMachine host and user's
#       machine are on the same LAN or server has a public IP.
#
EnableUPnP NX

#
# Specify the port where the NX service will be redirected using NAT-
# PMP or UPnP to allow end-users to connect to the server through a
# firewall.
#
#NXUPnPPort ""

#
# Specify the port where the SSHD service will be redirected using
# NAT-PMP or UPnP to allow end-users to connect to the server through
# a firewall.
#
#SSHDUPnPPort ""

#
# Specify the port where the HTTP service will be redirected using
# NAT-PMP or UPnP to allow end-users to connect to the server through
# a firewall.
#
#HTTPUPnPPort ""

#
# Specify a port range, in the form of minport-maxport, to use UDP
# communication for multimedia data. Alternatively, specify a comma-
# separated list of ports or a single port. In this last case, only
# one connection will be able to use UDP at any given time. As a note,
# the Internet Assigned Numbers Authority (IANA) suggests the range
# 49152 to 65535 for dynamic or private ports.
#
#UDPPort 4011-4999

#
# Specify the TCP port where the SSHD daemon is listening on the NX
# Server host machine.
#
#SSHDPort 22

#
# Set the base display number for NX sessions.
#
#DisplayBase 1001

#
# Set the maximum number of displays reserved for NX sessions.
#
#DisplayLimit 200

#
# Set the maximum number of concurrent connections.
#
#ConnectionsLimit 20

#
# Specify the maximum number of concurrent connections that can be
# run by a single user.
#
#ConnectionsUserLimit 20

#
# Set the maximum number of concurrent virtual desktops.
#
#VirtualDesktopsLimit 20

#
# Specify the maximum number of concurrent Linux virtual desktops
# that can be run by a single user. By default a user can run as
# many virtual desktops as they are allowed on the server. By setting
# this value to 1, user has to terminate their disconnected virtual
# desktop before starting a new one.
#
#VirtualDesktopsUserLimit 20

#
# Set for how long NX Server will retain data related to terminated
# sessions in its session history.
#
# <0: Never delete data from NX session history.
#
#  0: Disable NX sessions history.
#
# >0: Keep data in session history for this amount
#     of seconds.
#
# The default value, 2592000 seconds, lets NX Server keep session data
# for 30 days.
#
#SessionHistory 2592000

#
# Allow NX Server to terminate oldest disconnected sessions:
#
# 1: Enabled. Enable the automatic kill of the disconnected
#    sessions.
#
# 0: Disabled. Disconnected sessions are never terminated.
#
# When this option is set and the maximum number of concurrent sessions
# has been reached, the server will kill the oldest disconnected sessions to
# make room for the new session.
#
#EnableAutokillSessions 0

#
# Configure the NX Server behavior when the maximum number of allowed
# connections is reached. An already connected user can be asked to
# accept or refuse to disconnect to make room for the incoming user
# (this is the default), or can be automatically disconnected or
# never disconnected.
#
# 0: Disabled. The server prompts the connected user to accept or
#    refuse to disconnect for making room for the incoming user. If
#    no choice is made, the user is automatically disconnected.
#
# 1: Enabled. The server automatically disconnects the connected user
#    to make room for the connecting user. No message is issued to
#    the already connected user.
#
# 2: None. The server prompts the connected user to accept or
#    refuse to disconnect for making room for the incoming user. If
#    no choice is made, the server doesn't disconnect the user and
#    advise the incoming user that the maximum number of allowed
#    connections is reached.
#
# 3: Silent. The server never notifies desktop owners about incoming
#    users, incoming users are informed that the maximum number of
#    allowed connections is reached.
#
#AutomaticDisconnection 0

#
# Enable persistent sessions for users. If the option is followed by
# the keyword 'all', all users are allowed to run persistent sessions.
# Alternatively, it can be followed by a list of comma-separated user-
# names. The default value is 'all' which corresponds to enabling
# persistent sessions for all users. Values specified are overridden
# by the value set for the 'DisablePersistentSession' key.
#
#EnablePersistentSession all

#
# Disable persistent sessions for users. If the option is followed by
# the keyword 'all', no user is allowed to run persistent sessions. Al-
# ternatively, the option can be followed by a list of comma-separated
# usernames. The default value is the empty string which corresponds
# to disabling persistent sessions for no user. The values specified
# override the values set for the 'EnablePersistentSession' key.
#
#DisablePersistentSession ""

#
# Enable or disable clipboard:
#
# client: The content copied on the client can be pasted inside the
#         NX session.
#
# server: The content copied inside the NX session can be pasted
#         on the client.
#
# both:   The copy&paste operations are allowed between both the
#         client and the NX session and vice versa.
#
# none:   The copy&paste operations between the client and the NX
#         session are never allowed.
#
EnableClipboard both 

#
# Enable or disable NX users DB:
#
# 1: Enabled. Only users listed in NX users DB can login to the NX
#    server.
#
# 0: Disabled. All the authenticated users can login.
#
# If the NX user DB is disabled, any user providing a valid password
# from local DB or through SSHD authentication, can connect to the NX
# system. This is likely to be the default when SSHD authentication
# with PAM is enabled.
#
EnableUserDB 0

#
# Enable or disable NX password DB:
#
# 1: Enabled. Use NX password DB to authenticate users.
#
# 0: Disabled. Use SSHD + PAM authentication.
#
# System administrators can enable a restricted set of users to con-
# nect to NX Server by setting EnableUserDB to 1 and adding
# those users to the DB. If user is enabled to connect, his/her pass-
# word will be verified against the current PAM settings by the SSHD
# daemon.
#
# If both 'EnableUserDB' and 'EnablePasswordDB' are set to 0, any
# user being authenticated by SSHD account will be enabled to connect
# to the system.
#
EnablePasswordDB 0

#
# Specify policies as a comma-separated list of options to tune the
# behaviour of clients 4 or higher and restore behaviors typical of
# version 3.x. Options accept value 1 (enabled) and 0 (disabled).
# This is the list of the available options:
#
# autocreate=1   run a new virtual desktop automatically when the ses-
#                sion type is pre-defined in the player configuration.
#
# autoconnect=1  reconnect automatically the user's virtual desktop.
#
# automigrate=1  don't connect to a virtual desktop when there is a
#                a user already connected but disconnect and reconnect
#                the session on the new side (session migration).
#
# desktop=1      list all desktop types set in the AvailableSessionTypes
#                key.
#
# dialog=1       display the disconnect/terminate dialog.
#
#ConnectPolicy autocreate=1,autoconnect=1,automigrate=1,desktop=0,dialog=0

#
# Enable or disable starting the NoMachine HTTP server. If enabled,
# the server will be started automatically at every reboot.
#
# 1: Automatic. Enable automatic starting of the HTTP server.
#
# 0: Manual. Disable automatic starting of the HTTP server.
#    The server can be started manually.
#
#StartHTTPDaemon Automatic

#
# Enable or disable starting the NX service. If enabled, the service
# will be started automatically at every reboot.
#
# 1: Automatic. Enable automatic starting of the NX server.
#
# 0: Manual. Disable automatic starting of the NX server.
#    The server can be started manually.
#
#StartNXDaemon Automatic

#
# Enable or disable starting the NX service on Windows. If enabled,
# the SSH server will be started automatically at every reboot.
#
# 1: Automatic. Enable automatic starting of the SSH server.
#
# 0: Manual. Disable automatic starting of the SSH server.
#    The server can be started manually.
#
#StartSSHDaemon Automatic

#
# Specify how clients will have to contact the node, by default by
# the NX service. To allow for multiple methods, specify them in a
# comma-separated list. Supported methods are: NX, SSH and HTTP.
#
ClientConnectionMethods NX,SSH

#
# Specify a list of comma-separated 'hostname:port' values for XDM
# server.
#
#RoundRobinXdmList 127.0.0.1:177

#
# Enable or disable the XDM round robin query:
#
# 1: Enabled. Let NX Server decide XDM host according to hostnames
#    that are defined in the RoundRobinXdmList key.
#
# 0: Disabled.
#
#EnableRoundRobinXdmQuery 1

#
# Enable or disable the XDM indirect query:
#
# 1: Enabled. Let the user obtain a list of available XDM hosts.
#
# 0: Disabled.
#
#EnableIndirectXdmQuery 0

#
# Enable or disable the XDM direct query:
#
# 1: Enabled. Let client specify XDM host.
#
# 0: Disabled.
#
#EnableDirectXdmQuery 0

#
# Enable or disable the XDM broadcast query:
#
# 1: Enabled. Let client connect to the first responding XDM host.
#
# 0: Disabled.
#
#EnableBroadcastXdmQuery 0

#
# Specify the algorithm to be used for selecting the node. Accepted
# values are: 'round-robin' for selecting the node according to the
# round robin algorithm and 'custom' to use a custom load-balancing
# algorithm as specified in the NodeSelectionScript key. Otherwise
# set 'load-average' to select the node according to the load average
# of each node. Default is to use a weighted round-robin algorithm.
#
#LoadBalancingAlgorithm round-robin

#
# Specify path and name to the script providing the load-balancing al-
# gorithm.
#
#NodeSelectionScript ""

#
# Specify path and name of the command 'sessreg' for managing utmp and
# wtmp entries for non-init clients.
#
#CommandSessreg /usr/X11/bin/sessreg

#
# Specify the location and name of the SSH authorized keys file.
#
#SSHAuthorizedKeys authorized_keys2

#
# Accept or refuse the client connection if SSHD does not export
# the 'SSH_CONNECTION' and 'SSH_CLIENT' variables in the environment
# passed to the NX Server.
#
# 1: Refuse. Check the remote IP and do not accept the connection if it
#    can't be determined.
#
# 0: Accept. Check the remote IP and accept the connection even if the
#    remote IP is not provided.
#
#SSHDCheckIP 0

#
# Specify the base username to be used by NX Server to create guest
# users accounts. The server will add a progressive number to the
# name specified by GuestName, according to the range of values set
# in the BaseGuestUserId and GuestUserIdLimit keys.
#
#GuestName guest

#
# Set the base User Identifier (UID) number for NX guest users.
#
#BaseGuestUserId 10

#
# Set the maximum User Identifier (UID) number reserved for NX guest
# users.
#
#GuestUserIdLimit 200

#
# Set the Group Identifier (GID) for NX guest users. The specified
# GID must already exist on the system.
#
#GuestUserGroup ""

#
# Set the maximum number of concurrent NX guest users.
#
#GuestUserLimit 10

#
# Set the maximum number of NX sessions a NX guest user can run before
# his/her account is terminated.
#
#GuestUserConnectionLimit 5

#
# Set for how long NX Server has to retain NX guest users accounts.
#
#  0: NX guest users accounts are never removed.
#
# >0: Maintain NX guest users accounts for this amount
#     of seconds.
#
# The default value, 2592000 seconds, lets NX Server keep guest users
# accounts for 30 days.
#
#GuestUserAccountExpiry 2592000

#
# Set for how long NX Server has to keep alive a NX guest user's
# session. When the time has expired, NX Server will kill the session.
#
#  0: NX guest user session is never terminated.
#
# >0: Keep NX guest user session live for this number
#     of seconds.
#
#GuestConnectionExpiry 0

#
# Enable or disable possibility for NX guest users to disconnect their
# sessions:
#
# 1: Enabled. NX Server lets NX guest users disconnect sessions.
#
# 0: Disabled.
#
#GuestUserAllowDisconnect 1

#
# Set the home directory for NX guest users. Provide an empty value
# between double quotes to let NX Server create the guest user's home
# in the default directory set on the system.
#
#GuestUserHome /home

#
# Enable or disable removing the NX guest user from the system when the
# account is expired:
#
# 1: Enabled. When the guest account is expired, NX Server will
#    delete the account from both the system and the NX guests DB
#    and will remove the home directory.
#
# 0: Disabled. When the guest account is expired, NX Server will
#    keep the guest account on the system but will forbid this user
#    to start new sessions on the server.
#
#EnableGuestWipeout 1

#
# Allow the server to set disk quota for the NX guest accounts:
#
# 1: Enabled. When a new guest account is created on the system,
#    the server will set the disk quota for this user.
#
# 0: Disabled. No restrictions on the amount of disk space used
#    by each guest user are applied.
#
#EnableGuestQuota 0

#
# Specify the username of the account to be used as a prototype for
# propagating its disk quota settings to all the new guest accounts.
# If the softlimit or the hardlimit on either the inode or the disk
# block are set, they will override the settings applied to the user
# prototype.
#
#GuestQuotaProtoname protoguest

#
# Specify the maximum amount of disk space available for each of the
# guest users, checked as number of inodes. This limit can be exceeded
# for the grace period.
#
#GuestQuotaInodeSoftlimit 0

#
# Specify the absolute maximum amount of disk space available for
# each of the guest users, checked as number of inodes. Once this
# limit is reached, no further disk space can be used.
#
#GuestQuotaInodeHardlimit 0

#
# Specify the maximum amount of disk space available for each of the
# guest users, checked as number of disk blocks consumed. This limit
# can be exceeded for the grace period.
#
#GuestQuotaBlockSoftlimit 0

#
# Specify the absolute maximum amount of disk space available for each
# of the guest users, checked as number of disk blocks consumed. Once
# this limit is reached, no further disk space can be used.
#
#GuestQuotaBlockHardlimit 0

#
# Specify the grace period, expressed in seconds, during which the
# soft limit, set in the GuestQuotaInodeSoftlimit key may be
# exceeded.
#
#GuestQuotaInodeGracePeriod 0

#
# Specify the grace period, expressed in seconds, during which the
# soft limit, set in the GuestQuotaBlockSoftlimit key may be
# exceeded.
#
#GuestQuotaBlockGracePeriod 0

#
# Specify a list of comma-separated filesystem names or devices to
# which the disk quota restrictions will be applied. The default
# value is 'all' which corresponds to applying the disk quota limits
# to all the filesystems having disk quota enabled.
#
#GuestQuotaFilesystems all

#
# Set the User Identifier (UID) number for NX users. If an empty value
# is specified, the NX Server will create the account with the default
# value set on the system.
#
#UserId ""

#
# Set the Group Identifier (GID) for NX users. If an empty value is
# specified, NX Server will create the account with the default
# value set on the system.
#
#UserGroup ""

#
# Set the home directory for NX users. If an empty value is specified,
# NX Server will create the user's home in the default directory
# set on the system.
#
#UserHome ""

#
# Allow the user to connect to a virtual desktop:
#
# 1: Enabled. Each user can request to connect to a
#    virtual desktop.
#
# 0: Disabled. Connections to a virtual desktop are
#    forbidden.
#
#VirtualDesktopSharing 1

#
# Set the interaction level for the session connected to a virtual
# desktop:
#
# 0: View-only. The session is connected to the desktop in
#    view-only mode, i.e. the user can't interact with the
#    virtual desktop.
#
# 1: Restricted. User connected to the virtual desktop can
#    interact with the desktop except for resize operations.
#
# 2: Interactive. User connected to the virtual desktop has
#    full interaction with the desktop.
#
#VirtualDesktopMode 2

#
# Enable or disable NX Server requesting authorization to the owner of
# the virtual desktop before connecting.
#
# 1: Enabled. NX Server asks for authorization to the owner
#    of the virtual desktop before trying to connect.
#
# 0: Disabled. NX Server tries to connect to the virtual
#    desktop without the need for any authorization from the
#    desktop's owner.
#
#VirtualDesktopAuthorization 1

#
# Allow the user to connect to the physical desktop:
#
# 0: Disabled. Connections to the physical desktop are
#    forbidden.
#
# 1: Enabled. Each user can request to connect to the
#    physical desktop.
#
# 2: Restricted. Only the administrator and trusted users
#    can connect to the physical desktop.
#
#PhysicalDesktopSharing 1

#
# Set the interaction level for the session connected to the physical
# desktop:
#
# 0: View-only. The session is connected to the desktop in
#    view-only mode, i.e. the user can't interact with the
#    physical desktop.
#
# 1: Restricted. User connected to the physical desktop can
#    interact with the desktop except for resize operations.
#
# 2: Interactive. User connected to the physical desktop has
#    full interaction with the desktop.
#
#PhysicalDesktopMode 2

#
# Enable or disable NX Server requesting authorization to the owner of
# the physical desktop before connecting.
#
# 1: Enabled. NX Server asks for authorization to the owner
#    of the physical desktop before trying to connect.
#
# 0: Disabled. NX Server tries to connect to the physical
#    desktop without the need for any authorization from the
#    desktop's owner.
#
#PhysicalDesktopAuthorization 1

#
# Specify absolute path of the custom script to be executed before
# the user logs in. The script can accept remote IP of the user's
# machine as its input.
#
# E.g. UserScriptBeforeLogin /tmp/nxscript/script.sh
#
#UserScriptBeforeLogin ""

#
# Specify absolute path of the custom script to be executed after
# the user logs in. The script can accept username as its input.
#
#UserScriptAfterLogin ""

#
# Specify absolute path of the custom script to be executed before
# the session start-up. The script can accept session ID, username,
# node host and node port as its input.
#
#UserScriptBeforeSessionStart ""

#
# Specify absolute path of the custom script to be executed after the
# session start-up. The script can accept session ID, username, node
# host and node port as its input.
#
#UserScriptAfterSessionStart ""

#
# Specify absolute path of the custom script to be executed before
# the session is closed. The script can accept session ID, username,
# node host and node port as its input.
#
#UserScriptBeforeSessionClose ""

#
# Specify absolute path of the custom script to be executed after the
# session is closed. The script can accept session ID, username, node
# host and node port as its input.
#
#UserScriptAfterSessionClose ""

#
# Specify absolute path of the custom script to be executed before
# the session is reconnected. The script can accept session ID user-
# name, node host and node port as its input.
#
#UserScriptBeforeSessionReconnect ""

#
# Specify absolute path of the custom script to be executed after the
# session is reconnected. The script can accept session ID username
# node host and node port as its input.
#
#UserScriptAfterSessionReconnect ""

#
# Specify absolute path of the custom script to be executed before
# the session is disconnected. The script can accept session ID, user-
# name, node host and node port as its input.
#
#UserScriptBeforeSessionDisconnect ""

#
# Specify absolute path of the custom script to be executed after
# the session is disconnected. The script can accept session ID, user-
# name, node host and node port as its input.
#
#UserScriptAfterSessionDisconnect ""

#
# Specify absolute path of the custom script to be executed before
# session failure. The script can accept session ID username, node
# host and node port as its input.
#
#UserScriptBeforeSessionFailure ""

#
# Specify absolute path of the custom script to be executed after
# session failure. The script can accept session ID username, node
# host and node port as its input.
#
#UserScriptAfterSessionFailure ""

#
# Specify absolute path of the custom script to be executed before
# NX Server creates the new account. The script can accept username
# as its input.
#
#UserScriptBeforeCreateUser ""

#
# Specify absolute path of the custom script to be executed after
# NX Server has created the new account. The script can accept user-
# name as its input.
#
#UserScriptAfterCreateUser ""

#
# Specify absolute path of the custom script to be executed before
# NX Server removes the account. The script can accept username as
# its input.
#
#UserScriptBeforeDeleteUser ""

#
# Specify absolute path of the custom script to be executed after
# NX Server has removed the account. The script can accept username
# as its input.
#
#UserScriptAfterDeleteUser ""

#
# Specify absolute path of the custom script to be executed before
# NX Server disables the user. The script can accept username as its
# input.
#
#UserScriptBeforeDisableUser ""

#
# Specify absolute path of the custom script to be executed after
# NX Server has disabled the user. The script can accept username
# as its input.
#
#UserScriptAfterDisableUser ""

#
# Specify absolute path of the custom script to be executed before
# NX Server enables the user. The script can accept username as its
# input.
#
#UserScriptBeforeEnableUser ""

#
# Specify absolute path of the custom script to be executed after
# NX Server has enabled the user. The script can accept username
# as its input.
#
#UserScriptAfterEnableUser ""

#
# Specify absolute path of the script to be executed before
# the server daemon is started.
#
#ScriptBeforeServerDaemonStart ""

#
# Specify absolute path of the script to be executed after
# the server daemon is started.
#
#ScriptAfterServerDaemonStart ""

#
# Specify absolute path of the script to be executed before
# the server daemon is stopped.
#
#ScriptBeforeServerDaemonStop ""

#
# Specify absolute path of the script to be executed after
# the server daemon is stopped.
#
#ScriptAfterServerDaemonStop ""

#
# Allow the root user (or Administrator on a Windows machine) to
# run NX sessions.
#
# 1: Enabled. Allow an NX user to run sessions as user with
#    administrative rights.
#
# 0: Disabled. NX Server forbids an NX user to log in as user
#    having administrative privileges.
#
#EnableAdministratorLogin 1

#
# Specify path to the SSH client.
#
#SSHClient /usr/bin/ssh

#
# Enable or disable broadcasting the required information to let
# other computers discover this host on the local network.
#
# 1: Enabled. Other computers on the local network can find
#    this host machine.
#
# 0: Disabled. This computer cannot be found on the local
#    network but it's still reachable by providing its IP
#    or hostname.
#
#EnableNetworkBroadcast 1

#
# Specify a list of comma-separated session types available on this
# server.
#
AvailableSessionTypes unix-remote,unix-console,unix-default,unix-application,physical-desktop,shadow,unix-xsession-default,unix-xdm

#
# Specify how the node process is run.
#
# 1: Noshell. Execute script to run the node process directly.
#
# 0: Shellmode. Execute script to run the node process by
#    invoking the bash shell.
#
#RunNodeMode 0

#
# Enable the server to automatically configure the firewall for all
# the configured services. On platforms that don't support adding
# the specific executables to a white list, the needed ports are
# added at server startup and removed at server shutdown, or when,
# at run-time, a new port is needed. The default value is 1.
#
# 1: Enabled. NoMachine opens the required ports in the firewall.
#
# 0: Disabled. Firewall must be configured manually. By default
#    the required ports are TCP ports 4000 for NX, 4080 and 4443
#    for HTTP and UDP ports in the range 4011-4999 range.
#
#EnableFirewallConfiguration 1

#
# Enable or disable logging to the system log file, e.g. syslog
# on UNIX based systems and Events log on Windows platforms.
#
# 1: Enabled. The webplayer and webclient applications will log.
#    to the system log file.
#
# 0: Disabled. This is the default value, webplayer and webclient
#    will log to the file specified in the SystemLogFile key.
#
#EnableSyslogSupport 0

#
# Set for how long the server has to keep alive virtual desktops in
# status disconnected. When the time is expired, the server will
# terminate virtual desktops if no user are connected there.
#
#  0: Virtual desktops in status disconnected are never terminated.
#     This is the default.
#
# >0: Keep Disconnected session alive for this number
#     of seconds.
#
#DisconnectedSessionExpiry 0

#
# Enable or disable NoMachine server checking at start up the status
# of the Windows Net Logon service.
#
# 1: Enabled. The server will delay its start up until Net Logon is
#    up and running. This is required when the NoMachine server host
#    is an ActiveDirectory client. If Net Logon fails to start, No-
#    Machine server will be not available on this host and the start
#    up procedure will report an error.
#
# 0: Disabled. NoMachine server will start without verifying if Net
#    Logon is up and running. This is the default setting.
#
#NetLogonDependency 0

#
# Set for how long the server will wait for the authentication phase
# to be completed on the system. By default timeout is set to 30
# seconds. Increase this value when the authentication process on
# the system takes longer. This setting applies also to two-factor
# authentication.
#
#AuthorizationTimeout 30

#
# Enable or disable the automatic creation of an X11 display when no
# X servers are running on this host (e.g. headless machine) to let
# users connect to the desktop. This setting applies to NoMachine
# servers not supporting virtual desktops and permits to have one
# single display.
#
# 1: Enabled. NoMachine will create automatically the new display at
#    server startup. This setting has to be used in conjunction with
#    'DisplayOwner' and 'DisplayGeometry'.
#
# 0: Disabled. NoMachine will prompt the user for creating the new
#    display. This is the default.
#
#CreateDisplay 0

#
# When 'CreateDisplay' is enabled, specify the display owner and let
# NoMachine create the new display without querying the user. If the
# server supports only one concurrent connection, the connecting user
# must be the display owner set in this key.
#
#DisplayOwner ""
DisplayOwner h

#
# When 'CreateDisplay' is enabled, specify the resolution of the new
CreateDisplay 1
# desktop in the WxH format. Default is 800x600.
#
#DisplayGeometry 800x600
DisplayGeometry 800x600

#
# Enable or disable support for Kerberos ticket-based authentication 
# for connections by NX protocol.
#
# 1: Enabled. Kerberos ticket-based authentication is supported when 
#    users connect by the NX protocol.
#
# 0: Disabled. Kerberos ticket-based authentication is not supported 
#    for connections by NX protocol. This is the default.
#
#EnableNXKerberosAuthentication 0

#
# Set for how long the server will wait for the kerberos response
# from kerberos kdc server. By default timeout is set to 10 seconds.
# Increase this value when the authentication process on the system
# takes longer.
#
#NXKerberosAuthenticationTimeout 10

#
# Set the maximum size for the Kerberos authentication request, by 
# default 1048576 bytes.
#
#NXKerberosRequestLimit 1048576

#
# Enable or disable support for Kerberos ticket forwarding to the 
# remote node when the user didn't authenticate with Kerberos, but 
# their Kerberos ticket is already available on the server system.
# This key applies to a multi-node environment only and it's di-
# sabled by default 
#
# 1: Enabled. User's Kerberos ticket already available on the 
# NoMachine server system will be forwarded to the remote node 
# where the user's session is started.
#
# 0: Disabled. User's Kerberos ticket will not be forwarded to the 
# remote node where the user's session is started.
#
#EnableNXKerberosForwardingToRemote 0

#
# Blanking the physical screen of the machine when somebody connects.
#
# 1: Enabled. The physical screen of this machine is blanked and the
#    local user cannot interact with the desktop while somebody is
#    connected.
#
# 0: Disabled. The physical desktop of this machine is not blanked
#    when somebody is connected. All operations made from the remote
#    user are visible to the local user and the local user can interact
#    with the desktop. This is the default.
#
#EnableScreenBlanking 0

#
# Activate the system lock screen when the NoMachine user disconnects
# from the physical display.
#
# 1: Enabled. When the user disconnects, the physical screen of this
#    host will be locked.
#
# 0: Disabled. When the user disconnects, the screen state will not
#    change. This is the default.
#
#EnableLockScreen 0

#
# Enable or disable support for SSL client authentication in the NX
# service.
#
# 1: Enabled. The NX service, nxd, uses the client side certificate
#    to validate the connecting client against a list of allowed
#    clients. Only clients owning a certificate valid for this NX
#    service can authenticate with this method.
#
# 0: Disabled. Authentication by using a client side certificate
#    is not possible.
#
# This option applies to connections by NX protocol only and it's
# disabled by default.
#
#EnableNXClientAuthentication 0

#
# Specify how clients will have to authenticate to the server, by
# default all the available methods are supported. This corresponds
# to value all. To specify a subset of methods use a comma-separated
# list.
#
# Supported methods for connections by NX protocol are:
# NX-password   : Password authentication.
# NX-private-key: Key-based authentication.
# NX-kerberos   : Kerberos ticket-based authentication.
#
# Supported method for connections by SSH protocol is:
# SSH-system    : All methods supported for the system login.
#                 SSH authentication methods for the system login
#                 have to be set on the system for example in the
#                 PAM configuration.
#
# For example:
# AcceptedAuthenticationMethods NX-private-key,SSH-system
#
# This key has to be used in conjunction with ClientConnectionMethod.
# See also the EnableNXClientAuthentication key for enabling SSL
# client authentication for connections by NX protocol.
#
#AcceptedAuthenticationMethods all

#
# Configure behavior of the NoMachine menu to be displayed inside the
# session: hide the welcome panels shown at session startup, prevent
# users from changing settings or use specific services. Default is
# 'all', welcome panels are shown and the menu can be used without
# restrictions. Set this key to 'none' for hiding both welcome panels
# and the NoMachine menu (clicking on the page peel or pressing ctrl+
# alt+0 will not open it). Give a comma-separated list of values to
# indicate which items should be made available to users.
#
# Available values for client and web sessions are: welcome,input,
# display,display-mode,display-settings,connection. Client sessions
# support also: devices,devices-disk,devices-printer,devices-usb,
# devices-network,devices-smartcard,audio,audio-settings,mic,mic-
# settings,recording. For web sessions instead it's possible to set
# also: keyboard,clipboard.
#
#ClientMenuConfiguration all

#
#  Enable or disable users to store their access credentials on their
#  devices when they connect via NoMachine client or in the browser's
#  cookie in case of web sessions.  Accepted values are:
#
#  player:    Allow only users connected via NoMachine client to save
#             username and password in their connection file.
#
#  webplayer: Allow only users connected via web to store username and
#             password in the browser's cookies, if enabled.
#
#  both:      Users connected via client or via web can always choose to
#             store their credentials.
#
#  none:      Do not permit users to save their username and password.
#             Users will be requested to insert their credentials at
#             each new connection via NoMachine client or web.
#
#
#EnableClientCredentialsStoring both

#
# Enable or disable strict GSSAPI host credential check for Kerberos
# authentication. When enabled, authentication is done against the
# host service on the current hostname. If disabled, authentication
# is done against any requested service key stored in the keytab file.
#
# 1: Enabled. Kerberos authentication is made strictly against hostname
# host service. This is the default.
#
# 0: Disabled. Allow relaxed GSSAPI host credential check, and make
# possible to authenticate against GSSAPI host service with a
# different name than hostname.
#
#NXGSSAPIStrictAcceptorCheck 1

#
# Enable or disable this server accepting direct connections to its
# IP or hostname when it's federated in a multi-server environment.
#
# 1: Enabled. Users are allowed to connect to this NoMachine server.
#
# 0: Disabled. Users have to connect to the main server ruling the
# multi-host environment in order to reach this server.
#
#EnableServerRole 1

#
# Set the log level of NoMachine Web Player. Web Player logs all events
# that are <= to the level specified below, according to the following
# convention:
#
# KERN_ERR         3: Error condition.
# KERN_INFO        6: Informational.
# KERN_DEBUG       7: Debug-level messages.
#
# The suggested values are:
#
# 6: Default value. Only relevant events are logged.
#
# 7: Set the log level to debug.
#
#WebSessionLogLevel 6

#
# Specify user name of NoMachine HTTP Server owner.
#
#ApacheUname nxhtd

#
# Specify group name of NoMachine HTTP Server owner.
#
#ApacheGname nxhtd

#
# Allow NoMachine HTTP Server to serve content of Web Player applica-
# tion.
#
# 1: Enabled. Users can access the Web Player application.
#
# 0: Disabled. The Web Player application is not accessible.
#
#EnableWebPlayer 1

#
# Specify the absolute path for the Web Player graphic interface and
# for storing session images generated by the X11 agent.
#
#WebDirPath /usr/NX/share/htdocs/nxwebplayer

#
# Make Web Player request user credentials to connect to the server
# or try to connect automatically as a guest user on the server:
#
# 1: Enabled. Web Player tries to log-in to server as a guest
#    without the need for user intervention. Server must support
#    the automatic generation of guest accounts and have this
#    functionality enabled.
#
# 0: Disabled. Web Player prompts the user asking for access
#    credentials to log-in to server. Users can provide either
#    their username and password or to try to log-in as a guest
#    if the server supports it.
#
#EnableWebGuest 0

#
# Show the tutorial wizard for the menu panel at session startup.
#
# 1: Enabled. Display the tutorial screenshots.
#
# 0: Disabled. Do not show the tutorial.
#
#EnableWebMenuTutorial 1

#
# Make Web Player change connection name:
#
# 1: Enabled. Allows to have displayed name from Section "Server"
#    directive.
#
# 0: Disabled. Allows to see hostname of the server displayed.
#
#EnableWebConnectionName 0

#
# Specify the method to be used for browser-server communication. By
# default this keys is set to 'classic'. To use WebRTC technology
# set this key to 'classic,webrtc'. In this case HTML5 real-time
# communication will be used when the browser supports WebRTC and
# will fall back to the classic web media exchange protocol in case
# of browser not supporting WebRTC.
#
#AcceptedWebMethods classic

#
# Specify for how many seconds the automatically generated password
# must be valid. The default value is 60 seconds.
#
#OneTimePasswordValidityPeriod 60

#
# Specify the GUI language. Available languages are: English (default)
# French, German, Italian, Spanish, Polish, Portuguese and Russian.
# Users will be still able to change the language in the GUI.
#
#WebSessionLanguage English

#
# Specify the GUI theme, sunshine (default) or moonlight. Users will
# be still able to change GUI theme in the GUI..
#
#WebSessionTheme sunshine

#
# Specify the wave theme, red (default), light gray or dark gray.
# Users will be still able to change wave theme in the GUI.
#
#WebSessionWave red

#
# Enable or disable the debug tool when the server program is launched.
#
# 1: Enabled. The debug tool specified in the CommandDebug key will
#    be run to debug the server program. This can slow down the exe-
#    cution of the server.
#
# 0: Disabled. Debug tool is not run.
#
#EnableDebug 0

#
# Specify absolute path of the command to launch a debug tool.
#
#CommandDebug ""

#
# Specify path and commands of the debug tool in a comma-separated
# list, e.g. accepted command for Valgrind is '/usr/bin/valgrind.bin'.
#
#AcceptedDebuggerCommands /usr/bin/valgrind.bin

#
# Append arguments to the command used by the server to launch the
# debug tool
#
# Multiple parameters can be specified by separating them with a blank
# character. For security reasons, no shell interpretation is made.
#
#DebugOptions ""

#
# The Section directive allows to define settings for the server
# where the Web Player will connect. Edit lines below to define a
# server different from localhost. Protocol is by default 'NX' as
# well as port is '4000'. To use SSH service, specify 'system' to
# authorize with system password. In this case NoMachine uses by
# default port 4022 on Windows and port 22 on the other operating
# systems.
#
Section "Server"

Name "Connection to localhost"
Host 127.0.0.1
Protocol NX
Port 4000

EndSection

#
# When WebRTC is enabled, set parameters for STUN/TURN utilities to
# permit NAT traversal for peer to peer direct video, audio and data
# streaming. Replace 'hostname' and 'portnumber' with the ip or host
# name of the network server; replace 'username' and 'password' with
# username and password to be used for authenticating to such server.
# If a TURN server has to be contacted, duplicate section below, set
# it to Section "TURN" and provide the appropriate values for Host,
# Port, User and Password parameters. Define multiple sections for
# different STUN or TURN servers to provide an alternative server
# in case the first of the list is not reachable.
#
# Section "STUN"
#
# Host      hostname
# Port      portnumber
# User      username
# Password  password
#
# EndSection

