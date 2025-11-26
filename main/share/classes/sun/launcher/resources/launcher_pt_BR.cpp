#include <sun/launcher/resources/launcher_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_pt_BR::*)()>(&launcher_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_pt_BR_MethodInfo_
};

$Object* allocate$launcher_pt_BR($Class* clazz) {
	return $of($alloc(launcher_pt_BR));
}

void launcher_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\nAs op\u00e7\u00f5es a seguir s\u00e3o espec\u00edficas para o Mac OS X:\n    -XstartOnFirstThread\n                      executa o m\u00e9todo main() no primeiro thread (AppKit)\n    -Xdock:name=<nome do aplicativo>\n                      substitui o nome do aplicativo padr\u00e3o exibido no encaixe\n    -Xdock:icon=<caminho para o arquivo do \u00edcone>\n                      substitui o \u00edcone exibido no encaixe\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           desativa a compila\u00e7\u00e3o em segundo plano\n    -Xbootclasspath/a:<diret\u00f3rios e arquivos zip/jar separados por {0}>\n                      anexa ao final do caminho de classe de bootstrap\n    -Xcheck:jni       executa verifica\u00e7\u00f5es adicionais de fun\u00e7\u00f5es JNI\n    -Xcomp            for\u00e7a a compila\u00e7\u00e3o de m\u00e9todos na primeira chamada\n    -Xdebug           fornecido para compatibilidade reversa\n    -Xdiag            mostra mensagens adicionais de diagn\u00f3stico\n        -Xfuture          ativa verifica\u00e7\u00f5es de n\u00edvel m\u00e1ximo, antecipando padr\u00e3o futuro\n    -Xint             somente execu\u00e7\u00e3o de modo interpretado\n    -Xinternalversion\n                      exibe informa\u00e7\u00f5es mais detalhadas da vers\u00e3o da JVM do que a\n                      op\u00e7\u00e3o -version\n    -Xloggc:<file>    registra o status do GC em um arquivo com timestamps\n    -Xmixed           execu\u00e7\u00e3o em modo misto (padr\u00e3o)\n    -Xmn<size>        define o tamanho inicial e m\u00e1ximo (em bytes) do heap\n                      para a gera\u00e7\u00e3o jovem (infantil)\n    -"
				"Xms<size>        define o tamanho inicial do heap Java\n    -Xmx<size>        define o tamanho m\u00e1ximo do heap Java\n    -Xnoclassgc       desativa a coleta de lixo de classe\n    -Xrs              reduz o uso de sinais do SO por Java/VM (consulte a documenta\u00e7\u00e3o)\n    -Xshare:auto      usa dados de classe compartilhados se poss\u00edvel (padr\u00e3o)\n    -Xshare:off       n\u00e3o tenta usar dados de classe compartilhados\n    -Xshare:on        exige o uso de dados de classe compartilhados; caso contr\u00e1rio, falhar\u00e1.\n    -XshowSettings    mostra todas as defini\u00e7\u00f5es e continua\n    -XshowSettings:all\n                      mostra todas as defini\u00e7\u00f5es e continua\n    -XshowSettings:locale\n                      mostra todas as defini\u00e7\u00f5es relacionadas \u00e0 configura\u00e7\u00e3o regional e continua\n    -XshowSettings:properties\n                      mostra todas as defini\u00e7\u00f5es de propriedade e continua\n    -XshowSettings:vm mostra todas as defini\u00e7\u00f5es relacionadas a vm e continua\n    -Xss<size>        define o tamanho da pilha de thread java\n    -Xverify"
				"          define o modo do verificador de c\u00f3digo de byte\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      atualiza <module> para ler <target-module>, independentemente\n                      da declara\u00e7\u00e3o de m\u00f3dulo. \n                      <target-module> pode ser ALL-UNNAMED para ler todos os m\u00f3dulos\n                      sem nome.\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      atualiza <module> para exportar <package> para <target-module>,\n                      independentemente da declara\u00e7\u00e3o de m\u00f3dulo.\n                      <target-module> pode ser ALL-UNNAMED para exportar para todos os\n                      m\u00f3dulos sem nome.\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      atualiza <module> para abrir <package> para\n                      <target-module>, independentemente da declara\u00e7\u00e3o de m\u00f3dulo.\n    --illegal-access=<value>\n                      permite ou nega acesso aos membros dos "
				"tipos nos m\u00f3dulos com nome\n                     por c\u00f3digo nos m\u00f3dulos sem nomes.\n                      <value> \u00e9 um entre \"deny\", \"permit\", \"warn\" ou \"debug\"\n                       Esta op\u00e7\u00e3o ser\u00e1 removida em uma futura release.\n    --limit-modules <module name>[,<module name>...]\n                      limita o universo de m\u00f3dulos observ\u00e1veis\n--patch-module <module>=<file>({0}<file>)*\n                      substitui ou amplia um m\u00f3dulo com classes e recursos\n                      em arquivos ou diret\u00f3rios JAR.\n   --disable-@files  desativa uma maior expans\u00e3o do arquivo de argumento\n\nEssas op\u00e7\u00f5es extras est\u00e3o sujeitas a altera\u00e7\u00e3o sem aviso.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"Erro: N\u00e3o foi poss\u00edvel localizar nem carregar a classe principal {0}\nCausada por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Erro: o m\u00e9todo main n\u00e3o \u00e9 {0} na classe {1}; defina o m\u00e9todo main como:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Erro: o m\u00e9todo main deve retornar um valor do tipo void na classe {0}; \ndefina o m\u00e9todo main como:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Erro: o m\u00e9todo main n\u00e3o foi encontrado na classe {0}; defina o m\u00e9todo main como:\n   public static void main(String[] args)\nou uma classe de aplicativo JavaFX deve expandir {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Erro: os componentes de runtime do JavaFX n\u00e3o foram encontrados. Eles s\u00e3o obrigat\u00f3rios para executar este aplicativo"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Erro: ocorreu LinkageError ao carregar a classe principal {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"Erro: N\u00e3o \u00e9 poss\u00edvel inicializar a classe principal {0}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"erro de inicializa\u00e7\u00e3o"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of("Erro: ocorreu um erro inesperado ao tentar abrir o arquivo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"manifesto n\u00e3o encontrado em {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of("nenhum atributo de manifesto principal em {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of("erro ao carregar o agente java em {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"Erro: O m\u00e9todo launchApplication do JavaFX tem a assinatura errada. Ele\\ndeve ser declarado como est\u00e1tico e retornar um valor do tipo void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"o m\u00f3dulo {0} n\u00e3o tem um atributo MainClass, use -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"Erro: N\u00e3o foi poss\u00edvel localizar nem carregar a classe principal {0} no m\u00f3dulo {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"Erro: N\u00e3o \u00e9 poss\u00edvel carregar a classe principal {0} no m\u00f3dulo {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"{0} n\u00e3o encontrado."_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"Erro: N\u00e3o \u00e9 poss\u00edvel inicializar a classe principal {0} no m\u00f3dulo {1}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <caminho de pesquisa de classe de diret\u00f3rios e arquivos zip/jar>\n    -classpath <caminho de pesquisa de classe de diret\u00f3rios e arquivos zip/jar>\n    --class-path <caminho de pesquisa de classe de diret\u00f3rios e arquivos zip/jar>\n                  Uma lista separada por {0} de diret\u00f3rios, arquivos compactados JAR\n                  e arquivos compactados ZIP para procurar arquivos de classe.\n    -p <caminho do m\u00f3dulo>\n    --module-path <caminho do m\u00f3dulo>...\n                  Uma lista separada por {0} de diret\u00f3rios, cada um\n                  sendo um diret\u00f3rio de m\u00f3dulos.\n    --upgrade-module-path <caminho do m\u00f3dulo>...\n                  Uma lista separada por {0} de diret\u00f3rios, cada um\n                  sendo um diret\u00f3rio de m\u00f3dulos que substituem m\u00f3dulos\n                  pass\u00edveis de upgrade na imagem de runtime\n    --add-modules <nome do m\u00f3dulo>[,<nome do m\u00f3dulo>...]\n                  m\u00f3dulos-raiz a serem resolvidos al\u00e9m do m\u00f3dulo inicial.\n                  <nome do m\u00f3dulo> tamb\u00e9m pode ser ALL-DEFAUL"
				"T, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  lista os m\u00f3dulos observ\u00e1veis e sai\n    -d <nome do m\u00f3dulo>\n    --describe-module <nome do m\u00f3dulo>\n                  descreve um m\u00f3dulo e sai\n    --dry-run     cria VM e carrega classe principal, mas n\u00e3o executa o m\u00e9todo principal.\n                  A op\u00e7\u00e3o --dry-run pode ser \u00fatil para validar as\n                  op\u00e7\u00f5es de linha de comando como a configura\u00e7\u00e3o do sistema do m\u00f3dulo.\n    --validate-modules\n                  valida todos os m\u00f3dulos e sai\n                  A op\u00e7\u00e3o --validate-modules pode ser \u00fatil para localizar\n                  conflitos e outros erros com m\u00f3dulos no caminho do m\u00f3dulo.\n    -D<name>=<value>\n                  define uma propriedade de sistema\n    -verbose:[class|module|gc|jni]\n                  ativar sa\u00edda verbosa\n    -version      imprime a vers\u00e3o do produto no fluxo de erros e sai\n    -version      imprime a vers\u00e3o do produto no fluxo de sa\u00edda e sai\n    -showversion  imprime a vers\u00e3o do produt"
				"o no fluxo de erros e continua\n    --show-version\n                  imprime a vers\u00e3o do produto no fluxo de sa\u00edda e continua\n    --show-module-resolution\n                  mostra a sa\u00edda da resolu\u00e7\u00e3o do m\u00f3dulo durante a inicializa\u00e7\u00e3o\n    -? -h -help\n                  imprime esta mensagem de ajuda no fluxo de erros\n    --help        imprime esta mensagem de ajuda no fluxo de sa\u00edda\n    -X            imprime ajuda sobre op\u00e7\u00f5es extras no fluxo de erros\n    --help-extra  imprime ajuda sobre op\u00e7\u00f5es extras no fluxo de sa\u00edda\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  ativa asser\u00e7\u00f5es com granularidade especificada\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  desativa asser\u00e7\u00f5es com granularidade especificada\n    -esa | -enablesystemassertions\n                  ativa asser\u00e7\u00f5es de sistema\n    -dsa | -disablesystemassertions\n                  desativa asser\u00e7\u00f5es de sistema\n    -agentlib:"
				"<libname>[=<options>]\n                  carrega biblioteca de agente nativo <libname>, por exemplo, -agentlib:jdwp\n                  consulte tamb\u00e9m -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  carrega biblioteca de agente nativo por nome do caminho completo\n    -javaagent:<jarpath>[=<options>]\n                  carrega agente de linguagem de programa\u00e7\u00e3o Java, consulte java.lang.instrument\n    -splash:<imagepath>\n                  mostra a tela inicial com a imagem especificada\n                  Imagens HiDPI dimensionadas s\u00e3o suportadas automaticamente e utilizadas,\n                  se dispon\u00edveis. O nome do arquivo de imagem n\u00e3o dimensionada, por exemplo, image.ext,\n                  deve ser informado sempre como argumento para a op\u00e7\u00e3o -splash.\n                  A imagem dimensionada mais apropriada fornecida ser\u00e1 selecionada\n                  automaticamente.\n                  Consulte a documenta\u00e7\u00e3o da API de Tela Inicial para obter mais informa\u00e7\u00f5es\n    @arquivos de argume"
				"nto\n                  Um ou mais arquivos de argumentos que cont\u00eam op\u00e7\u00f5es\n    -disable-@files\n                  impede expans\u00e3o adicional de arquivo de argumentos\nnPara especificar um argumento para uma op\u00e7\u00e3o longa, voc\u00ea pode usar --<name>=<value> ou\n--<name> <value>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Uso: {0} [options] <mainclass> [args...]\n           (para executar uma classe)\n   ou  {0} [options] -jar <jarfile> [args...]\n           (para executar um arquivo jar)\n   ou  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (para executar a classe principal em um m\u00f3dulo)\n\n Os argumentos ap\u00f3s a classe principal, -jar <jarfile>, -m ou --module\n <module>/<mainclass> s\u00e3o especificados como os argumentos para a classe principal.\n\n em que as op\u00e7\u00f5es incluem:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  \u00e9 um sin\u00f4nimo da VM \"{1}\" [obsoleto]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of("    {0}\t  para selecionar a VM \"{1}\"\n"_s)
		})
	});
}

launcher_pt_BR::launcher_pt_BR() {
}

$Class* launcher_pt_BR::load$($String* name, bool initialize) {
	$loadClass(launcher_pt_BR, name, initialize, &_launcher_pt_BR_ClassInfo_, allocate$launcher_pt_BR);
	return class$;
}

$Class* launcher_pt_BR::class$ = nullptr;

		} // resources
	} // launcher
} // sun