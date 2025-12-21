#include <sun/launcher/resources/launcher_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_zh_CN::*)()>(&launcher_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_zh_CN_MethodInfo_
};

$Object* allocate$launcher_zh_CN($Class* clazz) {
	return $of($alloc(launcher_zh_CN));
}

void launcher_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\n以下选项是特定于 macOS 的选项：\n    -XstartOnFirstThread\n                      在第一个 (AppKit) 线程上运行 main() 方法\n    -Xdock:name=<application name>\n                      覆盖停靠栏中显示的默认应用程序名称\n    -Xdock:icon=<path to icon file>\n                     覆盖停靠栏中显示的默认图标\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           禁用后台编译\n    -Xbootclasspath/a:<以 {0} 分隔的目录和 zip/jar 文件>\n                      附加在引导类路径末尾\n    -Xcheck:jni       对 JNI 函数执行其他检查\n    -Xcomp            强制在首次调用时编译方法\n    -Xdebug           不执行任何操作。为实现向后兼容而提供。\n    -Xdiag            显示附加诊断消息\n    -Xfuture          启用最严格的检查，预期将来的默认值。\n                      此选项已过时，可能会在\n                      未来发行版中删除。\n    -Xint             仅解释模式执行\n    -Xinternalversion\n                      显示比 -version 选项更详细的\n                      JVM 版本信息\n    -Xlog:<opts>      配置或启用采用 Java 虚拟\n                      机 (Java Virtual Machine, JVM) 统一记录框架进行事件记录。使用 -Xlog:help\n                      可了解详细信息。\n    -Xloggc:<file>    将 GC 状态记录在文件中\uff08带时间戳）。\n                      此选项已过时，可能会在\n                      将来的发行版中删除。它将替换为 -Xlog:gc:<file>。\n    -Xmixed           混合模式执行\uff08默认值）\n    -Xmn<size>        为年轻代\uff08新生代）设置初始和最大堆大小\n                      \uff08以字节为单位）\n    -Xms<size>        设置初始 Java 堆大小\n    -Xmx<size>        设置最大 Java 堆大小\n    -Xnoclassgc       禁用类垃圾收集\n    -Xrs              减少 Java/VM 对操作系统信号的使用\uff08请参见"
				"文档）\n    -Xshare:auto      在可能的情况下使用共享类数据\uff08默认值）\n    -Xshare:off       不尝试使用共享类数据\n    -Xshare:on        要求使用共享类数据，否则将失败。\n                      这是一个测试选项，可能导致间歇性\n                      故障。不应在生产环境中使用它。\n    -XshowSettings    显示所有设置并继续\n    -XshowSettings:all\n                      显示所有设置并继续\n    -XshowSettings:locale\n                      显示所有与区域设置相关的设置并继续\n    -XshowSettings:properties\n                      显示所有属性设置并继续\n    -XshowSettings:vm\n                      显示所有与 vm 相关的设置并继续\n    -XshowSettings:system\n                      \uff08仅 Linux）显示主机系统或容器\n                      配置并继续\n    -Xss<size>        设置 Java 线程堆栈大小\n    -Xverify          设置字节码验证器的模式\n                      请注意，选项 -Xverify:none 已过时，\n                      可能会在未来发行版中删除。\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      更新 <module> 以读取 <target-module>，而无论\n                      模块如何声明。 \n                      <target-module> 可以是 ALL-UNNAMED，将读取所有未命名\n                      模块。\n    --add-exports <module>/<package>=<target-module>(,<target-"
				"module>)*\n                      更新 <module> 以将 <package> 导出到 <target-module>，\n                      而无论模块如何声明。\n                      <target-module> 可以是 ALL-UNNAMED，将导出到所有\n                      未命名模块。\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      更新 <module> 以在 <target-module> 中打开\n                      <package>，而无论模块如何声明。\n    --illegal-access=<value>\n                      允许或拒绝通过未命名模块中的代码对命名模块中的\n                      类型成员进行访问。\n                      <value> 为 \"deny\"、\"permit\"、\"warn\" 或 \"debug\" 之一\n                      此选项将在未来发行版中删除。\n    --limit-modules <module name>[,<module name>...]\n                      限制可观察模块的领域\n    --patch-module <module>=<file>({0}<file>)*\n                      使用 JAR 文件或目录中的类和资源\n                      覆盖或增强模块。\n    --source <version>\n                      设置源文件模式中源的版本。\n\n这些额外选项如有更改, 恕不另行通知。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"错误: 找不到或无法加载主类 {0}\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"错误: main 方法不是类 {1} 中的{0}, 请将 main 方法定义为:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"错误: main 方法必须返回类 {0} 中的空类型值, 请\n将 main 方法定义为:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"错误: 在类 {0} 中找不到 main 方法, 请将 main 方法定义为:\n   public static void main(String[] args)\n否则 JavaFX 应用程序类必须扩展{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"错误: 缺少 JavaFX 运行时组件, 需要使用该组件来运行此应用程序"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"错误: 加载主类 {0} 时出现 LinkageError\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"错误: 无法初始化主类 {0}\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"初始化错误"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"错误: 尝试打开文件{0}时出现意外错误"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"在{0}中找不到清单"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"{0}中没有主清单属性"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of(u"在 {0} 中加载 Java 代理时出错"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"错误: JavaFX launchApplication 方法具有错误的签名, 必须\n将方法声明为静态方法并返回空类型的值"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"模块 {0} 不具有 ModuleMainClass 属性，请使用 -m <模块>/<主类>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"错误: 在模块 {1} 中找不到或无法加载主类 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"错误: 无法将主类 {0} 加载到模块 {1} 中\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"找不到{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"错误: 无法初始化模块 {1} 中的主类 {0}\n原因: {2}: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <目录和 zip/jar 文件的类搜索路径>\n    -classpath <目录和 zip/jar 文件的类搜索路径>\n    --class-path <目录和 zip/jar 文件的类搜索路径>\n                  使用 {0} 分隔的, 用于搜索类文件的目录, JAR 档案\n                  和 ZIP 档案列表。\n    -p <模块路径>\n    --module-path <模块路径>...\n                  用 {0} 分隔的目录列表, 每个目录\n                  都是一个包含模块的目录。\n    --upgrade-module-path <模块路径>...\n                  用 {0} 分隔的目录列表, 每个目录\n                  都是一个包含模块的目录, 这些模块\n                  用于替换运行时映像中的可升级模块\n    --add-modules <模块名称>[,<模块名称>...]\n                  除了初始模块之外要解析的根模块。\n                  <模块名称> 还可以为 ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  列出可观察模块并退出\n    -d <module name>\n    --describe-module <模块名称>\n                  描述模块并退出\n    --dry-run     创建 VM 并加载主类, 但不执行 main 方法。\n                  此 --dry-run 选项对于验证诸如\n                  模块系统配置这样的命令行选项可能非常有用。\n    --validate-modules\n                  验证所有模块并退出\n                  --validate-modules 选项对于查找\n                  模块路径中模块的冲突及其他错误可能非常有用。\n    -D<名称>=<值>\n                  设"
				"置系统属性\n    -verbose:[class|module|gc|jni]\n                  为给定子系统启用详细输出\n    -version      将产品版本输出到错误流并退出\n    --version     将产品版本输出到输出流并退出\n    -showversion  将产品版本输出到错误流并继续\n    --show-version\n                  将产品版本输出到输出流并继续\n    --show-module-resolution\n                  在启动过程中显示模块解析输出\n    -? -h -help\n                  将此帮助消息输出到错误流\n    --help        将此帮助消息输出到输出流\n    -X            将额外选项的帮助输出到错误流\n    --help-extra  将额外选项的帮助输出到输出流\n    -ea[:<程序包名称>...|:<类名>]\n    -enableassertions[:<程序包名称>...|:<类名>]\n                  按指定的粒度启用断言\n    -da[:<程序包名称>...|:<类名>]\n    -disableassertions[:<程序包名称>...|:<类名>]\n                  按指定的粒度禁用断言\n    -esa | -enablesystemassertions\n                  启用系统断言\n    -dsa | -disablesystemassertions\n                  禁用系统断言\n    -agentlib:<库名>[=<选项>]\n                  加载本机代理库 <库名>, 例如 -agentlib:jdwp\n                  另请参阅 -agentlib:jdwp=help\n    -agentpath:<路径名>[=<选项>]\n                  按完整路径名加载本机代理库\n    -javaagent:<jar 路径>[=<选项>]\n                  加载 Java 编程语言代理, 请参阅 java.lang.instrument\n    -splas"
				"h:<图像路径>\n                  使用指定的图像显示启动屏幕\n                  自动支持和使用 HiDPI 缩放图像\n                  (如果可用)。应始终将未缩放的图像文件名 (例如, image.ext)\n                  作为参数传递给 -splash 选项。\n                  将自动选取提供的最合适的缩放\n                  图像。\n                  有关详细信息, 请参阅 SplashScreen API 文档\n    @argument 文件\n                  一个或多个包含选项的参数文件\n    -disable-@files\n                  阻止进一步扩展参数文件\n    --enable-preview\n                  允许类依赖于此发行版的预览功能\n要为长选项指定参数, 可以使用 --<名称>=<值> 或\n--<名称> <值>。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"用法：{0} [options] <主类> [args...]\n           \uff08执行类）\n   或  {0} [options] -jar <jar 文件> [args...]\n           \uff08执行 jar 文件）\n   或  {0} [options] -m <模块>[/<主类>] [args...]\n       {0} [options] --module <模块>[/<主类>] [args...]\n           \uff08执行模块中的主类）\n   或  {0} [options] <源文件> [args]\n           \uff08执行单个源文件程序）\n\n 将主类、源文件、-jar <jar 文件>、-m 或\n --module <模块>/<主类> 后的参数作为参数\n 传递到主类。\n\n 其中，选项包括：\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  是 \"{1}\" VM 的同义词 [已过时]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  选择 \"{1}\" VM\n"_s)
		})
	});
}

launcher_zh_CN::launcher_zh_CN() {
}

$Class* launcher_zh_CN::load$($String* name, bool initialize) {
	$loadClass(launcher_zh_CN, name, initialize, &_launcher_zh_CN_ClassInfo_, allocate$launcher_zh_CN);
	return class$;
}

$Class* launcher_zh_CN::class$ = nullptr;

		} // resources
	} // launcher
} // sun