#include <sun/launcher/resources/launcher_it.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(launcher_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _launcher_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_it_MethodInfo_
};

$Object* allocate$launcher_it($Class* clazz) {
	return $of($alloc(launcher_it));
}

void launcher_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of("\nLe opzioni riportate di seguito sono specifiche del sistema operativo Mac OS X:\n    -XstartOnFirstThread\n                      Esegue il metodo main() sul primo thread (AppKit).\n    -Xdock:name=<nome applicazione>\n                      Sostituisce il nome applicazione predefinito visualizzato nel dock\n    -Xdock:icon=<percorso file icona>\n                      Sostituisce l\'icona predefinita visualizzata nel dock\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           Disabilita la compilazione in background.\n    -Xbootclasspath/a:<directory e file zip/jar separati da {0}>\n                      Aggiunge alla fine del classpath di bootstrap.\n   -Xcheck:jni       Esegue controlli aggiuntivi per le funzioni JNI.\n    -Xcomp            Forza la compilazione dei metodi al primo richiamo.\n    -Xdebug           Fornito per la compatibilità con le versioni precedenti.\n    -Xdiag            Mostra ulteriori messaggi diagnostici.\n    -Xfuture          Abilita i controlli più limitativi anticipando le impostazioni predefinite future.\n    -Xint             Esecuzione solo in modalità convertita.\n    -Xinternalversion\n                      Visualizza informazioni più dettagliate sulla versione JVM rispetto\n                      all\'\'opzione -version.\n    -Xloggc:<file>    Registra lo stato GC in un file con indicatori orari.\n    -Xmixed           Esecuzione in modalità mista (impostazione predefinita).\n    -Xmn<size>        Imposta le dimensioni iniziale e massima"
				" (in byte) dell\'\'heap\n                      per la young generation (nursery).\n    -Xms<size>        Imposta la dimensione heap Java iniziale.\n    -Xmx<size>        Imposta la dimensione heap Java massima.\n    -Xnoclassgc       Disabilta la garbage collection della classe.\n    -Xrs              Riduce l\'\'uso di segnali del sistema operativo da Java/VM (vedere la documentazione).\n    -Xshare:auto      Utilizza i dati di classe condivisi se possibile (impostazione predefinita).\n     -Xshare:off       Non tenta di utilizzare i dati di classe condivisi.\n    -Xshare:on        Richiede l\'\'uso dei dati di classe condivisi, altrimenti l\'\'esecuzione non riesce.\n    -XshowSettings    Mostra tutte le impostazioni e continua.\n    -XshowSettings:all\n                      Mostra tutte le impostazioni e continua.\n    -XshowSettings:locale\n                      Mostra tutte le impostazioni correlate alle impostazioni nazionali e continua.\n    -XshowSettings:properties\n                      Mostra tutte le impostazioni delle "
				"proprietà e continua.\n    -XshowSettings:vm Mostra tutte le impostazioni correlate alla VM e continua.\n    -Xss<size>        Imposta la dimensione dello stack di thread Java.\n     -Xverify          Imposta la modalità del verificatore bytecode.\n    --add-reads:<module>=<target-module>(,<target-module>)*\n                      Aggiorna <module> per leggere <target-module>, indipendentemente\n                      dalla dichiarazione del modulo. \n                      <target-module> può essere ALL-UNNAMED per leggere tutti i\n                      moduli senza nome.\n   -add-exports:<module>/<package>=<target-module>(,<target-module>)*\n                      Aggiorna <module> per esportare <package> in <target-module>,\n                      indipendentemente dalla dichiarazione del modulo.\n                      <target-module> può essere ALL-UNNAMED per esportare tutti i\n                      moduli senza nome.\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      Aggiorna <mod"
				"ule> per aprire <package> in\n                      <target-module>, indipendentemente dalla dichiarazione del modulo.\n    --illegal-access=<value>\n                      Consente o nega l\'\'accesso ai membri dei tipi nei moduli denominati\n                      mediante codice nei moduli senza nome.\n                      <value> può essere \"deny\", \"permit\", \"warn\" o \"debug\".\n                      Questa opzione verrà rimossa in una release futura.\n    --limit-modules <module name>[,<module name>...]\n                      Limita l\'\'universo dei moduli osservabili.\n    -patch-module <module>=<file>({0}<file>)*\n                      Sostituisce o migliora un modulo con classi e risorse\n                      in file JAR o directory.\n    --disable-@files  Disabilita l\'\'ulteriore espansione di file argomenti.\n\nQueste opzioni non sono opzioni standard e sono soggette a modifiche senza preavviso.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of("Errore: impossibile trovare o caricare la classe principale {0}\nCausato da: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Errore: il metodo principale non è {0} nella classe {1}. Definire il metodo principale come:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of("Errore: il metodo principale deve restituire un valore di tipo void nella classe {0}. \nDefinire il metodo principale come:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Errore: il metodo principale non è stato trovato nella classe {0}. Definire il metodo principale come:\n   public static void main(String[] args)\naltrimenti una classe applicazione JavaFX deve estendere {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of("Errore: non sono presenti i componenti runtime di JavaFX necessari per eseguire questa applicazione"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Errore: LinkageError durante il caricamento della classe principale {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of("Errore: impossibile inizializzare la classe principale {0}\nCausato da: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of("errore di inizializzazione"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"Errore: si è verificato un errore imprevisto durante il tentativo di aprire il file {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of("manifest non trovato in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of("nessun attributo manifest principale in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("errore durante il caricamento dell\'\'agente java in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of("Errore: il metodo JavaFX launchApplication dispone di una firma errata, \nla firma deve essere dichiarata static e restituire un valore di tipo void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of("il modulo {0} non dispone di un attributo MainClass. Utilizzare -m <module>/<mail-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of("Errore: impossibile trovare o caricare la classe principale {0} nel modulo {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of("Errore: impossibile caricare la classe principale {0} nel modulo {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of("{0} non trovato"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of("Errore: impossibile inizializzare la classe principale {0} nel modulo {1}\nCausato da: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <classpath di ricerca di directory e file zip/jar>\n    -classpath <classpath di ricerca di directory e file zip/jar>\n    -class-path <classpath di ricerca di directory e file zip/jar>\n                  Una lista separata da {0} di directory, archivi JAR\n                  e archivi ZIP in cui cercare i file di classe.\n    -p <percorso modulo>\n    --module-path <percorso modulo>...\n                  Una lista separata da {0} di directory. Ogni directory\n                  è una directory di moduli.\n    --upgrade-module-path <percorso modulo>...\n                  Una lista separata da {0} di directory. Ogni directory\n                  è una directory di moduli che sostituiscono i moduli\n                  aggiornabili nell\'immagine in fase di esecuzione\n    --add-modules <nome modulo>[,<nome modulo>...]\n                  I moduli radice da risolvere in aggiunta al modulo iniziale.\n                  <nome modulo> può essere anche ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules"
				"\n                  Elenca i moduli osservabili ed esce\n    -d <nome modulo>\n    --describe-module <nome modulo>\n                  Descrive un modulo ed esce\n    --dry-run      Crea la VM e carica la classe principale ma non esegue il metodo principale.\n                  L\'opzione --dry-run può essere utile per la convalida delle\n                  opzioni della riga di comando, ad esempio quelle utilizzate per la configurazione del sistema di moduli.\n    --validate-modules\n                  Convalida tutti i moduli ed esce\n                  L\'opzione --validate-modules può essere utile per rilevare\n                  conflitti e altri errori con i moduli nel percorso dei moduli.\n    -D<nome>=<valore>\n                  Imposta una proprietà di sistema\n    -verbose:[class|module|gc|jni]\n                  abilitare output descrittivo\n    -version      Visualizza la versione del prodotto nel flusso di errori ed esce\n    -version      Visualizza la versione del prodotto nel flusso di output ed esce\n    -showversion "
				"     Visualizza la versione del prodotto nel flusso di errori e continua\n    --show-version\n                  Visualizza la versione del prodotto nel flusso di output e continua\n    --show-module-resolution\n                  Mostra l\'output della risoluzione del modulo durante l\'avvio\n    -? -h -help\n                  Visualizza questo messaggio della Guida nel flusso di errori\n    --help        Visualizza questo messaggio della Guida nel flusso di output\n    -X            Visualizza la Guida relativa alle opzioni non standard nel flusso di errori\n    --help-extra  Visualizza la Guida relativa alle opzioni non standard nel flusso di output\n    -ea[:<nome package>...|:<nome classe>]\n    -enableassertions[:<nome package>...|:<nome classe>]\n                  Abilita le asserzioni con la granularità specificata\n    -da[:<nome package>...|:<nome classe>]\n    -disableassertions[:<nome package>...|:<nome classe>]\n                  Disabilita le asserzioni con la granularità specificata\n    -esa | -enablesystemassert"
				"ions\n                  Abilita le asserzioni di sistema\n    -dsa | -disablesystemassertions\n                  Disabilita le asserzioni di sistema\n    -agentlib:<nome libreria>[=<opzioni>]\n                  Carica la libreria agenti nativa <nome libreria>, ad esempio -agentlib:jdwp\n                  Vedere anche -agentlib:jdwp=help\n    -agentpath:<nome percorso>[=<opzioni>]\n                  Carica la libreria agenti nativa con il percorso completo\n    -javaagent:<percorso jar>[=<opzioni>]\n                  Carica l\'agente del linguaggio di programmazione Java, vedere java.lang.instrument\n    -splash:<percorso immagine>\n                  Mostra la schermata iniziale con l\'immagine specificata\n                  Le immagini ridimensionate HiDPI sono supportate e utilizzate automaticamente\n                  se disponibili. I nomi file delle immagini non ridimensionate, ad esempio image.ext,\n                  devono essere sempre passati come argomenti all\'opzione -splash.\n                  Verrà scelta automatica"
				"mente l\'immagine ridimensionata più appropriata\n                  fornita.\n                  Per ulteriori informazioni, vedere la documentazione relativa all\'API SplashScreen\n    @file argomenti\n                  Uno o più file argomenti contenenti opzioni\n    -disable-@files\n                  Impedisce l\'ulteriore espansione di file argomenti\nPer specificare un argomento per un\'opzione lunga, è possibile usare --<nome>=<valore> oppure\n--<nome> <valore>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of("Uso: {0} [opzioni] <classe principale> [argomenti...]\n           (per eseguire una classe)\n   oppure  {0} [opzioni] -jar <file jar> [argomenti...]\n           (per eseguire un file jar)\n   oppure  {0} [opzioni] -m <modulo>[/<classe principale>] [argomenti...]\n       {0} [opzioni] --module <modulo>[/<classe principale>] [argomenti...]\n           (per eseguire la classe principale in un modulo)\n\n Gli argomenti specificati dopo la classe principale, dopo -jar <file jar>, -m o --module\n <modulo>/<classe principale> vengono passati come argomenti alla classe principale.\n\n dove opzioni include:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  è un sinonimo per la VM \"{1}\" [non valido]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of("    {0}\t  per selezionare la VM \"{1}\"\n"_s)
		})
	});
}

launcher_it::launcher_it() {
}

$Class* launcher_it::load$($String* name, bool initialize) {
	$loadClass(launcher_it, name, initialize, &_launcher_it_ClassInfo_, allocate$launcher_it);
	return class$;
}

$Class* launcher_it::class$ = nullptr;

		} // resources
	} // launcher
} // sun