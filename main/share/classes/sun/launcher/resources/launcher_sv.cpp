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
	{"<init>", "()V", nullptr, $PUBLIC, $method(launcher_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher_sv, getContents, $ObjectArray2*)},
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
			$of(u"\nFöljande alternativ är Mac OS X-specifika:\n    -XstartOnFirstThread\n                      kör main()-metoden på den första (AppKit)-tråden\n    -Xdock:name=<applikationsnamn>\n                      åsidosätt det standardapplikationsnamn som visas i dockan\n    -Xdock:icon=<sökväg till ikonfil>\n                      åsidosätt den standardikon som visas i dockan\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           avaktivera bakgrundskompilering\n    -Xbootclasspath/a:<kataloger och zip-/jar-filer avgränsade med {0}>\n                      lägg till sist i klassökvägen för programladdning\n    -Xcheck:jni       utför fler kontroller för JNI-funktioner\n    -Xcomp            tvingar kompilering av metoder vid det första anropet\n    -Xdebug           tillhandahålls för bakåtkompatibilitet\n    -Xdiag            visa fler diagnostiska meddelanden\n    -Xfuture          aktivera strängaste kontroller, förväntad framtida standard\n    -Xint             endast exekvering i tolkat läge\n    -Xinternalversion\n                      visar mer detaljerad information om JVM-version än\n                      med alternativet -version\n    -Xloggc:<fil>     logga GC-status till en fil med tidsstämplar\n    -Xmixed           exekvering i blandat läge (standard)\n    -Xmn<storlek>     anger ursprunglig och största storlek (i byte) för högen för\n                      generationen med nyare objekt (högen för tilldelning av ny"
				"a objekt)\n    -Xms<storlek>     ange ursprunglig storlek för Java-heap-utrymmet\n    -Xmx<storlek>     ange största storlek för Java-heap-utrymmet\n    -Xnoclassgc       avaktivera klasskräpinsamling\n    -Xrs              minska operativsystemssignalanvändning för Java/VM (se dokumentationen)\n    -Xshare:auto      använd delade klassdata om möjligt (standard)\n    -Xshare:off       försök inte använda delade klassdata\n    -Xshare:on        kräv användning av delade klassdata, utför inte i annat fall.\n    -XshowSettings    visa alla inställningar och fortsätt\n    -XshowSettings:all\n                      visa alla inställningar och fortsätt\n    -XshowSettings:locale\n                      visa alla språkkonventionsrelaterade inställningar och fortsätt\n    -XshowSettings:properties\n                      visa alla egenskapsinställningar och fortsätt\n    -XshowSettings:vm visa alla vm-relaterade inställningar och fortsätt\n    -Xss<storlek>     ange storlek för java-trådsstacken\n    -Xverify          anger läge för byt"
				"ekodverifieraren\n    --add-reads <modul>=<målmodul>(,<målmodul>)*\n                      uppdaterar <modul> för att läsa <målmodul>, oavsett\n                      moduldeklarationen. \n                      <målmodul> kan vara ALL-UNNAMED för att läsa alla\n                      ej namngivna moduler.\n    --add-exports <modul>/<paket>=<målmodul>(,<målmodul>)*\n                      uppdaterar <modul> för att exportera <paket> till <målmodul>,\n                      oavsett moduldeklarationen.\n                      <målmodul> kan vara ALL-UNNAMED för att exportera till alla\n                      ej namngivna moduler.\n    --add-opens <modul>/<paket>=<målmodul>(,<målmodul>)*\n                      uppdaterar <modul> för att öppna <paket> till\n                      <målmodul>, oavsett moduldeklarationen.\n    --illegal-access=<värde>\n                      tillåt eller neka åtkomst till medlemmar av typer i namngivna\n                      moduler av kod i ej namngivna moduler.\n                      <värde> är \"deny\", \"per"
				"mit\", \"warn\" eller \"debug\"\n                      Det här alternativet tas bort i en kommande utgåva.\n    --limit-modules <modulnamn>[,<modulnamn>...]\n                      begränsar universumet med observerbara moduler\n    --patch-module <modul>=<fil>({0}<fil>)*\n                      åsidosätt eller utöka en modul med klasser och resurser\n                      i JAR-filer eller kataloger.\n    --disable-@files  avaktivera ytterligare argumentfilsutökning\n\nDe här extraalternativen kan ändras utan föregående meddelande.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of("Fel: kunde inte hitta eller ladda huvudklassen {0}\nOrsakades av: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Fel: Huvudmetoden är inte {0} i klassen {1}, definiera huvudmetoden som:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Fel: Huvudmetoden måste returnera ett värde av typen void i klassen {0}, \ndefiniera huvudmetoden som:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Fel: Huvudmetoden finns inte i klassen {0}, definiera huvudmetoden som:\n   public static void main(String[] args)\neller så måste en JavaFX-applikationsklass utöka {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Fel: JavaFX-exekveringskomponenter saknas, och de krävs för att kunna köra den här applikationen"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"Fel: LinkageError inträffade vid laddning av huvudklassen {0}\n\t{1}"_s)
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
			$of(u"Fel: Ett oväntat fel inträffade när filen {0} skulle öppnas"_s)
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
			$of(u"Fel: JavaFX launchApplication-metoden har fel signatur, den \nmåste ha deklarerats som statisk och returnera ett värde av typen void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"modulen {0} har inget MainClass-attribut, använd -m <module>/<main-class>"_s)
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
			$of(u"    -cp <klassökväg till kataloger och zip-/jar-filer>\n    -classpath <klassökväg till kataloger och zip-/jar-filer>\n    --class-path <klassökväg till kataloger och zip-/jar-filer>\n                  En {0}-avgränsad lista över kataloger, JAR-arkiv\n                  och ZIP-arkiv att söka efter klassfiler i.\n    -p <modulsökväg>\n    --module-path <modulsökväg>...\n                  En {0}-avgränsad lista över kataloger, där varje katalog\n                  är en katalog över moduler.\n    --upgrade-module-path <modulsökväg>...\n                  En {0}-avgränsad lista över kataloger, där varje katalog\n                  är en katalog över moduler som ersätter uppgraderingsbara\n                  moduler i exekveringsavbilden\n    --add-modules <modulnamn>[,<modulnamn>...]\n                  rotmoduler att lösa förutom den ursprungliga modulen.\n                  <modulnamn> kan även vara ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  visa observerbara moduler och avslut"
				"a\n    -d <modulnamn>\n    --describe-module <modulnamn>\n                  beskriv en modul och avsluta\n    --dry-run     skapa VM och ladda huvudklassen men kör inte huvudmetoden.\n                  Alternativet --dry-run kan vara användbart för att validera\n                  kommandoradsalternativ, som modulsystemkonfigurationen.\n    --validate-modules\n                  validera alla moduler och avsluta\n                  Alternativet --validate-modules kan vara användbart för att hitta\n                  konflikter och andra fel i modulerna på modulsökvägen.\n    -D<namn>=<värde>\n                  ange en systemegenskap\n    -verbose:[class|module|gc|jni]\n                  aktivera utförliga utdata\n    -version      skriv ut produktversion till felströmmen och avsluta\n    --version     skriv ut produktversion till utdataströmmen och avsluta\n    -showversion  skriv ut produktversion till felströmmen och fortsätt\n    --show-version\n                  skriv ut produktversion till utdataströmmen och fortsätt\n    --sho"
				"w-module-resolution\n                  visa modullösningsutdata vid start\n    -? -h -help\n                  skriv ut det här hjälpmeddelandet till felströmmen\n    --help        skriv ut det här hjälpmeddelandet till utdataströmmen\n    -X            skriv ut hjälp för extraalternativ till felströmmen\n    --help-extra  skriv ut hjälp för extraalternativ till utdataströmmen\n    -ea[:<paketnamn>...|:<klassnamn>]\n    -enableassertions[:<paketnamn>...|:<klassnamn>]\n                  aktivera verifieringar med den angivna detaljgraden\n    -da[:<paketnamn>...|:<klassnamn>]\n    -disableassertions[:<paketnamn>...|:<klassnamn>]\n                  avaktivera verifieringar med den angivna detaljgraden\n    -esa | -enablesystemassertions\n                  aktivera systemverifieringar\n    -dsa | -disablesystemassertions\n                  avaktivera systemverifieringar\n    -agentlib:<biblioteksnamn>[=<alternativ>]\n                  ladda det ursprungliga agentbiblioteket <biblioteksnamn>, t.ex. -agentlib:jdwp\n                  "
				"se även -agentlib:jdwp=help\n    -agentpath:<sökvägsnamn>[=<alternativ>]\n                  ladda det ursprungliga agentbiblioteket med fullständigt sökvägsnamn\n    -javaagent:<jar-sökväg>[=<alternativ>]\n                  ladda Java-programmeringsspråksagenten, se java.lang.instrument\n    -splash:<bildsökväg>\n                  visa välkomstskärmen med den angivna bilden\n                  HiDPI-skaländrade bilder stöds automatiskt och används om de är\n        tillgängliga. Filnamnet på den oskaländrade bilden, t.ex. image.ext,\n                  ska alltid överföras som argument till alternativet -splash.\n                  Den lämpligaste skaländrade bilden väljs\n                  automatiskt.\n                  Mer information finns i dokumentationen för API:t SplashScreen\n    @argument filer\n                  en eller flera argumentfiler som innehåller alternativ\n    -disable-@files\n                  förhindra ytterligare utökning av argumentfiler\nOm du vill ange ett argument för ett långt alternativ kan du anvä"
				"nda --<namn>=<värde> eller\n--<namn> <värde>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Syntax: {0} [options] <huvudklass>[args...]\n           (för att köra en klass)\n   eller  {0} [options] -jar <jar-fil> [args...]\n           (för att köra en jar-fil)\n   eller  {0} [options] -m <modul>[/<huvudklass>] [args...]\n       {0} [options] --module <modul>[/<huvudklass>] [args...]\n           (för att köra huvudklassen i en modul)\n\n Argument som kommer efter huvudklassen, -jar <jar-fil>, -m eller --module\n <modul>/<huvudklass> överförs som argument till huvudklassen.\n\n med alternativen:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  är en synonym för \"{1}\" VM  [inaktuell]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  för att välja \"{1}\" VM\n"_s)
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