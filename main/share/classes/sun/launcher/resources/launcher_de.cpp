#include <sun/launcher/resources/launcher_de.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_de::*)()>(&launcher_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_de_MethodInfo_
};

$Object* allocate$launcher_de($Class* clazz) {
	return $of($alloc(launcher_de));
}

void launcher_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\nDie folgenden Optionen sind f\u00fcr Mac OS X spezifisch:\n    -XstartOnFirstThread\n                      main()-Methode f\u00fcr den ersten (AppKit) Thread ausf\u00fchren\n    -Xdock:name=<application name>\n                      Den im Dock angezeigten Standardanwendungsnamen \u00fcberschreiben\n    -Xdock:icon=<Pfad zu Symboldatei>\n                      Das im Dock angezeigte Standardsymbol \u00fcberschreiben\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           Deaktiviert Hintergrundkompilierung\n    -Xbootclasspath/a:<Durch {0} getrennte Verzeichnisse und ZIP-/JAR-Dateien>\n                      an Ende von Bootstrap Classpath anh\u00e4ngen\n    -Xcheck:jni       F\u00fchrt zus\u00e4tzliche Pr\u00fcfungen f\u00fcr JNI-Funktionen aus\n    -Xcomp            Erzwingt Kompilierung von Methoden beim ersten Aufruf\n    -Xdebug           Wird zur Abw\u00e4rtskompatibilit\u00e4t bereitgestellt\n    -Xdiag            Zeigt zus\u00e4tzliche Diagnosemeldungen an\n    -Xfuture          Aktiviert strengste Pr\u00fcfungen, wird als m\u00f6glicher zuk\u00fcnftiger Standardwert erwartet\n    -Xint              Nur Ausf\u00fchrung im interpretierten Modus\n    -Xinternalversion\n                      Zeigt detailliertere JVM-Versionsinformationen an als die\n                      Option \"-version\"\n    -Xloggc:<Datei>    Protokolliert GC-Status in einer Datei mit Zeitstempeln\n    -Xmixed           Ausf\u00fchrung im gemischten Modus (Standard)\n    -Xmn<Gr\u00f6\u00dfe>        Legt die anf\u00e4ngliche und die maximale Gr\u00f6\u00dfe (in Byte) des Heaps\n    "
				"                  f\u00fcr die Young Generation (Nursery) fest\n    -Xms<Gr\u00f6\u00dfe>        Legt die anf\u00e4ngliche Java-Heap-Gr\u00f6\u00dfe fest\n    -Xmx<Gr\u00f6\u00dfe>        Legt die maximale Java-Heap-Gr\u00f6\u00dfe fest\n    -Xnoclassgc       Deaktiviert die Klassen-Garbage Collection\n    -Xrs              Reduziert die Verwendung von BS-Signalen durch Java/VM (siehe Dokumentation)\n    -Xshare:auto      Verwendet, wenn m\u00f6glich, freigegebene Klassendaten (Standard)\n    -Xshare:off       Versucht nicht freigegebene Klassendaten zu verwenden\n    -Xshare:on        Erfordert die Verwendung von freigegebenen Klassendaten, verl\u00e4uft sonst nicht erfolgreich.\n    -XshowSettings    Zeigt alle Einstellungen an und f\u00e4hrt fort\n    -XshowSettings:all\n                      Zeigt alle Einstellungen an und f\u00e4hrt fort\n    -XshowSettings:locale\n                      Zeigt alle gebietsschemabezogenen Einstellungen an und f\u00e4hrt fort\n    -XshowSettings:properties\n                      Zeigt alle Eigenschaftseinstellungen an und f\u00e4hrt fort\n    -XshowSettings:vm Zeigt "
				"alle VM-bezogenen Einstellungen an und f\u00e4hrt fort\n    -Xss<Gr\u00f6\u00dfe>         Legt Stackgr\u00f6\u00dfe des Java-Threads fest\n    -Xverify           Legt den Modus der Bytecodeverifizierung fest\n    --add-reads <Modul>=<Zielmodul>(,<Zielmodul>)*\n                      Aktualisiert <Modul>, damit <Zielmodul> ungeachtet der\n                      Moduldeklaration gelesen wird.\n                      <Zielmodul> kann ALL-UNNAMED sein, um alle unbenannten\n                      Module zu lesen.\n    --add-exports <Modul>/<Package>=<Zielmodul>(,<Zielmodul>)*\n                      Aktualisiert <Modul>, um <Package> ungeachtet der Moduldeklaration in <Zielmodul>\n                      zu exportieren.\n                      <Zielmodul> kann ALL-UNNAMED sein, um in alle\n                      unbenannten Module zu exportieren.\n    --add-opens <Modul>/<Package>=<Zielmodul>(,<Zielmodul>)*\n                      Aktualisiert <Modul>, um <Package> ungeachtet der Moduldeklaration in\n                      <Zielmodul> zu \u00f6ffnen.\n    --illegal-acce"
				"ss=<Wert>\n                      L\u00e4sst Zugriff f\u00fcr Mitglieder mit den Typen in den benannten Modulen\n                       nach Code in unbenannten Modulen zu oder lehnt ihn ab.\n                      <Wert> ist entweder \"deny\", \"permit\", \"warn\" oder \"debug\"\n                      Diese Option wird in einem zuk\u00fcnftigen Release entfernt.\n    --limit-modules <Modulname>[,<Modulname>...]\n                      Grenzt die Gesamtmenge der beobachtbaren Module ein\n    --patch-module <Modul>=<Datei>({0}<Datei>)*\n                       \u00dcberschreibt oder erweitert ein Modul in JAR-Dateien\n                      oder -Verzeichnissen mit Klassen und Ressourcen.\n    --disable-@files  Deaktiviert die weitere Erweiterung von Argumentdateien\n\nDiese zus\u00e4tzlichen Optionen k\u00f6nnen ohne Vorank\u00fcndigung ge\u00e4ndert werden.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of("Fehler: Hauptklasse {0} konnte nicht gefunden oder geladen werden\nUrsache: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of("Fehler: Hauptmethode ist nicht {0} in Klasse {1}. Definieren Sie die Hauptmethode als:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Fehler: Hauptmethode muss einen Wert vom Typ void in Klasse {0} zur\u00fcckgeben. Definieren Sie \ndie Hauptmethode als:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of("Fehler: Hauptmethode in Klasse {0} nicht gefunden. Definieren Sie die Hauptmethode als:\n   public static void main(String[] args):\noder eine JavaFX-Anwendung muss {1} erweitern"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Fehler: Zum Ausf\u00fchren dieser Anwendung ben\u00f6tigte JavaFX-Runtime-Komponenten fehlen"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Fehler: Beim Laden der Klasse {0} ist ein LinkageError aufgetreten\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of("Fehler: Hauptklasse {0} kann nicht initialisiert werden\nUrsache: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of("Initialisierungsfehler"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"Fehler: Beim Versuch, Datei {0} zu \u00f6ffnen, ist ein unerwarteter Fehler aufgetreten"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of("Manifest in {0} nicht gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of("kein Hauptmanifestattribut, in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("Fehler beim Laden des Java-Agents in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"Fehler: Die JavaFX-Methode launchApplication hat die falsche Signatur, sie\nmuss als statisch deklariert werden und einen Wert vom Typ VOID zur\u00fcckgeben"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of("Modul {0} weist kein MainClass-Attribut auf. Verwenden Sie -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of("Fehler: Hauptklasse {0} konnte in Modul {1} nicht gefunden oder geladen werden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of("Fehler: Hauptklasse {0} kann nicht in Modul {1} geladen werden\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of("{0} nicht gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of("Fehler: Hauptklasse {0} kann nicht in Modul {1} initialisiert werden\nUrsache: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <Klassensuchpfad mit Verzeichnissen und ZIP-/JAR-Dateien>\n    -classpath <Klassensuchpfad mit Verzeichnissen und ZIP-/JAR-Dateien>\n    --class-path <Klassensuchpfad mit Verzeichnissen und ZIP-/JAR-Dateien>\n                  Eine durch {0} getrennte Liste mit Verzeichnissen, JAR-Archiven\n                  und ZIP-Archiven, in denen nach Klassendateien gesucht wird.\n    -p <Modulpfad>\n    --module-path <Modulpfad>...\n                  Eine durch {0} getrennte Liste mit Verzeichnissen, von denen jedes Verzeichnis\n                  ein Verzeichnis mit Modulen ist.\n    --upgrade-module-path <Modulpfad>...\n                  Eine durch {0} getrennte Liste mit Verzeichnissen, von denen jedes Verzeichnis\n                  ein Verzeichnis mit Modulen ist, die upgradef\u00e4hige\n                  Module im Laufzeitimage ersetzen\n    --add-modules <Modulname>[,<Modulname>...]\n                  Root-Module, die zus\u00e4tzlich zum anf\u00e4nglichen Modul aufgel\u00f6st werden sollen.\n                  <Modulname> kann auch wie folgt "
				"lauten: ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  Listet beobachtbare Module auf und beendet den Vorgang\n    -d <Modulname>\n    --describe-module <Modulname>\n                  Beschreibt ein Modul und beendet den Vorgang\n    --dry-run     Erstellt eine VM und l\u00e4dt die Hauptklasse, f\u00fchrt aber nicht die Hauptmethode aus.\n                  Die Option \"--dry-run\" kann n\u00fctzlich sein, um die\n                  Befehlszeilenoptionen, wie die Modulsystemkonfiguration, zu validieren.\n    --validate-modules\n                  Validiert alle Module und beendet den Vorgang\n                  Die Option \"--validate-modules\" kann n\u00fctzlich sein, um\n                  Konflikte und andere Fehler mit Modulen auf dem Modulpfad zu ermitteln.\n    -D<Name>=<Wert>\n                  Legt eine Systemeigenschaft fest\n    -verbose:[class|module|gc|jni]\n                  Ausgabe im Verbose-Modus aktivieren\n    -version      Gibt die Produktversion an den Fehlerstream aus und beendet de"
				"n Vorgang\n    --version      Gibt die Produktversion an den Outputstream aus und beendet den Vorgang\n    -showversion  Gibt die Produktversion an den Fehlerstream aus und setzt den Vorgang fort\n    --show-version\n                  Gibt die Produktversion an den Outputstream aus und setzt den Vorgang fort\n    --show-module-resolution\n                  Zeigt die Modulaufl\u00f6sungsausgabe beim Start an\n    -? -h -help\n                  Gibt diese Hilfemeldung an den Fehlerstream aus\n    --help        Gibt diese Hilfemeldung an den Outputstream aus\n    -X            Gibt Hilfe zu zus\u00e4tzlichen Optionen an den Fehlerstream aus\n    --help-extra  Gibt Hilfe zu zus\u00e4tzlichen Optionen an den Outputstream aus\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  Aktiviert Assertions mit angegebener Granularit\u00e4t\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  Deaktiviert Assertions mit angegebener Granul"
				"arit\u00e4t\n    -esa | -enablesystemassertions\n                  Aktiviert System-Assertions\n    -dsa | -disablesystemassertions\n                  Deaktiviert System-Assertions\n    -agentlib:<libname>[=<options>]\n                  L\u00e4dt die native Agent Library <libname>. Beispiel: -agentlib:jdwp\n                  siehe auch -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  L\u00e4dt die native Agent Library mit dem vollst\u00e4ndigen Pfadnamen\n    -javaagent:<jarpath>[=<options>]\n                  L\u00e4dt den Java-Programmiersprachen-Agent, siehe java.lang.instrument\n    -splash:<imagepath>\n                  Zeigt den Startbildschirm mit einem angegebenen Bild an\n                  Skalierte HiDPI-Bilder werden automatisch unterst\u00fctzt und verwendet,\n                  falls verf\u00fcgbar. Der nicht skalierte Bilddateiname (Beispiel: image.ext)\n                  muss immer als Argument an die Option \"-splash\" \u00fcbergeben werden.\n                  Das am besten geeignete angegebene skalierte Bild wird\n         "
				"         automatisch ausgew\u00e4hlt.\n                  Weitere Informationen finden Sie in der Dokumentation zur SplashScreen-API\n    @argument files\n                  Eine oder mehrere Argumentdateien mit Optionen\n    -disable-@files\n                  Verhindert die weitere Erweiterung von Argumentdateien\nUm ein Argument f\u00fcr eine lange Option anzugeben, k\u00f6nnen Sie --<Name>=<Wert> oder\n--<Name> <Wert> verwenden.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Verwendung: {0} [Optionen] <mainclass> [args...]\n           (zur Ausf\u00fchrung einer Klasse)\n   oder  {0} [Optionen] -jar <jarfile> [args...]\n           (zur Ausf\u00fchrung einer JAR-Datei)\n   oder  {0} [Optionen] -m <module>[/<mainclass>] [args...]\n       {0} [Optionen] --module <module>[/<mainclass>] [args...]\n            (zur Ausf\u00fchrung der Hauptklasse in einem Modul)\n\n Argumente, die auf die Hauptklasse folgen, -jar <jarfile>, -m oder --module\n <module>/<mainclass> werden als Argumente f\u00fcr die Hauptklasse \u00fcbergeben.\n\n wobei \"Optionen\" Folgendes umfasst:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  ist ein Synonym f\u00fcr die \"{1}\" VM  [verworfen]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of("    {0}\t  zur Auswahl der \"{1}\" VM\n"_s)
		})
	});
}

launcher_de::launcher_de() {
}

$Class* launcher_de::load$($String* name, bool initialize) {
	$loadClass(launcher_de, name, initialize, &_launcher_de_ClassInfo_, allocate$launcher_de);
	return class$;
}

$Class* launcher_de::class$ = nullptr;

		} // resources
	} // launcher
} // sun