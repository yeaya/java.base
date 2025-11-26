#include <sun/launcher/resources/launcher_es.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_es::*)()>(&launcher_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_es_MethodInfo_
};

$Object* allocate$launcher_es($Class* clazz) {
	return $of($alloc(launcher_es));
}

void launcher_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\nLas siguientes opciones son espec\u00edficas para Mac OS X:\n    -XstartOnFirstThread\n                      ejecutar el m\u00e9todo main() del primer thread (AppKit)\n    -Xdock:name=<application name>\n                      sustituir al nombre por defecto de la aplicaci\u00f3n que se muestra en el Dock\n    -Xdock:icon=<ruta de acceso a archivo de icono>\n                      sustituir al icono por defecto que se muestra en el Dock\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"-Xbatch           desactivar compilaci\u00f3n de fondo\n    -Xbootclasspath/a:<directorios y archivos zip/jar separados por {0}>\n                      agregar al final de la ruta de clase de inicializaci\u00f3n de datos\n    -Xcheck:jni       realizar comprobaciones adicionales para las funciones de JNI\n    -Xcomp            fuerza la compilaci\u00f3n de m\u00e9todos en la primera llamada\n    -Xdebug           se proporciona para ofrecer compatibilidad con versiones anteriores\n    -Xdiag            mostrar mensajes de diagn\u00f3stico adicionales\n    -Xfuture          activar las comprobaciones m\u00e1s estrictas, anticip\u00e1ndose al futuro valor por defecto\n    -Xint             solo ejecuci\u00f3n de modo interpretado\n    -Xinternalversionn\n                      muestra informaci\u00f3n de la versi\u00f3n de JVM m\u00e1s detallada que la\n                      opci\u00f3n -version\n    -Xloggc:    registrar el estado de GC en un archivo con registros de hora\n    -Xmixed           ejecuci\u00f3n de modo mixto (por defecto)\n    -Xmn<tama\u00f1o>        define el tama\u00f1o inicial y "
				"m\u00e1ximo (en bytes) de la pila\n                      para la generaci\u00f3n m\u00e1s joven (incubadora)\n    -Xms<size>        define el tama\u00f1o inicial de la pila de Java\n    -Xmx<size>        define el tama\u00f1o m\u00e1ximo de la pila de Java\n    -Xnoclassgc       desactivar la recolecci\u00f3n de basura de clases\n    -Xrs              reducir el uso de se\u00f1ales de sistema operativo por parte de Java/VM (consulte la documentaci\u00f3n)\n    -Xshare:auto      usar datos de clase compartidos si es posible (valor por defecto)\n    -Xshare:off       no intentar usar datos de clase compartidos\n    -Xshare:on        es obligatorio el uso de datos de clase compartidos, de lo contrario se producir\u00e1 un fallo.\n    -XshowSettings    mostrar toda la configuraci\u00f3n y continuar\n    -XshowSettings:all\n                      mostrar todos los valores y continuar\n    -XshowSettings:locale\n                      mostrar todos los valores relacionados con la configuraci\u00f3n regional y continuar\n    -XshowSettings:properties\n                      mostrar todos los "
				"valores de propiedad y continuar\n    -XshowSettings:vm mostrar todos los valores relacionados con vm y continuar\n    -Xss<tama\u00f1o>        definir tama\u00f1o de la pila del thread de Java\n    -Xverify          define el modo del verificador de c\u00f3digo de bytes\n    --add-reads <m\u00f3dulo>=<m\u00f3dulo-destino>(,<m\u00f3dulo-destino>)*\n                      actualiza <m\u00f3dulo> para leer <m\u00f3dulo-destino>, independientemente\n                      de la declaraci\u00f3n del m\u00f3dulo. \n                      <m\u00f3dulo-destino> puede ser ALL-UNNAMED para leer todos los\n                      m\u00f3dulos sin nombre.\n    --add-exports <m\u00f3dulo>/<paquete>=<m\u00f3dulo-destino>(,<m\u00f3dulo-destino>)*\n                      actualiza <m\u00f3dulo> para exportar <paquete> en <m\u00f3dulo-destino>,\n                      independientemente de la declaraci\u00f3n del m\u00f3dulo.\n                      <m\u00f3dulo-destino> puede ser ALL-UNNAMED para exportar a todos los\n                      m\u00f3dulos sin nombre.\n    --add-opens <m\u00f3dulo>/<paquete>=<m\u00f3dulo-destino>(,<m\u00f3dulo-destino>)*\n            "
				"          actualiza <m\u00f3dulo> para abrir <paquete> en\n                      <m\u00f3dulo-destino>, independientemente de la declaraci\u00f3n del m\u00f3dulo.\n    --illegal-access=<valor>\n                      permitir or denegar el acceso a miembros de tipos en m\u00f3dulos con nombre.\n                      por c\u00f3digo en m\u00f3dulos sin nombre.\n                      <value> es \"denegar\", \"permitir\", \"advertir\" o \"depurar\"\n                      Esta opci\u00f3n se eliminar\u00e1 en la pr\u00f3xima versi\u00f3n.\n    --limit-modules <nombre m\u00f3dulo>[,<nombre m\u00f3dulo>...]\n       limitar el universo de m\u00f3dulos observables\n    --patch-module <m\u00f3dulo>=({0})*\n\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0\u00a0 aumentar o anular un m\u00f3dulo con clases y recursos\n                      en directorios o archivos JAR\n\nEstas opciones est\u00e1n sujetas a cambio sin previo aviso."_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of("Error: no se ha encontrado o cargado la clase principal {0}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Error: el m\u00e9todo principal no es {0} en la clase {1}, defina el m\u00e9todo principal del siguiente modo:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Error: el m\u00e9todo principal debe devolver un valor del tipo void en la clase {0}, \ndefina el m\u00e9todo principal del siguiente modo:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Error: no se ha encontrado el m\u00e9todo principal en la clase {0}, defina el m\u00e9todo principal del siguiente modo:\\n   public static void main(String[] args)\\nde lo contrario, se deber\u00e1 ampliar una clase de aplicaci\u00f3n JavaFX {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Error: faltan los componentes de JavaFX runtime y son necesarios para ejecutar esta aplicaci\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Error: Se ha producido un error de enlace al cargar la clase principal {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of("Error: no se ha podido inicializar la clase principal {0}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"error de inicializaci\u00f3n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of("Error: se ha producido un error inesperado al intentar abrir el archivo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of("no se ha encontrado el manifiesto en {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"no hay ning\u00fan atributo de manifiesto principal en {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("error al cargar el agente de java en {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"Error: el m\u00e9todo launchApplication de JavaFX tiene una firma que no es correcta.\\nSe debe declarar est\u00e1tico y devolver un valor de tipo nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"el m\u00f3dulo {0} no tiene ning\u00fan atributo MainClass, utilice -m <m\u00f3dulo>/<clase-principal>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"Error: no se ha encontrado o cargado la clase principal {0} en el m\u00f3dulo {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"Error: no se ha podido cargar la clase principal {0} del m\u00f3dulo {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of("No se ha encontrado {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"Error: no se ha podido inicializar la clase principal {0} del m\u00f3dulo {1}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <ruta de b\u00fasqueda de clase de directorios y archivos zip/jar>\n    -classpath <ruta de b\u00fasqueda de clase de directorios y archivos zip/jar>\n    --class-path <ruta de b\u00fasqueda de clase de directorios y archivos zip/jar>\n                  Una lista separada por el car\u00e1cter {0}, archivos JAR\n                  y archivos ZIP para buscar archivos de clases.\n    -p <ruta m\u00f3dulo>\n    --module-path <ruta m\u00f3dulo>...\n                  Una lista de directorios separada por el car\u00e1cter {0}, cada directorio\n                  es un directorio de m\u00f3dulos.\n    --upgrade-module-path <ruta m\u00f3dulo>...\n                  Una lista de directorios separada por el car\u00e1cter {0}, cada directorio\n                  es un directorio de m\u00f3dulos que sustituye a\n                  los m\u00f3dulos actualizables en la imagen de tiempo de ejecuci\u00f3n\n    --add-modules <nombre m\u00f3dulo>[,<nombre m\u00f3dulo>...]\n                  m\u00f3dulos de ra\u00edz que resolver, adem\u00e1s del m\u00f3dulo inicial.\n                  <nombre m\u00f3dulo> tambi\u00e9n puede ser ALL-DEFAULT, A"
				"LL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  mostrar m\u00f3dulos observables y salir\n    -d <nombre de m\u00f3dulo>\n    --describe-module <nombre m\u00f3dulo>\n                  describir un m\u00f3dulo y salir\n    --dry-run     crear VM y cargar la clase principal pero sin ejecutar el m\u00e9todo principal.\n                  La opci\u00f3n --dry-run puede ser \u00fatil para validar\n                  las opciones de l\u00ednea de comandos, como la configuraci\u00f3n del sistema de m\u00f3dulos.\n    --validate-modules\n                  validar todos los m\u00f3dulos y salir\n                  La opci\u00f3n --validate-modules puede ser \u00fatil para encontrar\n                  conflictos y otros errores con m\u00f3dulos en la ruta de m\u00f3dulos.\n    -D<nombre>=<valor>\n                  definir una propiedad de sistema\n    -verbose:[class|module|gc|jni]\n                  activar la salida en modo verbose\n    -version      imprimir versi\u00f3n de producto en el flujo de errores y salir\n    --version     imprimir versi\u00f3n de producto en el flujo de sal"
				"ida y salir\n    -showversion  imprimir versi\u00f3n de producto en el flujo de errores y continuar\n    --show-version\n                  -showversion  imprimir versi\u00f3n de producto en el flujo de salida y continuar\n    --show-module-resolution\n                  mostrar la salida de resoluci\u00f3n de m\u00f3dulo durante el inicio\n    -? -h -help\n                  imprimir este mensaje de ayuda en el flujo de errores\n    --help        imprimir este mensaje de ayuda en el flujo de salida\n    -X            imprimir ayuda de opciones adicionales en el flujo de errores\n    --help-extra  imprimir ayuda de opciones adicionales en el flujo de salida\n    -ea[:<nombre paquete>...|:<nombre clase>]\n    -enableassertions[:<nombre paquete>...|:<nombre clase>]\n                  activar afirmaciones con una granularidad especificada\n    -da[:<nombre paquete>...|:<nombre clase>]\n    -disableassertions[:<nombre paquete>...|:<nombre clase>]\n                  desactivar afirmaciones con una granularidad especificada\n    -esa | -enablesystemasser"
				"tions\n                  activar afirmaciones del sistema\n    -dsa | -disablesystemassertions\n                  desactivar afirmaciones del sistema\n    -agentlib:<nombre bib>[=<opciones>]\n                  cargar biblioteca de agente nativo <nombre bib>, por ejemplo, -agentlib:jdwp\n                  ver tambi\u00e9n -agentlib:jdwp=help\n    -agentpath:<nombre ruta>[=<opciones>]\n                  cargar biblioteca de agente nativo por nombre completo de ruta\n    -javaagent:<ruta jar>[=<opciones>]\n                  cargar agente de lenguaje de programaci\u00f3n Java, ver java.lang.instrument\n    -splash:<ruta imagen>\n       mostrar pantalla de presentaci\u00f3n con imagen especificada\n                  Las im\u00e1genes a escala HiDPI est\u00e1n soportadas y se usan autom\u00e1ticamente\n                  si est\u00e1n disponibles. El nombre de archivo de la imagen sin escala, por ejemplo, image.ext,\n                  siempre debe transmitirse como el argumento para la opci\u00f3n -splash.\n                  La imagen a escala m\u00e1s adecuada que se haya pr"
				"oporcionado se escoger\u00e1\n                  autom\u00e1ticamente.\n                  Consulte la documentaci\u00f3n de la API de la pantalla de presentaci\u00f3n para obtener m\u00e1s informaci\u00f3n.\n    @argument files\n                  uno o m\u00e1s archivos de argumentos que contienen opciones\n    -disable-@files\n                  evitar una mayor expansi\u00f3n del archivo de argumentos\nPara especificar un argumento para una opci\u00f3n larga, puede usar --<nombre>=<valor> o\n--<nombre> <valor>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Sintaxis: {0} [opciones] <clase principal> [argumentos...]\n           (para ejecutar una clase)\n   o  {0} [opciones] -jar <archivo jar> [argumentos...]\n           (para ejecutar un archivo jar)\n   o  {0} [opciones] -m <m\u00f3dulo>[/<clase principal>] [argumentos...]\n       {0} [opciones] --module <m\u00f3dulo>[/<clase principal>] [argumentos...]\n           (para ejecutar la clase principal en un m\u00f3dulo)\n\n Argumentos que siguen la clase principal, -jar <archivo jar>, -m o --module\n <m\u00f3dulo>/<clase principal> se transfieren como argumentos a una clase principal.\n\n donde las opciones incluyen:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  es un sin\u00f3nimo de la VM \"{1}\" [en desuso]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of("    {0}\t  para seleccionar la VM \"{1}\"\n"_s)
		})
	});
}

launcher_es::launcher_es() {
}

$Class* launcher_es::load$($String* name, bool initialize) {
	$loadClass(launcher_es, name, initialize, &_launcher_es_ClassInfo_, allocate$launcher_es);
	return class$;
}

$Class* launcher_es::class$ = nullptr;

		} // resources
	} // launcher
} // sun