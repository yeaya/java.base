#include <sun/launcher/resources/launcher_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace launcher {
		namespace resources {

$MethodInfo _launcher_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_ja::*)()>(&launcher_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.launcher.resources.launcher_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_ja_MethodInfo_
};

$Object* allocate$launcher_ja($Class* clazz) {
	return $of($alloc(launcher_ja));
}

void launcher_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("java.launcher.X.macosx.usage"_s),
			$of(u"\n次のオプションはmacOS固有です:\n    -XstartOnFirstThread\n                      main()メソッドを最初(AppKit)のスレッドで実行する\n    -Xdock:name=<application name>\n                      Dockに表示されるデフォルト・アプリケーション名をオーバーライドする\n    -Xdock:icon=<path to icon file>\n                      Dockに表示されるデフォルト・アイコンをオーバーライドする\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.X.usage"_s),
			$of(u"\n    -Xbatch           バックグラウンド・コンパイルを無効にします\n    -Xbootclasspath/a:<directories and zip/jar files separated by {0}>\n                      ブートストラップ・クラス・パスの最後に追加します\n    -Xcheck:jni       JNI関数に対する追加のチェックを実行します\n    -Xcomp            初回呼出し時にメソッドのコンパイルを強制します\n    -Xdebug           何も行いません。下位互換性のために用意されています。\n    -Xdiag            追加の診断メッセージを表示します\n    -Xfuture          将来のデフォルトを見越して、最も厳密なチェックを有効にします\n                      このオプションは非推奨であり、将来のリリースで削除される\n                      可能性があります。\n    -Xint             インタプリタ・モードの実行のみ\n    -Xinternalversion\n                      -versionオプションより詳細なJVMバージョン情報を\n                      表示します\n    -Xlog:<opts>      Java Virtual Machine (JVM)統合ロギング・フレームワークでの\n                      ロギングを構成または有効化します。詳細は、-Xlog:helpを\n                      使用してください。\n    -Xloggc:<file>    タイムスタンプが付いたファイルにGCステータスのログを記録します\n                      このオプションは非推奨であり、将来のリリースで削除される\n                      可能性があります。-Xlog:gc:<file>で置換されています。\n    -Xmixed           混合モードの実行(デフォルト)\n    -Xmn<size>        若い世代(ナーサリ)のヒープの初期サイズおよび最大サイズ\n  "
				"                    (バイト単位)を設定します\n    -Xms<size>        Javaの初期ヒープ・サイズを設定します\n    -Xmx<size>        Javaの最大ヒープ・サイズを設定します\n    -Xnoclassgc       クラスのガベージ・コレクションを無効にします\n    -Xrs              Java/VMによるOSシグナルの使用を削減します(ドキュメントを参照)\n    -Xshare:auto      可能であれば共有クラス・データを使用します(デフォルト)\n    -Xshare:off       共有クラス・データの使用を試みません\n    -Xshare:on        共有クラス・データの使用を必須にし、できなければ失敗します。\n                      これはテスト・オプションであり、断続的な失敗につながる\n                      可能性があります。本番環境では使用しないでください。\n    -XshowSettings    すべての設定を表示して続行します\n    -XshowSettings:all\n                      すべての設定を表示して続行します\n    -XshowSettings:locale\n                      すべてのロケール関連の設定を表示して続行します\n    -XshowSettings:properties\n                      すべてのプロパティ設定を表示して続行します\n    -XshowSettings:vm\n                      すべてのVM関連の設定を表示して続行します\n    -XshowSettings:system\n                      (Linuxのみ)ホスト・システムまたはコンテナを表示します\n                      構成して続行します\n    -Xss<size>        javaスレッドのスタック・サイズを設定します\n    -Xverify          バイトコード・ベリファイアのモードを設定します\n                      オプション-Xverify:none"
				"は非推奨になり、\n                      将来のリリースで削除される可能性があります。\n    --add-reads <module>=<target-module>(,<target-module>)*\n                      モジュール宣言に関係なく、<module>を更新して<target-module>を\n                      読み取ります。 \n                      <target-module>をALL-UNNAMEDに設定すると、すべての名前のないモジュールを\n                      読み取ることができます。\n    --add-exports <module>/<package>=<target-module>(,<target-module>)*\n                      モジュール宣言に関係なく、<module>を更新して<package>を<target-module>に\n                      エクスポートします。\n                      <target-module>をALL-UNNAMEDに設定すると、すべての名前のないモジュールに\n                      エクスポートできます。\n    --add-opens <module>/<package>=<target-module>(,<target-module>)*\n                      モジュール宣言に関係なく、<module>を更新して<package>を\n                      <target-module>に開きます。\n    --illegal-access=<value>\n                      名前のないモジュール内のコードによる、名前のあるモジュール内のタイプのメンバーへの不正アクセスを\n                      許可または拒否します。\n                      <value>は\"deny\"、\"permit\"、\"warn\"または\"debug\"のいずれかです\n                      このオプションは、将来のリリースで削除される"
				"予定です。\n    --limit-modules <module name>[,<module name>...]\n                      参照可能なモジュールの領域を制限します\n    --patch-module <module>=<file>({0}<file>)*\n                      JARファイルまたはディレクトリのクラスおよびリソースで\n                      モジュールをオーバーライドまたは拡張します。\n    --source <version>\n                      ソースファイル・モードでソースのバージョンを設定します。\n\nこの追加オプションは予告なしに変更されることがあります。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error1"_s),
			$of(u"エラー: メイン・クラス{0}を検出およびロードできませんでした\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error2"_s),
			$of(u"エラー: メイン・メソッドがクラス{1}の{0}ではありません。次のようにメイン・メソッドを定義してください。\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error3"_s),
			$of(u"エラー: メイン・メソッドはクラス{0}のvoid型の値を返す必要があります。\n次のようにメイン・メソッドを定義してください。\n   public static void main(String[] args)"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error4"_s),
			$of(u"エラー: メイン・メソッドがクラス{0}で見つかりません。次のようにメイン・メソッドを定義してください。\n   public static void main(String[] args)\nまたはJavaFXアプリケーション・クラスは{1}を拡張する必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error5"_s),
			$of(u"エラー: JavaFXランタイム・コンポーネントが不足しており、このアプリケーションの実行に必要です"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error6"_s),
			$of(u"エラー: メイン・クラス{0}のロード中にLinkageErrorが発生しました\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.cls.error7"_s),
			$of(u"エラー: メイン・クラス{0}を初期化できません\n原因: {1}: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.init.error"_s),
			$of(u"初期化エラー"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error1"_s),
			$of(u"エラー: ファイル{0}を開こうとしているときに、予期しないエラーが発生しました"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error2"_s),
			$of(u"{0}にマニフェストが見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error3"_s),
			$of(u"{0}にメイン・マニフェスト属性がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.jar.error4"_s),
			$of(u"{0}内のJavaエージェントのロード中にエラーが発生しました"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.javafx.error1"_s),
			$of(u"エラー: JavaFX launchApplicationメソッドに誤ったシグネチャがあり、\nstaticを宣言してvoid型の値を返す必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error1"_s),
			$of(u"モジュール{0}にModuleMainClass属性がありません。-m <module>/<main-class>を使用してください"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error2"_s),
			$of(u"エラー: モジュール{1}にメイン・クラス{0}が見つからなかったかロードできませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error3"_s),
			$of(u"エラー: モジュール{1}のメイン・クラス{0}をロードできません\n\t{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error4"_s),
			$of(u"{0}が見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.module.error5"_s),
			$of(u"エラー: モジュール{1}のメイン・クラス{0}を初期化できません\n原因: {2}: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.footer"_s),
			$of(u"    -cp <ディレクトリおよびzip/jarファイルのクラス検索パス>\n    -classpath <ディレクトリおよびzip/jarファイルのクラス検索パス>\n    --class-path <ディレクトリおよびzip/jarファイルのクラス検索パス>\n                  {0}区切りリスト(ディレクトリ、JARアーカイブ、\n                  ZIPアーカイブ)で、クラス・ファイルの検索用。\n    -p <module path>\n    --module-path <module path>...\n                  ディレクトリの{0}区切りリスト、各ディレクトリ\n                  はモジュールのディレクトリです。\n    --upgrade-module-path <module path>...\n                  ディレクトリの{0}区切りリスト、各ディレクトリ\n                  は、ランタイム・イメージ内のアップグレード可能な\n                  モジュールを置換するモジュールのディレクトリです\n    --add-modules <module name>[,<module name>...]\n                  初期モジュールに加えて解決するルート・モジュール。\n                  <module name>には次も指定できます: ALL-DEFAULT、ALL-SYSTEM、\n                  ALL-MODULE-PATH.\n    --list-modules\n                  参照可能なモジュールをリストし終了します\n    -d <module name>\n    --describe-module <module name>\n                  モジュールを説明し終了します\n    --dry-run     VMを作成しメイン・クラスをロードしますが、メイン・メソッドは実行しません。\n                  --dry-runオプションは、次の検証に役立つ場合があります:\n                  モジュール・システム構成などのコマンド行オプション。"
				"\n    --validate-modules\n                  すべてのモジュールを検証し終了します\n                  --validate-modulesオプションは、次の検索に役立つ場合があります:\n                  モジュール・パス上のモジュールでの競合およびその他のエラー。\n    -D<name>=<value>\n                  システム・プロパティを設定します\n    -verbose:[class|module|gc|jni]\n                  特定のサブシステムで詳細出力を有効にする\n    -version      製品バージョンをエラー・ストリームに出力して終了します\n    --version     製品バージョンを出力ストリームに出力して終了します\n    -showversion  製品バージョンをエラー・ストリームに出力して続行します\n    --show-version\n                  製品バージョンを出力ストリームに出力して続行します\n    --show-module-resolution\n                  起動時にモジュール解決出力を表示します\n    -? -h -help\n                  このヘルプ・メッセージをエラー・ストリームに出力します\n    --help        このヘルプ・メッセージを出力ストリームに出力します\n    -X            追加オプションのヘルプをエラー・ストリームに出力します\n    --help-extra  追加オプションのヘルプを出力ストリームに出力します\n    -ea[:<packagename>...|:<classname>]\n    -enableassertions[:<packagename>...|:<classname>]\n                  指定した粒度でアサーションを有効にします\n    -da[:<packagename>...|:<classname>]\n    -disableassertions[:<packagename>...|:<classname>]\n                  指定した粒度でアサーションを無効"
				"にします\n    -esa | -enablesystemassertions\n                  システム・アサーションを有効にします\n    -dsa | -disablesystemassertions\n                  システム・アサーションを無効にします\n    -agentlib:<libname>[=<options>]\n                  ネイティブ・エージェント・ライブラリ<libname>をロードします。例: -agentlib:jdwp\n                  -agentlib:jdwp=helpも参照してください\n    -agentpath:<pathname>[=<options>]\n                  フルパス名を使用して、ネイティブ・エージェント・ライブラリをロードします\n    -javaagent:<jarpath>[=<options>]\n                  Javaプログラミング言語エージェントをロードします。java.lang.instrumentを参照してください\n    -splash:<imagepath>\n                  指定されたイメージを含むスプラッシュ画面を表示します\n                  HiDPIスケールのイメージが自動的にサポートされて使用されます\n                  (可能な場合)。スケーリングされないイメージのファイル名(image.extなど)を\n                  引数として-splashオプションに必ず渡す必要があります。\n                  指定された最も適切なスケーリング済イメージが選択されます\n                  (自動的)。\n                  詳細は、SplashScreen APIのドキュメントを参照してください\n    @argumentファイル\n                  オプションを含む1つ以上の引数ファイル\n    -disable-@files\n                  さらなる引数ファイル拡張を無効にします\n    --enable-preview\n                  クラスをこ"
				"のリリースのプレビュー機能に依存させることができます\n長いオプションの引数を指定する場合、--<name>=<value>または\n--<name> <value>を使用できます。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.header"_s),
			$of(u"使用方法: {0} [options] <mainclass> [args...]\n           (クラスを実行する場合)\n   または  {0} [options] -jar <jarfile> [args...]\n           (jarファイルを実行する場合)\n   または  {0} [options] -m <module>[/<mainclass>] [args...]\n       {0} [options] --module <module>[/<mainclass>] [args...]\n           (モジュールのメイン・クラスを実行する場合)\n   または  {0} [options] <sourcefile> [args]\n           (単一のソースファイル・プログラムを実行する場合)\n\n メイン・クラス、ソース・ファイル、-jar <jarfile>、\n -mまたは--module <module>/<mainclass>に続く引数は、メイン・クラスへの引数として\n 渡されます。\n\n オプションは次のとおりです:\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.hotspot"_s),
			$of(u"    {0}\t  は\"{1}\" VMのシノニムです  [非推奨]\n"_s)
		}),
		$$new($ObjectArray, {
			$of("java.launcher.opt.vmselect"_s),
			$of(u"    {0}\t  \"{1}\" VMを選択する場合\n"_s)
		})
	});
}

launcher_ja::launcher_ja() {
}

$Class* launcher_ja::load$($String* name, bool initialize) {
	$loadClass(launcher_ja, name, initialize, &_launcher_ja_ClassInfo_, allocate$launcher_ja);
	return class$;
}

$Class* launcher_ja::class$ = nullptr;

		} // resources
	} // launcher
} // sun