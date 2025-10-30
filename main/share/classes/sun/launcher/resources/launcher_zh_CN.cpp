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
			$of(u"\n\u4ee5\u4e0b\u9009\u9879\u662f\u7279\u5b9a\u4e8e macOS \u7684\u9009\u9879\uff1a\n    -XstartOnFirstThread\n                      \u5728\u7b2c\u4e00\u4e2a (AppKit) \u7ebf\u7a0b\u4e0a\u8fd0\u884c main() \u65b9\u6cd5\n    -Xdock:name=<application name>\n                      \u8986\u76d6\u505c\u9760\u680f\u4e2d\u663e\u793a\u7684\u9ed8\u8ba4\u5e94\u7528\u7a0b\u5e8f\u540d\u79f0\n    -Xdock:icon=<path to icon file>\n                     \u8986\u76d6\u505c\u9760\u680f\u4e2d\u663e\u793a\u7684\u9ed8\u8ba4\u56fe\u6807\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           \u7981\u7528\u540e\u53f0\u7f16\u8bd1\n    -Xbootclasspath/a:<\u4ee5 {0} \u5206\u9694\u7684\u76ee\u5f55\u548c zip/jar \u6587\u4ef6>\n                      \u9644\u52a0\u5728\u5f15\u5bfc\u7c7b\u8def\u5f84\u672b\u5c3e\n    -Xcheck:jni       \u5bf9 JNI \u51fd\u6570\u6267\u884c\u5176\u4ed6\u68c0\u67e5\n    -Xcomp            \u5f3a\u5236\u5728\u9996\u6b21\u8c03\u7528\u65f6\u7f16\u8bd1\u65b9\u6cd5\n    -Xdebug           \u4e0d\u6267\u884c\u4efb\u4f55\u64cd\u4f5c\u3002\u4e3a\u5b9e\u73b0\u5411\u540e\u517c\u5bb9\u800c\u63d0\u4f9b\u3002\n    -Xdiag            \u663e\u793a\u9644\u52a0\u8bca\u65ad\u6d88\u606f\n    -Xfuture          \u542f\u7528\u6700\u4e25\u683c\u7684\u68c0\u67e5\uff0c\u9884\u671f\u5c06\u6765\u7684\u9ed8\u8ba4\u503c\u3002\n                      \u6b64\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u53ef\u80fd\u4f1a\u5728\n                      \u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002\n    -Xint             \u4ec5\u89e3\u91ca\u6a21\u5f0f\u6267\u884c\n    -Xinternalversion\n                      \u663e\u793a\u6bd4 -version \u9009\u9879\u66f4\u8be6\u7ec6\u7684\n                      JVM \u7248\u672c\u4fe1\u606f\n    -Xlog:<opts>      \u914d\u7f6e\u6216\u542f\u7528\u91c7\u7528 Java \u865a\u62df\n                      \u673a (Java Virtual Machine, JVM) \u7edf\u4e00\u8bb0\u5f55\u6846\u67b6\u8fdb\u884c\u4e8b\u4ef6\u8bb0\u5f55\u3002\u4f7f\u7528 -Xlog:help\n                      \u53ef\u4e86\u89e3\u8be6\u7ec6\u4fe1\u606f\u3002\n    -Xloggc:<file>    \u5c06 GC \u72b6\u6001\u8bb0\u5f55\u5728\u6587\u4ef6\u4e2d\uff08\u5e26\u65f6\u95f4\u6233\uff09\u3002\n                      \u6b64\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u53ef\u80fd\u4f1a\u5728\n                      \u5c06\u6765\u7684\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002\u5b83\u5c06\u66ff\u6362\u4e3a -Xlog:gc:<file>\u3002\n    -Xmixed           \u6df7\u5408\u6a21\u5f0f\u6267\u884c\uff08\u9ed8\u8ba4\u503c\uff09\n    -Xmn<size>        \u4e3a\u5e74\u8f7b\u4ee3\uff08\u65b0\u751f\u4ee3\uff09\u8bbe\u7f6e\u521d\u59cb\u548c\u6700\u5927\u5806\u5927\u5c0f\n                      \uff08\u4ee5\u5b57\u8282\u4e3a\u5355\u4f4d\uff09\n    -Xms<size>        \u8bbe\u7f6e\u521d\u59cb Java \u5806\u5927\u5c0f\n    -Xmx<size>        \u8bbe\u7f6e\u6700\u5927 Java \u5806\u5927\u5c0f\n    -Xnoclassgc       \u7981\u7528\u7c7b\u5783\u573e\u6536\u96c6\n    -Xrs              \u51cf\u5c11 Java/VM \u5bf9\u64cd\u4f5c\u7cfb\u7edf\u4fe1\u53f7\u7684\u4f7f\u7528\uff08\u8bf7\u53c2\u89c1"
				"\u6587\u6863\uff09\n    -Xshare:auto      \u5728\u53ef\u80fd\u7684\u60c5\u51b5\u4e0b\u4f7f\u7528\u5171\u4eab\u7c7b\u6570\u636e\uff08\u9ed8\u8ba4\u503c\uff09\n    -Xshare:off       \u4e0d\u5c1d\u8bd5\u4f7f\u7528\u5171\u4eab\u7c7b\u6570\u636e\n    -Xshare:on        \u8981\u6c42\u4f7f\u7528\u5171\u4eab\u7c7b\u6570\u636e\uff0c\u5426\u5219\u5c06\u5931\u8d25\u3002\n                      \u8fd9\u662f\u4e00\u4e2a\u6d4b\u8bd5\u9009\u9879\uff0c\u53ef\u80fd\u5bfc\u81f4\u95f4\u6b47\u6027\n                      \u6545\u969c\u3002\u4e0d\u5e94\u5728\u751f\u4ea7\u73af\u5883\u4e2d\u4f7f\u7528\u5b83\u3002\n    -XshowSettings    \u663e\u793a\u6240\u6709\u8bbe\u7f6e\u5e76\u7ee7\u7eed\n    -XshowSettings:all\n                      \u663e\u793a\u6240\u6709\u8bbe\u7f6e\u5e76\u7ee7\u7eed\n    -XshowSettings:locale\n                      \u663e\u793a\u6240\u6709\u4e0e\u533a\u57df\u8bbe\u7f6e\u76f8\u5173\u7684\u8bbe\u7f6e\u5e76\u7ee7\u7eed\n    -XshowSettings:properties\n                      \u663e\u793a\u6240\u6709\u5c5e\u6027\u8bbe\u7f6e\u5e76\u7ee7\u7eed\n    -XshowSettings:vm\n                      \u663e\u793a\u6240\u6709\u4e0e vm \u76f8\u5173\u7684\u8bbe\u7f6e\u5e76\u7ee7\u7eed\n    -XshowSettings:system\n                      \uff08\u4ec5 Linux\uff09\u663e\u793a\u4e3b\u673a\u7cfb\u7edf\u6216\u5bb9\u5668\n                      \u914d\u7f6e\u5e76\u7ee7\u7eed\n    -Xss<size>        \u8bbe\u7f6e Java \u7ebf\u7a0b\u5806\u6808\u5927\u5c0f\n    -Xverify          \u8bbe\u7f6e\u5b57\u8282\u7801\u9a8c\u8bc1\u5668\u7684\u6a21\u5f0f\n                      \u8bf7\u6ce8\u610f\uff0c\u9009\u9879 -Xverify:none \u5df2\u8fc7\u65f6\uff0c\n                      \u53ef\u80fd\u4f1a\u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u8bfb\u53d6 <target-module>\uff0c\u800c\u65e0\u8bba\n                      \u6a21\u5757\u5982\u4f55\u58f0\u660e\u3002 \n                      <target-module> \u53ef\u4ee5\u662f ALL-UNNAMED\uff0c\u5c06\u8bfb\u53d6\u6240\u6709\u672a\u547d\u540d\n                      \u6a21\u5757\u3002\n    --add-exports <module>/<package>=<target-module>(,<target-"
				"module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u5c06 <package> \u5bfc\u51fa\u5230 <target-module>\uff0c\n                      \u800c\u65e0\u8bba\u6a21\u5757\u5982\u4f55\u58f0\u660e\u3002\n                      <target-module> \u53ef\u4ee5\u662f ALL-UNNAMED\uff0c\u5c06\u5bfc\u51fa\u5230\u6240\u6709\n                      \u672a\u547d\u540d\u6a21\u5757\u3002\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u5728 <target-module> \u4e2d\u6253\u5f00\n                      <package>\uff0c\u800c\u65e0\u8bba\u6a21\u5757\u5982\u4f55\u58f0\u660e\u3002\n    --illegal-access=<value>\n                      \u5141\u8bb8\u6216\u62d2\u7edd\u901a\u8fc7\u672a\u547d\u540d\u6a21\u5757\u4e2d\u7684\u4ee3\u7801\u5bf9\u547d\u540d\u6a21\u5757\u4e2d\u7684\n                      \u7c7b\u578b\u6210\u5458\u8fdb\u884c\u8bbf\u95ee\u3002\n                      <value> \u4e3a \"deny\"\u3001\"permit\"\u3001\"warn\" \u6216 \"debug\" \u4e4b\u4e00\n                      \u6b64\u9009\u9879\u5c06\u5728\u672a\u6765\u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002\n    --limit-modules <module name>[,<module name>...]\n                      \u9650\u5236\u53ef\u89c2\u5bdf\u6a21\u5757\u7684\u9886\u57df\n    --patch-module <module>=<file>({0}<file>)*\n                      \u4f7f\u7528 JAR \u6587\u4ef6\u6216\u76ee\u5f55\u4e2d\u7684\u7c7b\u548c\u8d44\u6e90\n                      \u8986\u76d6\u6216\u589e\u5f3a\u6a21\u5757\u3002\n    --source <version>\n                      \u8bbe\u7f6e\u6e90\u6587\u4ef6\u6a21\u5f0f\u4e2d\u6e90\u7684\u7248\u672c\u3002\n\n\u8fd9\u4e9b\u989d\u5916\u9009\u9879\u5982\u6709\u66f4\u6539, \u6055\u4e0d\u53e6\u884c\u901a\u77e5\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"\u9519\u8bef: \u627e\u4e0d\u5230\u6216\u65e0\u6cd5\u52a0\u8f7d\u4e3b\u7c7b {0}\n\u539f\u56e0: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"\u9519\u8bef: main \u65b9\u6cd5\u4e0d\u662f\u7c7b {1} \u4e2d\u7684{0}, \u8bf7\u5c06 main \u65b9\u6cd5\u5b9a\u4e49\u4e3a:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"\u9519\u8bef: main \u65b9\u6cd5\u5fc5\u987b\u8fd4\u56de\u7c7b {0} \u4e2d\u7684\u7a7a\u7c7b\u578b\u503c, \u8bf7\n\u5c06 main \u65b9\u6cd5\u5b9a\u4e49\u4e3a:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"\u9519\u8bef: \u5728\u7c7b {0} \u4e2d\u627e\u4e0d\u5230 main \u65b9\u6cd5, \u8bf7\u5c06 main \u65b9\u6cd5\u5b9a\u4e49\u4e3a:\n   public static void main(String[] args)\n\u5426\u5219 JavaFX \u5e94\u7528\u7a0b\u5e8f\u7c7b\u5fc5\u987b\u6269\u5c55{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"\u9519\u8bef: \u7f3a\u5c11 JavaFX \u8fd0\u884c\u65f6\u7ec4\u4ef6, \u9700\u8981\u4f7f\u7528\u8be5\u7ec4\u4ef6\u6765\u8fd0\u884c\u6b64\u5e94\u7528\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"\u9519\u8bef: \u52a0\u8f7d\u4e3b\u7c7b {0} \u65f6\u51fa\u73b0 LinkageError\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"\u9519\u8bef: \u65e0\u6cd5\u521d\u59cb\u5316\u4e3b\u7c7b {0}\n\u539f\u56e0: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"\u521d\u59cb\u5316\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"\u9519\u8bef: \u5c1d\u8bd5\u6253\u5f00\u6587\u4ef6{0}\u65f6\u51fa\u73b0\u610f\u5916\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"\u5728{0}\u4e2d\u627e\u4e0d\u5230\u6e05\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"{0}\u4e2d\u6ca1\u6709\u4e3b\u6e05\u5355\u5c5e\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of(u"\u5728 {0} \u4e2d\u52a0\u8f7d Java \u4ee3\u7406\u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"\u9519\u8bef: JavaFX launchApplication \u65b9\u6cd5\u5177\u6709\u9519\u8bef\u7684\u7b7e\u540d, \u5fc5\u987b\n\u5c06\u65b9\u6cd5\u58f0\u660e\u4e3a\u9759\u6001\u65b9\u6cd5\u5e76\u8fd4\u56de\u7a7a\u7c7b\u578b\u7684\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"\u6a21\u5757 {0} \u4e0d\u5177\u6709 ModuleMainClass \u5c5e\u6027\uff0c\u8bf7\u4f7f\u7528 -m <\u6a21\u5757>/<\u4e3b\u7c7b>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"\u9519\u8bef: \u5728\u6a21\u5757 {1} \u4e2d\u627e\u4e0d\u5230\u6216\u65e0\u6cd5\u52a0\u8f7d\u4e3b\u7c7b {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"\u9519\u8bef: \u65e0\u6cd5\u5c06\u4e3b\u7c7b {0} \u52a0\u8f7d\u5230\u6a21\u5757 {1} \u4e2d\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"\u627e\u4e0d\u5230{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"\u9519\u8bef: \u65e0\u6cd5\u521d\u59cb\u5316\u6a21\u5757 {1} \u4e2d\u7684\u4e3b\u7c7b {0}\n\u539f\u56e0: {2}: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <\u76ee\u5f55\u548c zip/jar \u6587\u4ef6\u7684\u7c7b\u641c\u7d22\u8def\u5f84>\n    -classpath <\u76ee\u5f55\u548c zip/jar \u6587\u4ef6\u7684\u7c7b\u641c\u7d22\u8def\u5f84>\n    --class-path <\u76ee\u5f55\u548c zip/jar \u6587\u4ef6\u7684\u7c7b\u641c\u7d22\u8def\u5f84>\n                  \u4f7f\u7528 {0} \u5206\u9694\u7684, \u7528\u4e8e\u641c\u7d22\u7c7b\u6587\u4ef6\u7684\u76ee\u5f55, JAR \u6863\u6848\n                  \u548c ZIP \u6863\u6848\u5217\u8868\u3002\n    -p <\u6a21\u5757\u8def\u5f84>\n    --module-path <\u6a21\u5757\u8def\u5f84>...\n                  \u7528 {0} \u5206\u9694\u7684\u76ee\u5f55\u5217\u8868, \u6bcf\u4e2a\u76ee\u5f55\n                  \u90fd\u662f\u4e00\u4e2a\u5305\u542b\u6a21\u5757\u7684\u76ee\u5f55\u3002\n    --upgrade-module-path <\u6a21\u5757\u8def\u5f84>...\n                  \u7528 {0} \u5206\u9694\u7684\u76ee\u5f55\u5217\u8868, \u6bcf\u4e2a\u76ee\u5f55\n                  \u90fd\u662f\u4e00\u4e2a\u5305\u542b\u6a21\u5757\u7684\u76ee\u5f55, \u8fd9\u4e9b\u6a21\u5757\n                  \u7528\u4e8e\u66ff\u6362\u8fd0\u884c\u65f6\u6620\u50cf\u4e2d\u7684\u53ef\u5347\u7ea7\u6a21\u5757\n    --add-modules <\u6a21\u5757\u540d\u79f0>[,<\u6a21\u5757\u540d\u79f0>...]\n                  \u9664\u4e86\u521d\u59cb\u6a21\u5757\u4e4b\u5916\u8981\u89e3\u6790\u7684\u6839\u6a21\u5757\u3002\n                  <\u6a21\u5757\u540d\u79f0> \u8fd8\u53ef\u4ee5\u4e3a ALL-DEFAULT, ALL-SYSTEM,\n                  ALL-MODULE-PATH.\n    --list-modules\n                  \u5217\u51fa\u53ef\u89c2\u5bdf\u6a21\u5757\u5e76\u9000\u51fa\n    -d <module name>\n    --describe-module <\u6a21\u5757\u540d\u79f0>\n                  \u63cf\u8ff0\u6a21\u5757\u5e76\u9000\u51fa\n    --dry-run     \u521b\u5efa VM \u5e76\u52a0\u8f7d\u4e3b\u7c7b, \u4f46\u4e0d\u6267\u884c main \u65b9\u6cd5\u3002\n                  \u6b64 --dry-run \u9009\u9879\u5bf9\u4e8e\u9a8c\u8bc1\u8bf8\u5982\n                  \u6a21\u5757\u7cfb\u7edf\u914d\u7f6e\u8fd9\u6837\u7684\u547d\u4ee4\u884c\u9009\u9879\u53ef\u80fd\u975e\u5e38\u6709\u7528\u3002\n    --validate-modules\n                  \u9a8c\u8bc1\u6240\u6709\u6a21\u5757\u5e76\u9000\u51fa\n                  --validate-modules \u9009\u9879\u5bf9\u4e8e\u67e5\u627e\n                  \u6a21\u5757\u8def\u5f84\u4e2d\u6a21\u5757\u7684\u51b2\u7a81\u53ca\u5176\u4ed6\u9519\u8bef\u53ef\u80fd\u975e\u5e38\u6709\u7528\u3002\n    -D<\u540d\u79f0>=<\u503c>\n                  \u8bbe"
				"\u7f6e\u7cfb\u7edf\u5c5e\u6027\n    -verbose:[class|module|gc|jni]\n                  \u4e3a\u7ed9\u5b9a\u5b50\u7cfb\u7edf\u542f\u7528\u8be6\u7ec6\u8f93\u51fa\n    -version      \u5c06\u4ea7\u54c1\u7248\u672c\u8f93\u51fa\u5230\u9519\u8bef\u6d41\u5e76\u9000\u51fa\n    --version     \u5c06\u4ea7\u54c1\u7248\u672c\u8f93\u51fa\u5230\u8f93\u51fa\u6d41\u5e76\u9000\u51fa\n    -showversion  \u5c06\u4ea7\u54c1\u7248\u672c\u8f93\u51fa\u5230\u9519\u8bef\u6d41\u5e76\u7ee7\u7eed\n    --show-version\n                  \u5c06\u4ea7\u54c1\u7248\u672c\u8f93\u51fa\u5230\u8f93\u51fa\u6d41\u5e76\u7ee7\u7eed\n    --show-module-resolution\n                  \u5728\u542f\u52a8\u8fc7\u7a0b\u4e2d\u663e\u793a\u6a21\u5757\u89e3\u6790\u8f93\u51fa\n    -? -h -help\n                  \u5c06\u6b64\u5e2e\u52a9\u6d88\u606f\u8f93\u51fa\u5230\u9519\u8bef\u6d41\n    --help        \u5c06\u6b64\u5e2e\u52a9\u6d88\u606f\u8f93\u51fa\u5230\u8f93\u51fa\u6d41\n    -X            \u5c06\u989d\u5916\u9009\u9879\u7684\u5e2e\u52a9\u8f93\u51fa\u5230\u9519\u8bef\u6d41\n    --help-extra  \u5c06\u989d\u5916\u9009\u9879\u7684\u5e2e\u52a9\u8f93\u51fa\u5230\u8f93\u51fa\u6d41\n    -ea[:<\u7a0b\u5e8f\u5305\u540d\u79f0>...|:<\u7c7b\u540d>]\n    -enableassertions[:<\u7a0b\u5e8f\u5305\u540d\u79f0>...|:<\u7c7b\u540d>]\n                  \u6309\u6307\u5b9a\u7684\u7c92\u5ea6\u542f\u7528\u65ad\u8a00\n    -da[:<\u7a0b\u5e8f\u5305\u540d\u79f0>...|:<\u7c7b\u540d>]\n    -disableassertions[:<\u7a0b\u5e8f\u5305\u540d\u79f0>...|:<\u7c7b\u540d>]\n                  \u6309\u6307\u5b9a\u7684\u7c92\u5ea6\u7981\u7528\u65ad\u8a00\n    -esa | -enablesystemassertions\n                  \u542f\u7528\u7cfb\u7edf\u65ad\u8a00\n    -dsa | -disablesystemassertions\n                  \u7981\u7528\u7cfb\u7edf\u65ad\u8a00\n    -agentlib:<\u5e93\u540d>[=<\u9009\u9879>]\n                  \u52a0\u8f7d\u672c\u673a\u4ee3\u7406\u5e93 <\u5e93\u540d>, \u4f8b\u5982 -agentlib:jdwp\n                  \u53e6\u8bf7\u53c2\u9605 -agentlib:jdwp=help\n    -agentpath:<\u8def\u5f84\u540d>[=<\u9009\u9879>]\n                  \u6309\u5b8c\u6574\u8def\u5f84\u540d\u52a0\u8f7d\u672c\u673a\u4ee3\u7406\u5e93\n    -javaagent:<jar \u8def\u5f84>[=<\u9009\u9879>]\n                  \u52a0\u8f7d Java \u7f16\u7a0b\u8bed\u8a00\u4ee3\u7406, \u8bf7\u53c2\u9605 java.lang.instrument\n    -splas"
				"h:<\u56fe\u50cf\u8def\u5f84>\n                  \u4f7f\u7528\u6307\u5b9a\u7684\u56fe\u50cf\u663e\u793a\u542f\u52a8\u5c4f\u5e55\n                  \u81ea\u52a8\u652f\u6301\u548c\u4f7f\u7528 HiDPI \u7f29\u653e\u56fe\u50cf\n                  (\u5982\u679c\u53ef\u7528)\u3002\u5e94\u59cb\u7ec8\u5c06\u672a\u7f29\u653e\u7684\u56fe\u50cf\u6587\u4ef6\u540d (\u4f8b\u5982, image.ext)\n                  \u4f5c\u4e3a\u53c2\u6570\u4f20\u9012\u7ed9 -splash \u9009\u9879\u3002\n                  \u5c06\u81ea\u52a8\u9009\u53d6\u63d0\u4f9b\u7684\u6700\u5408\u9002\u7684\u7f29\u653e\n                  \u56fe\u50cf\u3002\n                  \u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u53c2\u9605 SplashScreen API \u6587\u6863\n    @argument \u6587\u4ef6\n                  \u4e00\u4e2a\u6216\u591a\u4e2a\u5305\u542b\u9009\u9879\u7684\u53c2\u6570\u6587\u4ef6\n    -disable-@files\n                  \u963b\u6b62\u8fdb\u4e00\u6b65\u6269\u5c55\u53c2\u6570\u6587\u4ef6\n    --enable-preview\n                  \u5141\u8bb8\u7c7b\u4f9d\u8d56\u4e8e\u6b64\u53d1\u884c\u7248\u7684\u9884\u89c8\u529f\u80fd\n\u8981\u4e3a\u957f\u9009\u9879\u6307\u5b9a\u53c2\u6570, \u53ef\u4ee5\u4f7f\u7528 --<\u540d\u79f0>=<\u503c> \u6216\n--<\u540d\u79f0> <\u503c>\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"\u7528\u6cd5\uff1a{0} [options] <\u4e3b\u7c7b> [args...]\n           \uff08\u6267\u884c\u7c7b\uff09\n   \u6216  {0} [options] -jar <jar \u6587\u4ef6> [args...]\n           \uff08\u6267\u884c jar \u6587\u4ef6\uff09\n   \u6216  {0} [options] -m <\u6a21\u5757>[/<\u4e3b\u7c7b>] [args...]\n       {0} [options] --module <\u6a21\u5757>[/<\u4e3b\u7c7b>] [args...]\n           \uff08\u6267\u884c\u6a21\u5757\u4e2d\u7684\u4e3b\u7c7b\uff09\n   \u6216  {0} [options] <\u6e90\u6587\u4ef6> [args]\n           \uff08\u6267\u884c\u5355\u4e2a\u6e90\u6587\u4ef6\u7a0b\u5e8f\uff09\n\n \u5c06\u4e3b\u7c7b\u3001\u6e90\u6587\u4ef6\u3001-jar <jar \u6587\u4ef6>\u3001-m \u6216\n --module <\u6a21\u5757>/<\u4e3b\u7c7b> \u540e\u7684\u53c2\u6570\u4f5c\u4e3a\u53c2\u6570\n \u4f20\u9012\u5230\u4e3b\u7c7b\u3002\n\n \u5176\u4e2d\uff0c\u9009\u9879\u5305\u62ec\uff1a\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  \u662f \"{1}\" VM \u7684\u540c\u4e49\u8bcd [\u5df2\u8fc7\u65f6]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  \u9009\u62e9 \"{1}\" VM\n"_s)
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