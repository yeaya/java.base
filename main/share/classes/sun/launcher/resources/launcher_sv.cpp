#include <sun/launcher/resources/launcher_sv.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_sv::*)()>(&launcher_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_sv_MethodInfo_
};

$Object* allocate$launcher_sv($Class* clazz) {
	return $of($alloc(launcher_sv));
}

void launcher_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\nF\u00f6ljande alternativ \u00e4r Mac OS X-specifika:\n    -XstartOnFirstThread\n                      k\u00f6r main()-metoden p\u00e5 den f\u00f6rsta (AppKit)-tr\u00e5den\n    -Xdock:name=<applikationsnamn>\n                      \u00e5sidos\u00e4tt det standardapplikationsnamn som visas i dockan\n    -Xdock:icon=<s\u00f6kv\u00e4g till ikonfil>\n                      \u00e5sidos\u00e4tt den standardikon som visas i dockan\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           avaktivera bakgrundskompilering\n    -Xbootclasspath/a:<kataloger och zip-/jar-filer avgr\u00e4nsade med {0}>\n                      l\u00e4gg till sist i klass\u00f6kv\u00e4gen f\u00f6r programladdning\n    -Xcheck:jni       utf\u00f6r fler kontroller f\u00f6r JNI-funktioner\n    -Xcomp            tvingar kompilering av metoder vid det f\u00f6rsta anropet\n    -Xdebug           tillhandah\u00e5lls f\u00f6r bak\u00e5tkompatibilitet\n    -Xdiag            visa fler diagnostiska meddelanden\n    -Xfuture          aktivera str\u00e4ngaste kontroller, f\u00f6rv\u00e4ntad framtida standard\n    -Xint             endast exekvering i tolkat l\u00e4ge\n    -Xinternalversion\n                      visar mer detaljerad information om JVM-version \u00e4n\n                      med alternativet -version\n    -Xloggc:<fil>     logga GC-status till en fil med tidsst\u00e4mplar\n    -Xmixed           exekvering i blandat l\u00e4ge (standard)\n    -Xmn<storlek>     anger ursprunglig och st\u00f6rsta storlek (i byte) f\u00f6r h\u00f6gen f\u00f6r\n                      generationen med nyare objekt (h\u00f6gen f\u00f6r tilldelning av ny"
				"a objekt)\n    -Xms<storlek>     ange ursprunglig storlek f\u00f6r Java-heap-utrymmet\n    -Xmx<storlek>     ange st\u00f6rsta storlek f\u00f6r Java-heap-utrymmet\n    -Xnoclassgc       avaktivera klasskr\u00e4pinsamling\n    -Xrs              minska operativsystemssignalanv\u00e4ndning f\u00f6r Java/VM (se dokumentationen)\n    -Xshare:auto      anv\u00e4nd delade klassdata om m\u00f6jligt (standard)\n    -Xshare:off       f\u00f6rs\u00f6k inte anv\u00e4nda delade klassdata\n    -Xshare:on        kr\u00e4v anv\u00e4ndning av delade klassdata, utf\u00f6r inte i annat fall.\n    -XshowSettings    visa alla inst\u00e4llningar och forts\u00e4tt\n    -XshowSettings:all\n                      visa alla inst\u00e4llningar och forts\u00e4tt\n    -XshowSettings:locale\n                      visa alla spr\u00e5kkonventionsrelaterade inst\u00e4llningar och forts\u00e4tt\n    -XshowSettings:properties\n                      visa alla egenskapsinst\u00e4llningar och forts\u00e4tt\n    -XshowSettings:vm visa alla vm-relaterade inst\u00e4llningar och forts\u00e4tt\n    -Xss<storlek>     ange storlek f\u00f6r java-tr\u00e5dsstacken\n    -Xverify          anger l\u00e4ge f\u00f6r byt"
				"ekodverifieraren\n    --add-reads <modul>=<m\u00e5lmodul>(,<m\u00e5lmodul>)*\n                      uppdaterar <modul> f\u00f6r att l\u00e4sa <m\u00e5lmodul>, oavsett\n                      moduldeklarationen. \n                      <m\u00e5lmodul> kan vara ALL-UNNAMED f\u00f6r att l\u00e4sa alla\n                      ej namngivna moduler.\n    --add-exports <modul>/<paket>=<m\u00e5lmodul>(,<m\u00e5lmodul>)*\n                      uppdaterar <modul> f\u00f6r att exportera <paket> till <m\u00e5lmodul>,\n                      oavsett moduldeklarationen.\n                      <m\u00e5lmodul> kan vara ALL-UNNAMED f\u00f6r att exportera till alla\n                      ej namngivna moduler.\n    --add-opens <modul>/<paket>=<m\u00e5lmodul>(,<m\u00e5lmodul>)*\n                      uppdaterar <modul> f\u00f6r att \u00f6ppna <paket> till\n                      <m\u00e5lmodul>, oavsett moduldeklarationen.\n    --illegal-access=<v\u00e4rde>\n                      till\u00e5t eller neka \u00e5tkomst till medlemmar av typer i namngivna\n                      moduler av kod i ej namngivna moduler.\n                      <v\u00e4rde> \u00e4r \"deny\", \"per"
				"mit\", \"warn\" eller \"debug\"\n                      Det h\u00e4r alternativet tas bort i en kommande utg\u00e5va.\n    --limit-modules <modulnamn>[,<modulnamn>...]\n                      begr\u00e4nsar universumet med observerbara moduler\n    --patch-module <modul>=<fil>({0}<fil>)*\n                      \u00e5sidos\u00e4tt eller ut\u00f6ka en modul med klasser och resurser\n                      i JAR-filer eller kataloger.\n    --disable-@files  avaktivera ytterligare argumentfilsut\u00f6kning\n\nDe h\u00e4r extraalternativen kan \u00e4ndras utan f\u00f6reg\u00e5ende meddelande.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of("Fel: kunde inte hitta eller ladda huvudklassen {0}\nOrsakades av: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Fel: Huvudmetoden \u00e4r inte {0} i klassen {1}, definiera huvudmetoden som:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Fel: Huvudmetoden m\u00e5ste returnera ett v\u00e4rde av typen void i klassen {0}, \ndefiniera huvudmetoden som:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Fel: Huvudmetoden finns inte i klassen {0}, definiera huvudmetoden som:\n   public static void main(String[] args)\neller s\u00e5 m\u00e5ste en JavaFX-applikationsklass ut\u00f6ka {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Fel: JavaFX-exekveringskomponenter saknas, och de kr\u00e4vs f\u00f6r att kunna k\u00f6ra den h\u00e4r applikationen"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"Fel: LinkageError intr\u00e4ffade vid laddning av huvudklassen {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of("Fel: Kan inte initiera huvudklassen {0}\nOrsakades av: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of("initieringsfel"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"Fel: Ett ov\u00e4ntat fel intr\u00e4ffade n\u00e4r filen {0} skulle \u00f6ppnas"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of("manifest finns inte i {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of("inget huvudmanifestattribut i {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("fel vid laddning av java-agenten i {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"Fel: JavaFX launchApplication-metoden har fel signatur, den \nm\u00e5ste ha deklarerats som statisk och returnera ett v\u00e4rde av typen void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"modulen {0} har inget MainClass-attribut, anv\u00e4nd -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of("Fel: kunde inte hitta eller ladda huvudklassen {0} i modulen {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of("Fel: Kan inte ladda huvudklassen {0} i modulen {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of("{0} hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of("Fel: Kan inte initiera huvudklassen {0} i modulen {1}\nOrsakades av: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <klass\u00f6kv\u00e4g till kataloger och zip-/jar-filer>\n    -classpath <klass\u00f6kv\u00e4g till kataloger och zip-/jar-filer>\n    --class-path <klass\u00f6kv\u00e4g till kataloger och zip-/jar-filer>\n                  En {0}-avgr\u00e4nsad lista \u00f6ver kataloger, JAR-arkiv\n                  och ZIP-arkiv att s\u00f6ka efter klassfiler i.\n    -p <moduls\u00f6kv\u00e4g>\n    --module-path <moduls\u00f6kv\u00e4g>...\n                  En {0}-avgr\u00e4nsad lista \u00f6ver kataloger, d\u00e4r varje katalog\n                  \u00e4r en katalog \u00f6ver moduler.\n    --upgrade-module-path <moduls\u00f6kv\u00e4g>...\n                  En {0}-avgr\u00e4nsad lista \u00f6ver kataloger, d\u00e4r varje katalog\n                  \u00e4r en katalog \u00f6ver moduler som ers\u00e4tter uppgraderingsbara\n                  moduler i exekveringsavbilden\n    --add-modules <modulnamn>[,<modulnamn>...]\n                  rotmoduler att l\u00f6sa f\u00f6rutom den ursprungliga modulen.\n                  <modulnamn> kan \u00e4ven vara ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  visa observerbara moduler och avslut"
				"a\n    -d <modulnamn>\n    --describe-module <modulnamn>\n                  beskriv en modul och avsluta\n    --dry-run     skapa VM och ladda huvudklassen men k\u00f6r inte huvudmetoden.\n                  Alternativet --dry-run kan vara anv\u00e4ndbart f\u00f6r att validera\n                  kommandoradsalternativ, som modulsystemkonfigurationen.\n    --validate-modules\n                  validera alla moduler och avsluta\n                  Alternativet --validate-modules kan vara anv\u00e4ndbart f\u00f6r att hitta\n                  konflikter och andra fel i modulerna p\u00e5 moduls\u00f6kv\u00e4gen.\n    -D<namn>=<v\u00e4rde>\n                  ange en systemegenskap\n    -verbose:[class|module|gc|jni]\n                  aktivera utf\u00f6rliga utdata\n    -version      skriv ut produktversion till felstr\u00f6mmen och avsluta\n    --version     skriv ut produktversion till utdatastr\u00f6mmen och avsluta\n    -showversion  skriv ut produktversion till felstr\u00f6mmen och forts\u00e4tt\n    --show-version\n                  skriv ut produktversion till utdatastr\u00f6mmen och forts\u00e4tt\n    --sho"
				"w-module-resolution\n                  visa modull\u00f6sningsutdata vid start\n    -? -h -help\n                  skriv ut det h\u00e4r hj\u00e4lpmeddelandet till felstr\u00f6mmen\n    --help        skriv ut det h\u00e4r hj\u00e4lpmeddelandet till utdatastr\u00f6mmen\n    -X            skriv ut hj\u00e4lp f\u00f6r extraalternativ till felstr\u00f6mmen\n    --help-extra  skriv ut hj\u00e4lp f\u00f6r extraalternativ till utdatastr\u00f6mmen\n    -ea[:<paketnamn>...|:<klassnamn>]\n    -enableassertions[:<paketnamn>...|:<klassnamn>]\n                  aktivera verifieringar med den angivna detaljgraden\n    -da[:<paketnamn>...|:<klassnamn>]\n    -disableassertions[:<paketnamn>...|:<klassnamn>]\n                  avaktivera verifieringar med den angivna detaljgraden\n    -esa | -enablesystemassertions\n                  aktivera systemverifieringar\n    -dsa | -disablesystemassertions\n                  avaktivera systemverifieringar\n    -agentlib:<biblioteksnamn>[=<alternativ>]\n                  ladda det ursprungliga agentbiblioteket <biblioteksnamn>, t.ex. -agentlib:jdwp\n                  "
				"se \u00e4ven -agentlib:jdwp=help\n    -agentpath:<s\u00f6kv\u00e4gsnamn>[=<alternativ>]\n                  ladda det ursprungliga agentbiblioteket med fullst\u00e4ndigt s\u00f6kv\u00e4gsnamn\n    -javaagent:<jar-s\u00f6kv\u00e4g>[=<alternativ>]\n                  ladda Java-programmeringsspr\u00e5ksagenten, se java.lang.instrument\n    -splash:<bilds\u00f6kv\u00e4g>\n                  visa v\u00e4lkomstsk\u00e4rmen med den angivna bilden\n                  HiDPI-skal\u00e4ndrade bilder st\u00f6ds automatiskt och anv\u00e4nds om de \u00e4r\n        tillg\u00e4ngliga. Filnamnet p\u00e5 den oskal\u00e4ndrade bilden, t.ex. image.ext,\n                  ska alltid \u00f6verf\u00f6ras som argument till alternativet -splash.\n                  Den l\u00e4mpligaste skal\u00e4ndrade bilden v\u00e4ljs\n                  automatiskt.\n                  Mer information finns i dokumentationen f\u00f6r API:t SplashScreen\n    @argument filer\n                  en eller flera argumentfiler som inneh\u00e5ller alternativ\n    -disable-@files\n                  f\u00f6rhindra ytterligare ut\u00f6kning av argumentfiler\nOm du vill ange ett argument f\u00f6r ett l\u00e5ngt alternativ kan du anv\u00e4"
				"nda --<namn>=<v\u00e4rde> eller\n--<namn> <v\u00e4rde>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Syntax: {0} [options] <huvudklass>[args...]\n           (f\u00f6r att k\u00f6ra en klass)\n   eller  {0} [options] -jar <jar-fil> [args...]\n           (f\u00f6r att k\u00f6ra en jar-fil)\n   eller  {0} [options] -m <modul>[/<huvudklass>] [args...]\n       {0} [options] --module <modul>[/<huvudklass>] [args...]\n           (f\u00f6r att k\u00f6ra huvudklassen i en modul)\n\n Argument som kommer efter huvudklassen, -jar <jar-fil>, -m eller --module\n <modul>/<huvudklass> \u00f6verf\u00f6rs som argument till huvudklassen.\n\n med alternativen:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  \u00e4r en synonym f\u00f6r \"{1}\" VM  [inaktuell]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  f\u00f6r att v\u00e4lja \"{1}\" VM\n"_s)
		})
	});
}

launcher_sv::launcher_sv() {
}

$Class* launcher_sv::load$($String* name, bool initialize) {
	$loadClass(launcher_sv, name, initialize, &_launcher_sv_ClassInfo_, allocate$launcher_sv);
	return class$;
}

$Class* launcher_sv::class$ = nullptr;

		} // resources
	} // launcher
} // sun