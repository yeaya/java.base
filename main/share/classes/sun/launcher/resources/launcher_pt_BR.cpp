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
			$of(u"\nAs opções a seguir são específicas para o Mac OS X:\n    -XstartOnFirstThread\n                      executa o método main() no primeiro thread (AppKit)\n    -Xdock:name=<nome do aplicativo>\n                      substitui o nome do aplicativo padrão exibido no encaixe\n    -Xdock:icon=<caminho para o arquivo do ícone>\n                      substitui o ícone exibido no encaixe\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           desativa a compilação em segundo plano\n    -Xbootclasspath/a:<diretórios e arquivos zip/jar separados por {0}>\n                      anexa ao final do caminho de classe de bootstrap\n    -Xcheck:jni       executa verificações adicionais de funções JNI\n    -Xcomp            força a compilação de métodos na primeira chamada\n    -Xdebug           fornecido para compatibilidade reversa\n    -Xdiag            mostra mensagens adicionais de diagnóstico\n        -Xfuture          ativa verificações de nível máximo, antecipando padrão futuro\n    -Xint             somente execução de modo interpretado\n    -Xinternalversion\n                      exibe informações mais detalhadas da versão da JVM do que a\n                      opção -version\n    -Xloggc:<file>    registra o status do GC em um arquivo com timestamps\n    -Xmixed           execução em modo misto (padrão)\n    -Xmn<size>        define o tamanho inicial e máximo (em bytes) do heap\n                      para a geração jovem (infantil)\n    -"
				"Xms<size>        define o tamanho inicial do heap Java\n    -Xmx<size>        define o tamanho máximo do heap Java\n    -Xnoclassgc       desativa a coleta de lixo de classe\n    -Xrs              reduz o uso de sinais do SO por Java/VM (consulte a documentação)\n    -Xshare:auto      usa dados de classe compartilhados se possível (padrão)\n    -Xshare:off       não tenta usar dados de classe compartilhados\n    -Xshare:on        exige o uso de dados de classe compartilhados; caso contrário, falhará.\n    -XshowSettings    mostra todas as definições e continua\n    -XshowSettings:all\n                      mostra todas as definições e continua\n    -XshowSettings:locale\n                      mostra todas as definições relacionadas à configuração regional e continua\n    -XshowSettings:properties\n                      mostra todas as definições de propriedade e continua\n    -XshowSettings:vm mostra todas as definições relacionadas a vm e continua\n    -Xss<size>        define o tamanho da pilha de thread java\n    -Xverify"
				"          define o modo do verificador de código de byte\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      atualiza <module> para ler <target-module>, independentemente\n                      da declaração de módulo. \n                      <target-module> pode ser ALL-UNNAMED para ler todos os módulos\n                      sem nome.\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      atualiza <module> para exportar <package> para <target-module>,\n                      independentemente da declaração de módulo.\n                      <target-module> pode ser ALL-UNNAMED para exportar para todos os\n                      módulos sem nome.\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      atualiza <module> para abrir <package> para\n                      <target-module>, independentemente da declaração de módulo.\n    --illegal-access=<value>\n                      permite ou nega acesso aos membros dos "
				"tipos nos módulos com nome\n                     por código nos módulos sem nomes.\n                      <value> é um entre \"deny\", \"permit\", \"warn\" ou \"debug\"\n                       Esta opção será removida em uma futura release.\n    --limit-modules <module name>[,<module name>...]\n                      limita o universo de módulos observáveis\n--patch-module <module>=<file>({0}<file>)*\n                      substitui ou amplia um módulo com classes e recursos\n                      em arquivos ou diretórios JAR.\n   --disable-@files  desativa uma maior expansão do arquivo de argumento\n\nEssas opções extras estão sujeitas a alteração sem aviso.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"Erro: Não foi possível localizar nem carregar a classe principal {0}\nCausada por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"Erro: o método main não é {0} na classe {1}; defina o método main como:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"Erro: o método main deve retornar um valor do tipo void na classe {0}; \ndefina o método main como:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"Erro: o método main não foi encontrado na classe {0}; defina o método main como:\n   public static void main(String[] args)\nou uma classe de aplicativo JavaFX deve expandir {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"Erro: os componentes de runtime do JavaFX não foram encontrados. Eles são obrigatórios para executar este aplicativo"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of("Erro: ocorreu LinkageError ao carregar a classe principal {0}\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"Erro: Não é possível inicializar a classe principal {0}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"erro de inicialização"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of("Erro: ocorreu um erro inesperado ao tentar abrir o arquivo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"manifesto não encontrado em {0}"_s)
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
			$of(u"Erro: O método launchApplication do JavaFX tem a assinatura errada. Ele\\ndeve ser declarado como estático e retornar um valor do tipo void"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"o módulo {0} não tem um atributo MainClass, use -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"Erro: Não foi possível localizar nem carregar a classe principal {0} no módulo {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"Erro: Não é possível carregar a classe principal {0} no módulo {1}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"{0} não encontrado."_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"Erro: Não é possível inicializar a classe principal {0} no módulo {1}\nCausado por: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <caminho de pesquisa de classe de diretórios e arquivos zip/jar>\n    -classpath <caminho de pesquisa de classe de diretórios e arquivos zip/jar>\n    --class-path <caminho de pesquisa de classe de diretórios e arquivos zip/jar>\n                  Uma lista separada por {0} de diretórios, arquivos compactados JAR\n                  e arquivos compactados ZIP para procurar arquivos de classe.\n    -p <caminho do módulo>\n    --module-path <caminho do módulo>...\n                  Uma lista separada por {0} de diretórios, cada um\n                  sendo um diretório de módulos.\n    --upgrade-module-path <caminho do módulo>...\n                  Uma lista separada por {0} de diretórios, cada um\n                  sendo um diretório de módulos que substituem módulos\n                  passíveis de upgrade na imagem de runtime\n    --add-modules <nome do módulo>[,<nome do módulo>...]\n                  módulos-raiz a serem resolvidos além do módulo inicial.\n                  <nome do módulo> também pode ser ALL-DEFAUL"
				"T, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  lista os módulos observáveis e sai\n    -d <nome do módulo>\n    --describe-module <nome do módulo>\n                  descreve um módulo e sai\n    --dry-run     cria VM e carrega classe principal, mas não executa o método principal.\n                  A opção --dry-run pode ser útil para validar as\n                  opções de linha de comando como a configuração do sistema do módulo.\n    --validate-modules\n                  valida todos os módulos e sai\n                  A opção --validate-modules pode ser útil para localizar\n                  conflitos e outros erros com módulos no caminho do módulo.\n    -D<name>=<value>\n                  define uma propriedade de sistema\n    -verbose:[class|module|gc|jni]\n                  ativar saída verbosa\n    -version      imprime a versão do produto no fluxo de erros e sai\n    -version      imprime a versão do produto no fluxo de saída e sai\n    -showversion  imprime a versão do produt"
				"o no fluxo de erros e continua\n    --show-version\n                  imprime a versão do produto no fluxo de saída e continua\n    --show-module-resolution\n                  mostra a saída da resolução do módulo durante a inicialização\n    -? -h -help\n                  imprime esta mensagem de ajuda no fluxo de erros\n    --help        imprime esta mensagem de ajuda no fluxo de saída\n    -X            imprime ajuda sobre opções extras no fluxo de erros\n    --help-extra  imprime ajuda sobre opções extras no fluxo de saída\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  ativa asserções com granularidade especificada\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  desativa asserções com granularidade especificada\n    -esa | -enablesystemassertions\n                  ativa asserções de sistema\n    -dsa | -disablesystemassertions\n                  desativa asserções de sistema\n    -agentlib:"
				"<libname>[=<options>]\n                  carrega biblioteca de agente nativo <libname>, por exemplo, -agentlib:jdwp\n                  consulte também -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  carrega biblioteca de agente nativo por nome do caminho completo\n    -javaagent:<jarpath>[=<options>]\n                  carrega agente de linguagem de programação Java, consulte java.lang.instrument\n    -splash:<imagepath>\n                  mostra a tela inicial com a imagem especificada\n                  Imagens HiDPI dimensionadas são suportadas automaticamente e utilizadas,\n                  se disponíveis. O nome do arquivo de imagem não dimensionada, por exemplo, image.ext,\n                  deve ser informado sempre como argumento para a opção -splash.\n                  A imagem dimensionada mais apropriada fornecida será selecionada\n                  automaticamente.\n                  Consulte a documentação da API de Tela Inicial para obter mais informações\n    @arquivos de argume"
				"nto\n                  Um ou mais arquivos de argumentos que contêm opções\n    -disable-@files\n                  impede expansão adicional de arquivo de argumentos\nnPara especificar um argumento para uma opção longa, você pode usar --<name>=<value> ou\n--<name> <value>.\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"Uso: {0} [options] <mainclass> [args...]\n           (para executar uma classe)\n   ou  {0} [options] -jar <jarfile> [args...]\n           (para executar um arquivo jar)\n   ou  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (para executar a classe principal em um módulo)\n\n Os argumentos após a classe principal, -jar <jarfile>, -m ou --module\n <module>/<mainclass> são especificados como os argumentos para a classe principal.\n\n em que as opções incluem:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  é um sinônimo da VM \"{1}\" [obsoleto]\n"_s)
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