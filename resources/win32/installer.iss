; Inno Setup script for the ImPlay-Slint Windows installer.
; Built by .github/workflows/release-slint.yml:
;   ISCC.exe /DAppVersion=1.6.0 /DSourceDir=<staged files> /DOutputDir=<dir> /DOutputName=<name> installer.iss
; File types mirror resources/win32/wix/patch.xml from the upstream MSI.

#ifndef AppVersion
  #define AppVersion "0.0.0"
#endif
#ifndef SourceDir
  #error SourceDir must point at the staged release files (ImPlay.exe, DLLs, ...)
#endif
#ifndef OutputDir
  #define OutputDir "."
#endif
#ifndef OutputName
  #define OutputName "ImPlay-Slint-" + AppVersion + "-win64-setup"
#endif

#define AppName "ImPlay"
#define AppExe "ImPlay.exe"

[Setup]
AppId={{5B0E6C1A-3F6D-4C8E-9B2A-7D41E8F0A9C3}
AppName={#AppName}
AppVersion={#AppVersion}
AppVerName={#AppName} {#AppVersion}
AppPublisher=Skonester
AppPublisherURL=https://github.com/skonester/ImPlay-slint
AppSupportURL=https://github.com/skonester/ImPlay-slint/issues
AppUpdatesURL=https://github.com/skonester/ImPlay-slint/releases
AppCopyright=Copyright (c) 2022-2025 tsl0922, 2026 Skonester
DefaultDirName={autopf}\{#AppName}
DefaultGroupName={#AppName}
DisableProgramGroupPage=yes
; Lets the user pick "install for me only" (no admin) or "install for all users"
PrivilegesRequired=admin
PrivilegesRequiredOverridesAllowed=dialog
ArchitecturesAllowed=x64compatible
ArchitecturesInstallIn64BitMode=x64compatible
LicenseFile={#SourcePath}\..\..\LICENSE.txt
SetupIconFile={#SourcePath}\app.ico
UninstallDisplayIcon={app}\{#AppExe}
UninstallDisplayName={#AppName} Media Player
OutputDir={#OutputDir}
OutputBaseFilename={#OutputName}
Compression=lzma2/max
SolidCompression=yes
WizardStyle=modern
ChangesAssociations=yes
CloseApplications=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "fileassoc"; Description: "Add ImPlay to ""Open with"" and Default apps for media files"; GroupDescription: "File types:"

[Files]
Source: "{#SourceDir}\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{autoprograms}\{#AppName}"; Filename: "{app}\{#AppExe}"
Name: "{autodesktop}\{#AppName}"; Filename: "{app}\{#AppExe}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#AppExe}"; Description: "{cm:LaunchProgram,{#AppName}}"; Flags: nowait postinstall skipifsilent

; ---------------------------------------------------------------------------------------------
; File type registration. This only adds ImPlay as a choice in "Open with" and Default apps;
; it never takes over an extension's current default program.
; ---------------------------------------------------------------------------------------------

#define FileTypeCount 0
#dim FileExts[200]
#dim FileDescs[200]
#define AddFileType(str Ext, str Desc) \
  FileExts[FileTypeCount] = Ext, FileDescs[FileTypeCount] = Desc, FileTypeCount = FileTypeCount + 1

#expr AddFileType("ac3", "AC-3 Audio")
#expr AddFileType("a52", "AC-3 Audio")
#expr AddFileType("eac3", "E-AC-3 Audio")
#expr AddFileType("mlp", "MLP Audio")
#expr AddFileType("dts", "DTS Audio")
#expr AddFileType("dts-hd", "DTS-HD Audio")
#expr AddFileType("dtshd", "DTS-HD Audio")
#expr AddFileType("true-hd", "TrueHD Audio")
#expr AddFileType("thd", "TrueHD Audio")
#expr AddFileType("truehd", "TrueHD Audio")
#expr AddFileType("thd+ac3", "TrueHD Audio")
#expr AddFileType("tta", "True Audio")
#expr AddFileType("pcm", "PCM Audio")
#expr AddFileType("wav", "Wave Audio")
#expr AddFileType("aiff", "AIFF Audio")
#expr AddFileType("aif", "AIFF Audio")
#expr AddFileType("aifc", "AIFF Audio")
#expr AddFileType("amr", "AMR Audio")
#expr AddFileType("awb", "AMR-WB Audio")
#expr AddFileType("au", "AU Audio")
#expr AddFileType("snd", "AU Audio")
#expr AddFileType("lpcm", "Linear PCM Audio")
#expr AddFileType("yuv", "Raw YUV Video")
#expr AddFileType("y4m", "YUV4MPEG2 Video")
#expr AddFileType("ape", "Monkey's Audio")
#expr AddFileType("wv", "WavPack Audio")
#expr AddFileType("shn", "Shorten Audio")
#expr AddFileType("m2ts", "MPEG-2 Transport Stream")
#expr AddFileType("m2t", "MPEG-2 Transport Stream")
#expr AddFileType("mts", "MPEG-2 Transport Stream")
#expr AddFileType("mtv", "MPEG-2 Transport Stream")
#expr AddFileType("ts", "MPEG-2 Transport Stream")
#expr AddFileType("tsv", "MPEG-2 Transport Stream")
#expr AddFileType("tsa", "MPEG-2 Transport Stream")
#expr AddFileType("tts", "MPEG-2 Transport Stream")
#expr AddFileType("trp", "MPEG-2 Transport Stream")
#expr AddFileType("adts", "ADTS Audio")
#expr AddFileType("adt", "ADTS Audio")
#expr AddFileType("mpa", "MPEG Audio")
#expr AddFileType("m1a", "MPEG Audio")
#expr AddFileType("m2a", "MPEG Audio")
#expr AddFileType("mp1", "MPEG Audio")
#expr AddFileType("mp2", "MPEG Audio")
#expr AddFileType("mp3", "MP3 Audio")
#expr AddFileType("mpeg", "MPEG Video")
#expr AddFileType("mpg", "MPEG Video")
#expr AddFileType("mpe", "MPEG Video")
#expr AddFileType("mpeg2", "MPEG Video")
#expr AddFileType("m1v", "MPEG Video")
#expr AddFileType("m2v", "MPEG Video")
#expr AddFileType("mp2v", "MPEG Video")
#expr AddFileType("mpv", "MPEG Video")
#expr AddFileType("mpv2", "MPEG Video")
#expr AddFileType("mod", "MPEG Video")
#expr AddFileType("tod", "MPEG Video")
#expr AddFileType("vob", "Video Object")
#expr AddFileType("vro", "Video Object")
#expr AddFileType("evob", "Enhanced VOB")
#expr AddFileType("evo", "Enhanced VOB")
#expr AddFileType("mpeg4", "MPEG-4 Video")
#expr AddFileType("m4v", "MPEG-4 Video")
#expr AddFileType("mp4", "MPEG-4 Video")
#expr AddFileType("mp4v", "MPEG-4 Video")
#expr AddFileType("mpg4", "MPEG-4 Video")
#expr AddFileType("m4a", "MPEG-4 Audio")
#expr AddFileType("aac", "Raw AAC Audio")
#expr AddFileType("h264", "Raw H264/AVC Video")
#expr AddFileType("avc", "Raw H264/AVC Video")
#expr AddFileType("x264", "Raw H264/AVC Video")
#expr AddFileType("264", "Raw H264/AVC Video")
#expr AddFileType("hevc", "Raw H265/HEVC Video")
#expr AddFileType("h265", "Raw H265/HEVC Video")
#expr AddFileType("x265", "Raw H265/HEVC Video")
#expr AddFileType("265", "Raw H265/HEVC Video")
#expr AddFileType("flac", "FLAC Audio")
#expr AddFileType("oga", "Ogg Audio")
#expr AddFileType("ogg", "Ogg Audio")
#expr AddFileType("opus", "Opus Audio")
#expr AddFileType("spx", "Speex Audio")
#expr AddFileType("ogv", "Ogg Video")
#expr AddFileType("ogm", "Ogg Video")
#expr AddFileType("ogx", "Ogg Video")
#expr AddFileType("mkv", "Matroska Video")
#expr AddFileType("mk3d", "Matroska 3D Video")
#expr AddFileType("mka", "Matroska Audio")
#expr AddFileType("webm", "WebM Video")
#expr AddFileType("weba", "WebM Audio")
#expr AddFileType("avi", "Video Clip")
#expr AddFileType("vfw", "Video Clip")
#expr AddFileType("divx", "DivX Video")
#expr AddFileType("3iv", "3ivx Video")
#expr AddFileType("xvid", "XVID Video")
#expr AddFileType("nut", "NUT Video")
#expr AddFileType("flic", "FLIC Video")
#expr AddFileType("fli", "FLIC Video")
#expr AddFileType("flc", "FLIC Video")
#expr AddFileType("nsv", "Nullsoft Streaming Video")
#expr AddFileType("gxf", "General Exchange Format")
#expr AddFileType("mxf", "Material Exchange Format")
#expr AddFileType("wma", "Windows Media Audio")
#expr AddFileType("wm", "Windows Media Video")
#expr AddFileType("wmv", "Windows Media Video")
#expr AddFileType("asf", "Windows Media Video")
#expr AddFileType("dvr-ms", "Microsoft Recorded TV Show")
#expr AddFileType("dvr", "Microsoft Recorded TV Show")
#expr AddFileType("wtv", "Windows Recorded TV Show")
#expr AddFileType("dv", "DV Video")
#expr AddFileType("hdv", "DV Video")
#expr AddFileType("flv", "Flash Video")
#expr AddFileType("f4v", "Flash Video")
#expr AddFileType("f4a", "Flash Audio")
#expr AddFileType("qt", "QuickTime Video")
#expr AddFileType("mov", "QuickTime Video")
#expr AddFileType("hdmov", "QuickTime HD Video")
#expr AddFileType("rm", "Real Media Video")
#expr AddFileType("rmvb", "Real Media Video")
#expr AddFileType("ra", "Real Media Audio")
#expr AddFileType("ram", "Real Media Audio")
#expr AddFileType("3ga", "3GPP Audio")
#expr AddFileType("3ga2", "3GPP Audio")
#expr AddFileType("3gpp", "3GPP Video")
#expr AddFileType("3gp", "3GPP Video")
#expr AddFileType("3gp2", "3GPP Video")
#expr AddFileType("3g2", "3GPP Video")
#expr AddFileType("ay", "AY Audio")
#expr AddFileType("gbs", "GBS Audio")
#expr AddFileType("gym", "GYM Audio")
#expr AddFileType("hes", "HES Audio")
#expr AddFileType("kss", "KSS Audio")
#expr AddFileType("nsf", "NSF Audio")
#expr AddFileType("nsfe", "NSFE Audio")
#expr AddFileType("sap", "SAP Audio")
#expr AddFileType("spc", "SPC Audio")
#expr AddFileType("vgm", "VGM Audio")
#expr AddFileType("vgz", "VGZ Audio")
#expr AddFileType("m3u", "M3U Playlist")
#expr AddFileType("m3u8", "M3U Playlist")
#expr AddFileType("pls", "PLS Playlist")
#expr AddFileType("cue", "CUE Sheet")

#define Capabilities "Software\Clients\Media\ImPlay\Capabilities"

[Registry]
Root: HKA; Subkey: "Software\Classes\Applications\{#AppExe}"; ValueType: string; ValueName: "FriendlyAppName"; ValueData: "ImPlay Media Player"; Flags: uninsdeletekey; Tasks: fileassoc
Root: HKA; Subkey: "Software\Classes\Applications\{#AppExe}\shell\open\command"; ValueType: string; ValueData: """{app}\{#AppExe}"" ""%1"""; Tasks: fileassoc
Root: HKA; Subkey: "Software\Microsoft\Windows\CurrentVersion\App Paths\{#AppExe}"; ValueType: string; ValueData: "{app}\{#AppExe}"; Flags: uninsdeletekey
Root: HKA; Subkey: "Software\Microsoft\Windows\CurrentVersion\App Paths\{#AppExe}"; ValueType: string; ValueName: "Path"; ValueData: "{app}"
Root: HKA; Subkey: "Software\Clients\Media\ImPlay"; Flags: uninsdeletekey; Tasks: fileassoc
Root: HKA; Subkey: "{#Capabilities}"; ValueType: string; ValueName: "ApplicationName"; ValueData: "ImPlay"; Tasks: fileassoc
Root: HKA; Subkey: "{#Capabilities}"; ValueType: string; ValueName: "ApplicationDescription"; ValueData: "ImPlay Media Player"; Tasks: fileassoc
Root: HKA; Subkey: "Software\RegisteredApplications"; ValueType: string; ValueName: "ImPlay"; ValueData: "{#Capabilities}"; Flags: uninsdeletevalue; Tasks: fileassoc

#sub RegisterFileType
  #define Ext FileExts[I]
  #define ProgId "ImPlay." + Ext
Root: HKA; Subkey: "Software\Classes\{#ProgId}"; ValueType: string; ValueData: "{#FileDescs[I]}"; Flags: uninsdeletekey; Tasks: fileassoc
Root: HKA; Subkey: "Software\Classes\{#ProgId}\DefaultIcon"; ValueType: string; ValueData: "{app}\{#AppExe},0"; Tasks: fileassoc
Root: HKA; Subkey: "Software\Classes\{#ProgId}\shell\open\command"; ValueType: string; ValueData: """{app}\{#AppExe}"" ""%1"""; Tasks: fileassoc
Root: HKA; Subkey: "Software\Classes\.{#Ext}\OpenWithProgids"; ValueType: string; ValueName: "{#ProgId}"; ValueData: ""; Flags: uninsdeletevalue; Tasks: fileassoc
Root: HKA; Subkey: "Software\Classes\Applications\{#AppExe}\SupportedTypes"; ValueType: string; ValueName: ".{#Ext}"; ValueData: ""; Tasks: fileassoc
Root: HKA; Subkey: "{#Capabilities}\FileAssociations"; ValueType: string; ValueName: ".{#Ext}"; ValueData: "{#ProgId}"; Tasks: fileassoc
#endsub

#define I
#for {I = 0; I < FileTypeCount; I++} RegisterFileType
