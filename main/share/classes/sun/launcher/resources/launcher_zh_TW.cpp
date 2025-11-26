#include <sun/launcher/resources/launcher_zh_TW.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_zh_TW::*)()>(&launcher_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_zh_TW_MethodInfo_
};

$Object* allocate$launcher_zh_TW($Class* clazz) {
	return $of($alloc(launcher_zh_TW));
}

void launcher_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\n\u4e0b\u5217\u662f Mac OS X \u7279\u5b9a\u9078\u9805:\n    -XstartOnFirstThread\n                      \u5728\u7b2c\u4e00\u500b (AppKit) \u57f7\u884c\u7dd2\u57f7\u884c main() \u65b9\u6cd5\n    -Xdock:name=<application name>\n                      \u8986\u5beb\u7d50\u5408\u8aaa\u660e\u756b\u9762\u4e2d\u986f\u793a\u7684\u9810\u8a2d\u61c9\u7528\u7a0b\u5f0f\u540d\u7a31\n    -Xdock:icon=<path to icon file>\n                      \u8986\u5beb\u7d50\u5408\u8aaa\u660e\u756b\u9762\u4e2d\u986f\u793a\u7684\u9810\u8a2d\u5716\u793a\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           \u505c\u7528\u80cc\u666f\u7de8\u8b6f\n    -Xbootclasspath/a:<\u4ee5 {0} \u5340\u9694\u7684\u76ee\u9304\u548c zip/jar \u6a94\u6848>\n                      \u9644\u52a0\u81f3\u555f\u52d5\u5b89\u88dd\u985e\u5225\u8def\u5f91\u7684\u7d50\u5c3e\n    -Xcheck:jni       \u57f7\u884c\u984d\u5916\u7684 JNI \u51fd\u6578\u6aa2\u67e5\n    -Xcomp            \u5f37\u5236\u7de8\u8b6f\u7b2c\u4e00\u500b\u547c\u53eb\u7684\u65b9\u6cd5\n    -Xdebug           \u91dd\u5c0d\u56de\u6eaf\u76f8\u5bb9\u6027\u63d0\u4f9b\n    -Xdiag            \u986f\u793a\u984d\u5916\u7684\u8a3a\u65b7\u8a0a\u606f\n    -Xfuture          \u555f\u7528\u6700\u56b4\u683c\u7684\u6aa2\u67e5\uff0c\u9810\u5148\u4f5c\u70ba\u5c07\u4f86\u7684\u9810\u8a2d\n    -Xint             \u50c5\u9650\u89e3\u8b6f\u6a21\u5f0f\u57f7\u884c\n    -Xinternalversion\n                      \u986f\u793a\u6bd4 -version \u9078\u9805\u66f4\u70ba\u8a73\u7d30\u7684\n                      JVM \u7248\u672c\u8cc7\u8a0a\n    -Xloggc:<file>    \u9023\u540c\u6642\u6233\u5c07 GC \u72c0\u614b\u8a18\u9304\u81f3\u6a94\u6848\n    -Xmixed           \u6df7\u5408\u6a21\u5f0f\u57f7\u884c (\u9810\u8a2d)\n    -Xmn<size>        \u8a2d\u5b9a\u65b0\u751f\u4ee3 (\u990a\u6210\u5340) \u4e4b\u5806\u96c6\u7684\u8d77\u59cb\u5927\u5c0f\u548c\n                      \u5927\u5c0f\u4e0a\u9650 (\u4f4d\u5143\u7d44)\n    -Xms<size>        \u8a2d\u5b9a\u8d77\u59cb Java \u5806\u96c6\u5927\u5c0f\n    -Xmx<size>        \u8a2d\u5b9a Java \u5806\u96c6\u5927\u5c0f\u4e0a\u9650\n    -Xnoclassgc       \u505c\u7528\u985e\u5225\u8cc7\u6e90\u56de\u6536\n    -Xrs              \u6e1b\u5c11 Java/VM \u4f7f\u7528\u7684\u4f5c\u696d\u7cfb\u7d71\u4fe1\u865f (\u8acb\u53c3\u95b1\u6587\u4ef6)\n    -Xshare:auto      \u5728\u53ef\u80fd\u7684\u60c5\u6cc1\u4e0b\u4f7f\u7528\u5171\u7528\u985e\u5225\u8cc7\u6599 (\u9810\u8a2d)\n    -Xshare:off       \u4e0d\u5617\u8a66\u4f7f\u7528\u5171\u7528\u985e\u5225\u8cc7\u6599\n    -Xshare:on        \u9700\u8981\u4f7f\u7528\u5171\u7528\u985e\u5225\u8cc7\u6599\uff0c\u5426\u5247\u6703\u5931\u6557\u3002\n    -XshowSettings    \u986f\u793a\u6240\u6709\u8a2d\u5b9a\u503c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    -XshowSettings:all\n                      \u986f\u793a\u6240\u6709\u8a2d\u5b9a\u503c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    -XshowSettings:locale\n                      \u986f\u793a\u6240\u6709\u5730\u5340\u8a2d\u5b9a\u76f8\u95dc\u8a2d\u5b9a\u503c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    -XshowSettin"
				"gs:properties\n                      \u986f\u793a\u6240\u6709\u5c6c\u6027\u8a2d\u5b9a\u503c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    -XshowSettings:vm \u986f\u793a\u6240\u6709 VM \u76f8\u95dc\u8a2d\u5b9a\u503c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    -Xss<size>        \u8a2d\u5b9a Java \u57f7\u884c\u7dd2\u5806\u758a\u5927\u5c0f\n    -Xverify          \u8a2d\u5b9a Bytecode \u9a57\u8b49\u7a0b\u5f0f\u7684\u6a21\u5f0f\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u8b80\u53d6 <target-module>\uff0c\u4e0d\u8ad6\n                      \u6a21\u7d44\u5ba3\u544a\u70ba\u4f55\u3002 \n                      \u53ef\u5c07 <target-module> \u8a2d\u70ba ALL-UNNAMED \u4ee5\u8b80\u53d6\u6240\u6709\u672a\u547d\u540d\u7684\n                      \u6a21\u7d44\u3002\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u4fbf\u5c07 <package> \u532f\u51fa\u81f3 <target-module>\uff0c\n                      \u4e0d\u8ad6\u6a21\u7d44\u5ba3\u544a\u70ba\u4f55\u3002\n                      \u53ef\u5c07 <target-module> \u8a2d\u70ba ALL-UNNAMED \u4ee5\u532f\u51fa\u81f3\u6240\u6709\n                      \u672a\u547d\u540d\u7684\u6a21\u7d44\u3002\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      \u66f4\u65b0 <module> \u4ee5\u4fbf\u5c07 <package> \u958b\u555f\u81f3\n                      <target-module>\uff0c\u4e0d\u8ad6\u6a21\u7d44\u5ba3\u544a\u70ba\u4f55\u3002\n    --illegal-access=<value>\n                      \u5141\u8a31\u6216\u62d2\u7d55\u672a\u547d\u540d\u6a21\u7d44\u4e2d\u7684\u7a0b\u5f0f\u78bc\u5c0d\u5df2\u547d\u540d\u6a21\u7d44\u4e2d\u7684\n                      \u985e\u578b\u6210\u54e1\u9032\u884c\u5b58\u53d6\u3002\n                      <value> \u70ba \"deny\"\u3001\"permit\"\u3001\"warn\" \u6216 \"debug\" "
				"\u5176\u4e2d\u4e4b\u4e00\n                      \u6b64\u9078\u9805\u5c07\u5728\u672a\u4f86\u7248\u672c\u4e2d\u79fb\u9664\u3002\n    --limit-modules <module name>[,<module name>...]\n                      \u9650\u5236\u53ef\u76e3\u6e2c\u6a21\u7d44\u7684\u7bc4\u570d\n    --patch-module <module>=<file>({0}<file>)*\n                      \u8986\u5beb\u6216\u52a0\u5f37\u542b\u6709 JAR \u6a94\u6848\u6216\u76ee\u9304\u4e2d\n                      \u985e\u5225\u548c\u8cc7\u6e90\u7684\u6a21\u7d44\u3002\n    --disable-@files  \u505c\u7528\u9032\u4e00\u6b65\u7684\u5f15\u6578\u6a94\u6848\u64f4\u5145\n\n\u4e0a\u8ff0\u7684\u984d\u5916\u9078\u9805\u82e5\u6709\u8b8a\u66f4\u4e0d\u53e6\u884c\u901a\u77e5\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"\u932f\u8aa4: \u627e\u4e0d\u5230\u6216\u7121\u6cd5\u8f09\u5165\u4e3b\u8981\u985e\u5225 {0}\n\u539f\u56e0: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"\u932f\u8aa4: \u4e3b\u8981\u65b9\u6cd5\u4e0d\u662f\u985e\u5225 {1} \u4e2d\u7684 {0}\uff0c\u8acb\u5b9a\u7fa9\u4e3b\u8981\u65b9\u6cd5\u70ba:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"\u932f\u8aa4: \u4e3b\u8981\u65b9\u6cd5\u5fc5\u9808\u50b3\u56de\u985e\u5225 {0} \u4e2d void \u985e\u578b\u7684\u503c\uff0c\n\u8acb\u5b9a\u7fa9\u4e3b\u8981\u65b9\u6cd5\u70ba:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"\u932f\u8aa4: \u5728\u985e\u5225 {0} \u4e2d\u627e\u4e0d\u5230\u4e3b\u8981\u65b9\u6cd5\uff0c\u8acb\u5b9a\u7fa9\u4e3b\u8981\u65b9\u6cd5\u70ba:\n   public static void main(String[] args)\n\u6216\u8005 JavaFX \u61c9\u7528\u7a0b\u5f0f\u985e\u5225\u5fc5\u9808\u64f4\u5145 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"\u932f\u8aa4: \u907a\u6f0f\u57f7\u884c\u6b64\u61c9\u7528\u7a0b\u5f0f\u6240\u9700\u7684 JavaFX \u7a0b\u5f0f\u5be6\u969b\u57f7\u884c\u5143\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"\u932f\u8aa4: \u8f09\u5165\u4e3b\u8981\u985e\u5225 {0} \u6642\u767c\u751f LinkageError\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"\u932f\u8aa4: \u7121\u6cd5\u8d77\u59cb\u4e3b\u8981\u985e\u5225 {0}\n\u539f\u56e0: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"\u521d\u59cb\u5316\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"\u932f\u8aa4: \u5617\u8a66\u958b\u555f\u6a94\u6848 {0} \u6642\u767c\u751f\u672a\u9810\u671f\u7684\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"\u5728 {0} \u4e2d\u627e\u4e0d\u5230\u8cc7\u8a0a\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"{0} \u4e2d\u6c92\u6709\u4e3b\u8981\u8cc7\u8a0a\u6e05\u55ae\u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of(u"\u8f09\u5165 {0} \u4e2d\u7684 Java \u4ee3\u7406\u7a0b\u5f0f\u6642\u767c\u751f\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"\u932f\u8aa4: JavaFX launchApplication \u65b9\u6cd5\u7684\u7c3d\u7ae0\u932f\u8aa4\uff0c\u5b83\n\u5fc5\u9808\u5ba3\u544a\u70ba\u975c\u614b\u4e26\u50b3\u56de void \u985e\u578b\u7684\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"\u6a21\u7d44 {0} \u4e0d\u542b MainClass \u5c6c\u6027\uff0c\u8acb\u4f7f\u7528 -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"\u932f\u8aa4: \u627e\u4e0d\u5230\u6216\u7121\u6cd5\u8f09\u5165\u6a21\u7d44 {1} \u4e2d\u7684\u4e3b\u8981\u985e\u5225 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"\u932f\u8aa4: \u7121\u6cd5\u8f09\u5165\u6a21\u7d44 {1} \u4e2d\u7684\u4e3b\u8981\u985e\u5225 {0}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"\u627e\u4e0d\u5230 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"\u932f\u8aa4: \u7121\u6cd5\u8d77\u59cb\u6a21\u7d44 {1} \u4e2d\u7684\u4e3b\u8981\u985e\u5225 {0}\n\u539f\u56e0: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <\u76ee\u9304\u548c zip/jar \u6a94\u6848\u7684\u985e\u5225\u641c\u5c0b\u8def\u5f91>\n    -classpath <\u76ee\u9304\u548c zip/jar \u6a94\u6848\u7684\u985e\u5225\u641c\u5c0b\u8def\u5f91>\n    --class-path <\u76ee\u9304\u548c zip/jar \u6a94\u6848\u7684\u985e\u5225\u641c\u5c0b\u8def\u5f91>\n                  \u4ee5 {0} \u5340\u9694\u7684\u76ee\u9304\u3001JAR \u5b58\u6a94\n                  \u4ee5\u53ca ZIP \u5b58\u6a94\u6e05\u55ae (\u5c07\u65bc\u5176\u4e2d\u641c\u5c0b\u985e\u5225\u6a94\u6848)\u3002\n    -p <\u6a21\u7d44\u8def\u5f91>\n    --module-path <\u6a21\u7d44\u8def\u5f91>...\n                  \u4ee5 {0} \u5340\u9694\u7684\u76ee\u9304\u6e05\u55ae\uff0c\u6bcf\u500b\u76ee\u9304\n                  \u90fd\u662f\u4e00\u500b\u6a21\u7d44\u76ee\u9304\u3002\n    --upgrade-module-path <\u6a21\u7d44\u8def\u5f91>...\n                  \u4ee5 {0} \u5340\u9694\u7684\u76ee\u9304\u6e05\u55ae\uff0c\u6bcf\u500b\u76ee\u9304\n                  \u90fd\u662f\u4e00\u500b\u6a21\u7d44\u76ee\u9304\uff0c\u7576\u4e2d\u7684\u6a21\u7d44\u53ef\u53d6\u4ee3\u53ef\u5347\u7d1a\n                  \u6a21\u7d44 (\u5728\u7a0b\u5f0f\u5be6\u969b\u57f7\u884c\u5f71\u50cf\u4e2d)\n    --add-modules <module name>[,<module name>...]\n                  \u9664\u4e86\u8d77\u59cb\u6a21\u7d44\u4e4b\u5916\uff0c\u8981\u89e3\u6790\u7684\u6839\u6a21\u7d44\u3002\n                  <module name> \u4e5f\u53ef\u4ee5\u662f ALL-DEFAULT\u3001ALL-SYSTEM\u3001\n                  ALL-MODULE-PATH.\n    --list-modules\n                  \u5217\u51fa\u53ef\u76e3\u6e2c\u7684\u6a21\u7d44\u4e26\u7d50\u675f\n    -d <\u6a21\u7d44\u540d\u7a31>\n    --describe-module <\u6a21\u7d44\u540d\u7a31>\n                  \u63cf\u8ff0\u6a21\u7d44\u4e26\u7d50\u675f\n    --dry-run     \u5efa\u7acb VM \u4e26\u8f09\u5165\u4e3b\u8981\u985e\u5225\uff0c\u4f46\u4e0d\u57f7\u884c\u4e3b\u8981\u65b9\u6cd5\u3002\n                  --dry-run \u9078\u9805\u9069\u5408\u7528\u5728\u9a57\u8b49\n                  \u50cf\u6a21\u7d44\u7cfb\u7d71\u7d44\u614b\u7684\u547d\u4ee4\u884c\u9078\u9805\u3002\n    --validate-modules\n                  \u9a57\u8b49\u6240\u6709\u6a21\u7d44\u4e26\u7d50\u675f\n                  --validate-modules \u9078\u9805\u9069\u5408\u7528\u5728\u5c0b\u627e\n                  \u6a21\u7d44\u8def\u5f91\u4e0a\u4e4b\u6a21\u7d44\u7684\u885d\u7a81\u548c\u5176\u4ed6\u932f\u8aa4\u3002\n    -D<name>=<value>\n           "
				"       \u8a2d\u5b9a\u7cfb\u7d71\u7279\u6027\n    -verbose:[class|module|gc|jni]\n                  \u555f\u7528\u8a73\u7d30\u8cc7\u8a0a\u8f38\u51fa\n    -version      \u5728\u932f\u8aa4\u4e32\u6d41\u5370\u51fa\u7522\u54c1\u7248\u672c\u4e26\u7d50\u675f\n    --version      \u5728\u8f38\u51fa\u4e32\u6d41\u5370\u51fa\u7522\u54c1\u7248\u672c\u4e26\u7d50\u675f\n    -showversion  \u5728\u932f\u8aa4\u4e32\u6d41\u5370\u51fa\u7522\u54c1\u7248\u672c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    --show-version\n                  \u5728\u8f38\u51fa\u4e32\u6d41\u5370\u51fa\u7522\u54c1\u7248\u672c\u4e26\u7e7c\u7e8c\u9032\u884c\u4f5c\u696d\n    --show-module-resolution\n                  \u5728\u555f\u52d5\u6642\u986f\u793a\u6a21\u7d44\u89e3\u6790\u8f38\u51fa\n    -? -h -help\n                  \u5728\u932f\u8aa4\u4e32\u6d41\u5370\u51fa\u6b64\u8aaa\u660e\u8a0a\u606f\n    --help        \u5728\u8f38\u51fa\u4e32\u6d41\u5370\u51fa\u6b64\u8aaa\u660e\u8a0a\u606f\n    -X            \u5728\u932f\u8aa4\u4e32\u6d41\u5370\u51fa\u984d\u5916\u9078\u9805\u7684\u8aaa\u660e\n    --help-extra  \u5728\u8f38\u51fa\u4e32\u6d41\u5370\u51fa\u984d\u5916\u9078\u9805\u7684\u8aaa\u660e\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  \u555f\u7528\u6307\u5b9a\u4e4b\u8a73\u7d30\u7a0b\u5ea6\u7684\u5ba3\u544a\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  \u505c\u7528\u6307\u5b9a\u4e4b\u8a73\u7d30\u7a0b\u5ea6\u7684\u5ba3\u544a\n    -esa | -enablesystemassertions\n                \u555f\u7528\u7cfb\u7d71\u5ba3\u544a\n    -dsa | -disablesystemassertions\n                  \u505c\u7528\u7cfb\u7d71\u5ba3\u544a\n    -agentlib:<libname>[=<options>]\n                  \u8f09\u5165\u539f\u751f\u4ee3\u7406\u7a0b\u5f0f\u7a0b\u5f0f\u5eab <libname>\uff0c\u4f8b\u5982 -agentlib:jdwp\n                  \u53e6\u8acb\u53c3\u95b1 -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  \u4f9d\u5b8c\u6574\u8def\u5f91\u540d\u7a31\u8f09\u5165\u539f\u751f\u4ee3\u7406\u7a0b\u5f0f\u7a0b\u5f0f\u5eab\n  "
				"  -javaagent:<jarpath>[=<options>]\n                  \u8f09\u5165 Java \u7a0b\u5f0f\u8a9e\u8a00\u4ee3\u7406\u7a0b\u5f0f\uff0c\u8acb\u53c3\u95b1 java.lang.instrument\n    -splash:<imagepath>\n                  \u986f\u793a\u542b\u6307\u5b9a\u5f71\u50cf\u7684\u8edf\u9ad4\u8cc7\u8a0a\u756b\u9762\n                  \u7cfb\u7d71\u6703\u81ea\u52d5\u652f\u63f4\u4e26\u4f7f\u7528 HiDPI \u7e2e\u653e\u7684\u5f71\u50cf\n                  (\u82e5\u6709\u7684\u8a71)\u3002\u672a\u7e2e\u653e\u5f71\u50cf\u6a94\u6848\u540d\u7a31 (\u4f8b\u5982 image.ext)\n                  \u61c9\u4e00\u5f8b\u4ee5\u5f15\u6578\u7684\u5f62\u5f0f\u50b3\u9001\u7d66 -splash \u9078\u9805\u3002\n                  \u7cfb\u7d71\u5c07\u6703\u81ea\u52d5\u9078\u64c7\u4f7f\u7528\u6700\u9069\u5408\u7684\u7e2e\u653e\u5f71\u50cf\n                  \u3002\n                  \u8acb\u53c3\u95b1 SplashScreen API \u6587\u4ef6\u77ad\u89e3\u8a73\u7d30\u8cc7\u8a0a\u3002\n    @argument files\n                  \u4e00\u6216\u591a\u500b\u5305\u542b\u9078\u9805\u7684\u5f15\u6578\u6a94\u6848\n    -disable-@files\n                  \u505c\u7528\u9032\u4e00\u6b65\u7684\u5f15\u6578\u6a94\u6848\u64f4\u5145\n\u82e5\u8981\u6307\u5b9a\u9577\u9078\u9805\u7684\u5f15\u6578\uff0c\u53ef\u4ee5\u4f7f\u7528 --<name>=<value> \u6216\n--<name> <value>\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"\u7528\u6cd5: {0} [options] <mainclass> [args...]\n           (\u7528\u65bc\u57f7\u884c\u985e\u5225)\n   \u6216\u8005  {0} [options] -jar <jarfile> [args...]\n           (\u7528\u65bc\u57f7\u884c jar \u6a94\u6848)\n   \u6216\u8005  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (\u7528\u65bc\u57f7\u884c\u6a21\u7d44\u4e2d\u7684\u4e3b\u8981\u985e\u5225)\n\n \u4e3b\u8981\u985e\u5225\u3001-jar <jarfile>\u3001-m \u6216 --module <module>/<mainclass>\n \u4e4b\u5f8c\u7684\u5f15\u6578\u6703\u7576\u6210\u5f15\u6578\u50b3\u9001\u81f3\u4e3b\u8981\u985e\u5225\u3002\n\n \u5176\u4e2d\u9078\u9805\u5305\u62ec:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  \u662f \"{1}\" VM \u7684\u540c\u7fa9\u5b57  [\u5df2\u4e0d\u518d\u4f7f\u7528]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  \u9078\u53d6 \"{1}\" VM\n"_s)
		})
	});
}

launcher_zh_TW::launcher_zh_TW() {
}

$Class* launcher_zh_TW::load$($String* name, bool initialize) {
	$loadClass(launcher_zh_TW, name, initialize, &_launcher_zh_TW_ClassInfo_, allocate$launcher_zh_TW);
	return class$;
}

$Class* launcher_zh_TW::class$ = nullptr;

		} // resources
	} // launcher
} // sun