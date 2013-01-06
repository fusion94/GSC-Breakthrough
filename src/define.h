// prefs
#define preferences	[NSUserDefaults standardUserDefaults]
#define GSC_APPNAME	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleName"]
#define GSC_VERSION	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
#define EXPIRYDATE      dateWithYear:2006 month:12 day:31 hour:23 minute:59 second:59
#define EXPIRY_DATE     @"This version will expire 1st january 2007."
#define VERSIONDICTKEY	@"gscbrk"
#define EMPTYWNDWTITLE  @"GSC Breakthrough"
#define MAXMAPLISTSIZE	50
#define MAXBANLISTSIZE  999
#define MAXAUTOGENPLYR  12

// files and directories
#define APPICONIMAGE    @"gscbrk_app.icns"
#define BASEDIRNAMES	@"/main,/mainta"
#define CONFIGFILENAME 	@"/main/gscbrk.cfg"
#define GAMEPARAMETER1 	@"+exec gscbrk.cfg"
#define GAMEPARAMETER2 	@"+set dedicated 2"
#define GAMEPARAMETER3  @"+set net_port %d"
#define GAMEPARAMETER4 	@""
#define GAMEPARAMETER5 	@""
#define GAMEAPPNAME	@"/mohaab_server"
#define DEF_GAMEAPPPATH	@"/Applications/Medal of Honor"
#define UNZIP_PATH	@"/usr/bin/unzip"
#define SAVE_EXTENSION  @".gscbrk"
#define OPEN_EXTENSION  @"gscbrk"
#define DEFAULT_FNAME   @"Untitled Server.gscbrk"
#define AUTOSTARTNAME   @"autostart.gscbrk"

// server runtime settings
#define RUNPOLLWAITTIME	30
#define HEARTBEATTIME   28800
#define MAXCONSOLESIZE	16384
#define STATUSLINELEN   72

// help URL's
#define HELP_SAVE_FILES_URL	@"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=119&Itemid=25"
#define HELP_QUIT_FIRST_URL	@"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=120&Itemid=25"
#define PAYPAL_DONATE_URL	@"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=12&Itemid=32"
#define ONLINE_MANUAL_URL	@"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=78&Itemid=25"
#define HELP_EXECUTABLE_URL	@"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=126&Itemid=25"
#define HELP_ADDIP_URL          @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=131&Itemid=25"
#define HELP_OLDFILEVER_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=132&Itemid=25"
#define HELP_CANTOPENFILE_URL   @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=133&Itemid=25"
#define HELP_EXECFIX_FAIL_URL   @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=130&Itemid=25"
#define HELP_RCONPASS_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=134&Itemid=25"
#define HELP_FILEDAMAGED_URL    @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=78&Itemid=25"
#define HELP_DOWNLOAD_EXE_URL   @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=129&Itemid=25"

// internal URL's
#define VERSION_CHECK_URL	@"http://www.p-edge.nl/apps/versioncheck.xml"
#define DOWNLOAD_NEW_URL	@"http://www.p-edge.nl/gsc/index.php?option=com_remository&Itemid=38&func=selectcat&cat=1"
#define GSC_SERV_SIGNON         @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signon&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"
#define GSC_SERV_SIGNOFF        @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signoff&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"