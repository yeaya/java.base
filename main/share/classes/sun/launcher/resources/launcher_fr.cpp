#include <sun/launcher/resources/launcher_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_fr::*)()>(&launcher_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_fr_MethodInfo_
};

$Object* allocate$launcher_fr($Class* clazz) {
	return $of($alloc(launcher_fr));
}

void launcher_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\nLes options suivantes sont propres \u00e0 Mac OS X :\n    -XstartOnFirstThread\n                      ex\u00e9cute la m\u00e9thode main() sur le premier thread (AppKit)\n    -Xdock:name=<nom d\'application>\n                      remplace le nom d\'application par d\u00e9faut affich\u00e9 dans l\'ancrage\n    -Xdock:icon=<chemin vers le fichier d\'ic\u00f4ne>\n                      remplace l\'ic\u00f4ne par d\u00e9faut affich\u00e9e dans l\'ancrage\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           d\u00e9sactivation de la compilation en arri\u00e8re-plan\n    -Xbootclasspath/a:<r\u00e9pertoires et fichiers ZIP/JAR s\u00e9par\u00e9s par des {0}>\n                      ajout \u00e0 la fin du chemin de classe bootstrap\n    -Xcheck:jni       ex\u00e9cution de contr\u00f4les suppl\u00e9mentaires pour les fonctions JNI\n    -Xcomp            force la compilation de m\u00e9thodes au premier appel\n    -Xdebug           fourni pour la compatibilit\u00e9 amont\n    -Xdiag            affichage de messages de diagnostic suppl\u00e9mentaires\n    -Xfuture          activation des contr\u00f4les les plus stricts en vue d\'\'anticiper la future valeur par d\u00e9faut\n    -Xint             ex\u00e9cution en mode interpr\u00e9t\u00e9 uniquement\n    -Xinternalversion\n                      affiche des informations de version JVM plus d\u00e9taill\u00e9es que\n                      l\'\'option -version\n    -Xloggc:<file>    journalisation du statut de l\'\'op\u00e9ration de ramasse-miette dans un fichier avec horodatages\n    -Xmixed           ex\u00e9cution en mode mixte (valeur par d\u00e9faut)\n    -Xmn<size>        d\u00e9"
				"finit les tailles initiale et maximale (en octets) de la portion de m\u00e9moire\n                      pour la jeune g\u00e9n\u00e9ration (nursery)\n    -Xms<size>        d\u00e9finition de la taille initiale des portions de m\u00e9moire Java\n    -Xmx<size>        d\u00e9finition de la taille maximale des portions de m\u00e9moire Java\n    -Xnoclassgc       d\u00e9sactivation de l\'\'op\u00e9ration de ramasse-miette de la classe\n    -Xrs               r\u00e9duction de l\'\'utilisation des signaux OS par Java/la machine virtuelle (voir documentation)\n    -Xshare:auto      utilisation des donn\u00e9es de classe partag\u00e9es si possible (valeur par d\u00e9faut)\n    -Xshare:off       aucune tentative d\'\'utilisation des donn\u00e9es de classe partag\u00e9es\n    -Xshare:on        utilisation des donn\u00e9es de classe partag\u00e9es obligatoire ou \u00e9chec de l\'\'op\u00e9ration.\n    -XshowSettings    affichage de tous les param\u00e8tres et poursuite de l\'\'op\u00e9ration\n    -XshowSettings:all\n                      affichage de tous les param\u00e8tres et poursuite de l\'\'op\u00e9ration\n    -XshowSettings:locale\n                  "
				"     affichage de tous les param\u00e8tres d\'\'environnement local et poursuite de l\'\'op\u00e9ration\n    -XshowSettings:properties\n                       affichage de tous les param\u00e8tres de propri\u00e9t\u00e9 et poursuite de l\'\'op\u00e9ration\n    -XshowSettings:vm affichage de tous les param\u00e8tres de machine virtuelle et poursuite de l\'\'op\u00e9ration\n    -Xss<size>        d\u00e9finition de la taille de pile de thread Java\n    -Xverify          d\u00e9finit le mode du v\u00e9rificateur de code ex\u00e9cutable\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      met \u00e0 jour <module> pour lire <target-module>, sans tenir compte\n                      de la d\u00e9claration de module. \n                      <target-module> peut \u00eatre ALL-UNNAMED pour lire tous les\n                      modules sans nom.\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      met \u00e0 jour <module> pour exporter <package> vers <target-module>,\n                      sans tenir compte de la d\u00e9claration de module.\n            "
				"          <target-module> peut \u00eatre ALL-UNNAMED pour effectuer un export vers tous\n                      les modules sans nom.\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      met \u00e0 jour <module> pour ouvrir <package> vers\n                      <target-module>, sans tenir compte de la d\u00e9claration de module.\n    --illegal-access=<value>\n                      autorise ou refuse l\'\'acc\u00e8s \u00e0 des membres de types dans des modules nomm\u00e9s\n                      par code dans des modules sans nom.\n                      <value> est l\'\'une des valeurs suivantes : \"deny\", \"permit\", \"warn\" ou \"debug\"\n                      Cette option sera enlev\u00e9e dans une version ult\u00e9rieure.\n    --limit-modules <module name>[,<module name>...]\n                      limite l\'\'univers des modules observables\n    --patch-module <module>=<file>({0}<file>)*\n                      remplace ou augmente un module avec des classes et des ressources\n                      dans des fichiers JAR ou des r\u00e9perto"
				"ires.\n    --disable-@files  d\u00e9sactive d\'\'autres d\u00e9veloppements de fichier d\'\'argument\n\nCes options suppl\u00e9mentaires peuvent \u00eatre modifi\u00e9es sans pr\u00e9avis.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"Erreur : impossible de trouver ou de charger la classe principale {0}\nCaus\u00e9 par : {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Erreur : la m\u00e9thode principale n\'\'est pas {0} dans la classe {1}, d\u00e9finissez la m\u00e9thode principale comme suit :\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Erreur : la m\u00e9thode principale doit renvoyer une valeur de type void dans la classe {0}, \nd\u00e9finissez la m\u00e9thode principale comme suit :\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Erreur : la m\u00e9thode principale est introuvable dans la classe {0}, d\u00e9finissez la m\u00e9thode principale comme suit :\n   public static void main(String[] args)\nou une classe d\'\'applications JavaFX doit \u00e9tendre {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Erreur : des composants d\'ex\u00e9cution JavaFX obligatoires pour ex\u00e9cuter cette application sont manquants."_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Erreur : LinkageError lors du chargement de la classe principale {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"Erreur : impossible d\'\'initialiser la classe principale {0}\nCaus\u00e9 par : {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of("erreur d\'initialisation"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of("Erreur : une erreur inattendue est survenue lors de la tentative d\'\'ouverture du fichier {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of("fichier manifeste introuvable dans {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of("aucun attribut manifest principal dans {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("erreur lors du chargement de l\'\'agent Java dans {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"Erreur : la signature de la m\u00e9thode launchApplication JavaFX est incorrecte, la\nm\u00e9thode doit \u00eatre d\u00e9clar\u00e9e statique et renvoyer une valeur de type void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of("le module {0} n\'\'a pas d\'\'attribut MainClass, utilisez -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of("Erreur : impossible de trouver ou charger la classe principale {0} dans le module {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of("Erreur : impossible de charger la classe principale {0} dans le module {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of("{0} introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"Erreur : impossible d\'\'initialiser la classe principale {0} dans le module {1}\nCaus\u00e9 par : {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <chemin de recherche de classe de r\u00e9pertoires et de fichiers ZIP/JAR>\n    -classpath <chemin de recherche de classe de r\u00e9pertoires et de fichiers ZIP/JAR>\n    --class-path <chemin de recherche de classe de r\u00e9pertoires et de fichiers ZIP/JAR>\n                  Liste, avec s\u00e9parateur {0}, de r\u00e9pertoires, d\'\'archives JAR\n                  et d\'archives ZIP pour rechercher des fichiers de classe.\n    -p <chemin de modules>\n    --module-path <chemin de modules>...\n                  Liste, avec s\u00e9parateur {0}, de r\u00e9pertoires, chaque r\u00e9pertoire\n                  est un r\u00e9pertoire de modules.\n    --upgrade-module-path <chemin de modules>...\n                  Liste, avec s\u00e9parateur {0}, de r\u00e9pertoires, chaque r\u00e9pertoire\n                  est un r\u00e9pertoire de module qui remplace les modules\n                  pouvant \u00eatre mis \u00e0 niveau dans l\'image d\'ex\u00e9cution\n    --add-modules <nom de module>[,<nom de module>...]\n                  modules racine \u00e0 r\u00e9soudre en plus du module initial.\n                  <nom de mod"
				"ule> peut \u00e9galement \u00eatre ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  r\u00e9pertorier les modules observables et quitter\n    -d <nom de module>\n    --describe-module <nom de module>\n                  d\u00e9crire un module et quitter\n    --dry-run     cr\u00e9er une machine virtuelle et charger la classe principale mais ne pas ex\u00e9cuter la m\u00e9thode principale.\n                  L\'option--dry-run peut \u00eatre utile pour la validation des\n                  options de ligne de commande telles que la configuration du syst\u00e8me de modules.\n    --validate-modules\n                  valider tous les modules et quitter\n                  L\'option --validate-modules peut \u00eatre utile pour la recherche de\n                  conflits et d\'autres erreurs avec des modules dans le chemin de modules.\n    -D<name>=<value>\n                  d\u00e9finir une propri\u00e9t\u00e9 syst\u00e8me\n    -verbose:[class|module|gc|jni]\n                  activer la sortie en mode verbose\n    -version      afficher la version de prod"
				"uit dans le flux d\'erreur et quitter\n    --version     afficher la version de produit dans le flux de sortie et quitter\n    -showversion  afficher la version de produit dans le flux d\'erreur et continuer\n    --show-version\n                  afficher la version de produit dans le flux de sortie et continuer\n    --show-module-resolution\n                  afficher la sortie de r\u00e9solution de module lors du d\u00e9marrage\n    -? -h -help\n                  afficher ce message d\'aide dans le flux d\'erreur\n    --help        afficher ce message d\'erreur dans le flux de sortie\n    -X            afficher l\'aide sur des options suppl\u00e9mentaires dans le flux d\'erreur\n    --help-extra  afficher l\'aide sur des options suppl\u00e9mentaires dans le flux de sortie\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  activer des assertions avec la granularit\u00e9 sp\u00e9cifi\u00e9e\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  "
				"d\u00e9sactiver des assertions avec la granularit\u00e9 sp\u00e9cifi\u00e9e\n    -esa | -enablesystemassertions\n                  activer des assertions syst\u00e8me\n    -dsa | -disablesystemassertions\n                  d\u00e9sactiver des assertions syst\u00e8me\n    -agentlib:<libname>[=<options>]\n                  charger la biblioth\u00e8que d\'agent natif <libname>, par ex. -agentlib:jdwp\n                  voir \u00e9galement -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  charger la biblioth\u00e8que d\'agent natif par nom de chemin complet\n    -javaagent:<jarpath>[=<options>]\n                  charger l\'agent de langage de programmation, voir java.lang.instrument\n    -splash:<imagepath>\n                  afficher l\'\u00e9cran d\'accueil avec l\'image indiqu\u00e9e\n                  Les images redimensionn\u00e9es HiDPI sont automatiquement prises en charge et utilis\u00e9es\n                  si elles sont disponibles. Le nom de fichier d\'une image non redimensionn\u00e9e, par ex. image.ext,\n                  doit toujours \u00eatre transmis comme argument \u00e0 l"
				"\'option -splash.\n                  L\'image redimensionn\u00e9e fournie la plus appropri\u00e9e sera automatiquement\n                  s\u00e9lectionn\u00e9e.\n                  Pour plus d\'informations, reportez-vous \u00e0 la documentation relative \u00e0 l\'API SplashScreen\n    fichiers @argument\n                  fichiers d\'arguments contenant des options\n    -disable-@files\n                  emp\u00eacher le d\u00e9veloppement suppl\u00e9mentaire de fichiers d\'arguments\nAfin d\'indiquer un argument pour une option longue, vous pouvez utiliser --<name>=<value> ou\n--<name> <value>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Syntaxe : {0} [options] <mainclass> [args...]\n           (pour ex\u00e9cuter une classe)\n   ou  {0} [options] -jar <jarfile> [args...]\n           (pour ex\u00e9cuter un fichier JAR)\n   ou  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (pour ex\u00e9cuter la classe principale dans un module)\n\n Les arguments suivant la classe principale -jar <jarfile>, -m ou --module\n <module>/<mainclass> sont transmis en tant qu\'\'arguments \u00e0 la classe principale.\n\n o\u00f9 options comprend les \u00e9l\u00e9ments suivants :\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of("    {0}\t  est un synonyme pour la machine virtuelle \"{1}\"  [en phase d\'\'abandon]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  pour s\u00e9lectionner la machine virtuelle \"{1}\"\n"_s)
		})
	});
}

launcher_fr::launcher_fr() {
}

$Class* launcher_fr::load$($String* name, bool initialize) {
	$loadClass(launcher_fr, name, initialize, &_launcher_fr_ClassInfo_, allocate$launcher_fr);
	return class$;
}

$Class* launcher_fr::class$ = nullptr;

		} // resources
	} // launcher
} // sun