#include <sun/launcher/resources/launcher_zh_HK.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_zh_HK::*)()>(&launcher_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_zh_HK_MethodInfo_
};

$Object* allocate$launcher_zh_HK($Class* clazz) {
	return $of($alloc(launcher_zh_HK));
}

void launcher_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\n下列是 Mac OS X 特定選項:\n    -XstartOnFirstThread\n                      在第一個 (AppKit) 執行緒執行 main() 方法\n    -Xdock:name=<application name>\n                      覆寫結合說明畫面中顯示的預設應用程式名稱\n    -Xdock:icon=<path to icon file>\n                      覆寫結合說明畫面中顯示的預設圖示\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           停用背景編譯\n    -Xbootclasspath/a:<以 {0} 區隔的目錄和 zip/jar 檔案>\n                      附加至啟動安裝類別路徑的結尾\n    -Xcheck:jni       執行額外的 JNI 函數檢查\n    -Xcomp            強制編譯第一個呼叫的方法\n    -Xdebug           針對回溯相容性提供\n    -Xdiag            顯示額外的診斷訊息\n    -Xfuture          啟用最嚴格的檢查，預先作為將來的預設\n    -Xint             僅限解譯模式執行\n    -Xinternalversion\n                      顯示比 -version 選項更為詳細的\n                      JVM 版本資訊\n    -Xloggc:<file>    連同時戳將 GC 狀態記錄至檔案\n    -Xmixed           混合模式執行 (預設)\n    -Xmn<size>        設定新生代 (養成區) 之堆集的起始大小和\n                      大小上限 (位元組)\n    -Xms<size>        設定起始 Java 堆集大小\n    -Xmx<size>        設定 Java 堆集大小上限\n    -Xnoclassgc       停用類別資源回收\n    -Xrs              減少 Java/VM 使用的作業系統信號 (請參閱文件)\n    -Xshare:auto      在可能的情況下使用共用類別資料 (預設)\n    -Xshare:off       不嘗試使用共用類別資料\n    -Xshare:on        需要使用共用類別資料，否則會失敗。\n    -XshowSettings    顯示所有設定值並繼續進行作業\n    -XshowSettings:all\n                      顯示所有設定值並繼續進行作業\n    -XshowSettings:locale\n                      顯示所有地區設定相關設定值並繼續進行作業\n    -XshowSettin"
				"gs:properties\n                      顯示所有屬性設定值並繼續進行作業\n    -XshowSettings:vm 顯示所有 VM 相關設定值並繼續進行作業\n    -Xss<size>        設定 Java 執行緒堆疊大小\n    -Xverify          設定 Bytecode 驗證程式的模式\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      更新 <module> 以讀取 <target-module>，不論\n                      模組宣告為何。 \n                      可將 <target-module> 設為 ALL-UNNAMED 以讀取所有未命名的\n                      模組。\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      更新 <module> 以便將 <package> 匯出至 <target-module>，\n                      不論模組宣告為何。\n                      可將 <target-module> 設為 ALL-UNNAMED 以匯出至所有\n                      未命名的模組。\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      更新 <module> 以便將 <package> 開啟至\n                      <target-module>，不論模組宣告為何。\n    --illegal-access=<value>\n                      允許或拒絕未命名模組中的程式碼對已命名模組中的\n                      類型成員進行存取。\n                      <value> 為 \"deny\"、\"permit\"、\"warn\" 或 \"debug\" "
				"其中之一\n                      此選項將在未來版本中移除。\n    --limit-modules <module name>[,<module name>...]\n                      限制可監測模組的範圍\n    --patch-module <module>=<file>({0}<file>)*\n                      覆寫或加強含有 JAR 檔案或目錄中\n                      類別和資源的模組。\n    --disable-@files  停用進一步的引數檔案擴充\n\n上述的額外選項若有變更不另行通知。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"錯誤: 找不到或無法載入主要類別 {0}\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"錯誤: 主要方法不是類別 {1} 中的 {0}，請定義主要方法為:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"錯誤: 主要方法必須傳回類別 {0} 中 void 類型的值，\n請定義主要方法為:\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"錯誤: 在類別 {0} 中找不到主要方法，請定義主要方法為:\n   public static void main(String[] args)\n或者 JavaFX 應用程式類別必須擴充 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"錯誤: 遺漏執行此應用程式所需的 JavaFX 程式實際執行元件"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"錯誤: 載入主要類別 {0} 時發生 LinkageError\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"錯誤: 無法起始主要類別 {0}\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"初始化錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"錯誤: 嘗試開啟檔案 {0} 時發生未預期的錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"在 {0} 中找不到資訊清單"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"{0} 中沒有主要資訊清單屬性"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of(u"載入 {0} 中的 Java 代理程式時發生錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"錯誤: JavaFX launchApplication 方法的簽章錯誤，它\n必須宣告為靜態並傳回 void 類型的值"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"模組 {0} 不含 MainClass 屬性，請使用 -m <module>/<main-class>"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"錯誤: 找不到或無法載入模組 {1} 中的主要類別 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"錯誤: 無法載入模組 {1} 中的主要類別 {0}\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"找不到 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"錯誤: 無法起始模組 {1} 中的主要類別 {0}\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <目錄和 zip/jar 檔案的類別搜尋路徑>\n    -classpath <目錄和 zip/jar 檔案的類別搜尋路徑>\n    --class-path <目錄和 zip/jar 檔案的類別搜尋路徑>\n                  以 {0} 區隔的目錄、JAR 存檔\n                  以及 ZIP 存檔清單 (將於其中搜尋類別檔案)。\n    -p <模組路徑>\n    --module-path <模組路徑>...\n                  以 {0} 區隔的目錄清單，每個目錄\n                  都是一個模組目錄。\n    --upgrade-module-path <模組路徑>...\n                  以 {0} 區隔的目錄清單，每個目錄\n                  都是一個模組目錄，當中的模組可取代可升級\n                  模組 (在程式實際執行影像中)\n    --add-modules <module name>[,<module name>...]\n                  除了起始模組之外，要解析的根模組。\n                  <module name> 也可以是 ALL-DEFAULT、ALL-SYSTEM、\n                  ALL-MODULE-PATH.\n    --list-modules\n                  列出可監測的模組並結束\n    -d <模組名稱>\n    --describe-module <模組名稱>\n                  描述模組並結束\n    --dry-run     建立 VM 並載入主要類別，但不執行主要方法。\n                  --dry-run 選項適合用在驗證\n                  像模組系統組態的命令行選項。\n    --validate-modules\n                  驗證所有模組並結束\n                  --validate-modules 選項適合用在尋找\n                  模組路徑上之模組的衝突和其他錯誤。\n    -D<name>=<value>\n           "
				"       設定系統特性\n    -verbose:[class|module|gc|jni]\n                  啟用詳細資訊輸出\n    -version      在錯誤串流印出產品版本並結束\n    --version      在輸出串流印出產品版本並結束\n    -showversion  在錯誤串流印出產品版本並繼續進行作業\n    --show-version\n                  在輸出串流印出產品版本並繼續進行作業\n    --show-module-resolution\n                  在啟動時顯示模組解析輸出\n    -? -h -help\n                  在錯誤串流印出此說明訊息\n    --help        在輸出串流印出此說明訊息\n    -X            在錯誤串流印出額外選項的說明\n    --help-extra  在輸出串流印出額外選項的說明\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  啟用指定之詳細程度的宣告\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  停用指定之詳細程度的宣告\n    -esa | -enablesystemassertions\n                啟用系統宣告\n    -dsa | -disablesystemassertions\n                  停用系統宣告\n    -agentlib:<libname>[=<options>]\n                  載入原生代理程式程式庫 <libname>，例如 -agentlib:jdwp\n                  另請參閱 -agentlib:jdwp=help\n    -agentpath:<pathname>[=<options>]\n                  依完整路徑名稱載入原生代理程式程式庫\n  "
				"  -javaagent:<jarpath>[=<options>]\n                  載入 Java 程式語言代理程式，請參閱 java.lang.instrument\n    -splash:<imagepath>\n                  顯示含指定影像的軟體資訊畫面\n                  系統會自動支援並使用 HiDPI 縮放的影像\n                  (若有的話)。未縮放影像檔案名稱 (例如 image.ext)\n                  應一律以引數的形式傳送給 -splash 選項。\n                  系統將會自動選擇使用最適合的縮放影像\n                  。\n                  請參閱 SplashScreen API 文件瞭解詳細資訊。\n    @argument files\n                  一或多個包含選項的引數檔案\n    -disable-@files\n                  停用進一步的引數檔案擴充\n若要指定長選項的引數，可以使用 --<name>=<value> 或\n--<name> <value>。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"用法: {0} [options] <mainclass> [args...]\n           (用於執行類別)\n   或者  {0} [options] -jar <jarfile> [args...]\n           (用於執行 jar 檔案)\n   或者  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (用於執行模組中的主要類別)\n\n 主要類別、-jar <jarfile>、-m 或 --module <module>/<mainclass>\n 之後的引數會當成引數傳送至主要類別。\n\n 其中選項包括:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  是 \"{1}\" VM 的同義字  [已不再使用]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  選取 \"{1}\" VM\n"_s)
		})
	});
}

launcher_zh_HK::launcher_zh_HK() {
}

$Class* launcher_zh_HK::load$($String* name, bool initialize) {
	$loadClass(launcher_zh_HK, name, initialize, &_launcher_zh_HK_ClassInfo_, allocate$launcher_zh_HK);
	return class$;
}

$Class* launcher_zh_HK::class$ = nullptr;

		} // resources
	} // launcher
} // sun