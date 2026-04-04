#include <sun/security/util/Resources_zh_HK.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace util {

$ObjectArray2* Resources_zh_HK::contents = nullptr;

void Resources_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_HK::getContents() {
	return Resources_zh_HK::contents;
}

void Resources_zh_HK::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_zh_HK::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"無效空值輸入"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"動作只能被「讀取」"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"權限名稱 [{0}] 是無效的語法: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"Credential 類別後面不是 Principal 類別及名稱"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"Principal 類別後面不是 Principal 名稱"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"Principal 名稱必須以引號圈住"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			u"Principal 名稱缺少下引號"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"如果 Principal 名稱不是一個萬用字元 (*) 值，那麼 PrivateCredentialPermission Principal 類別就不能是萬用字元 (*) 值"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			u"CredOwner:\n\tPrincipal 類別 = {0}\n\tPrincipal 名稱 = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			u"提供空值名稱"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"提供空值關鍵字對映"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			u"提供空值 OID 對映"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"提供無效的空值 AccessControlContext"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"提供無效的空值動作"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"提供無效的空值類別"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			u"主題:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\t公用證明資料: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\t私人證明資料無法存取\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			u"\t私人證明資料: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\t私人證明資料無法存取\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"主題為唯讀"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"試圖新增一個非 java.security.Principal 執行處理的物件至主題的 Principal 群中"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"試圖新增一個非 {0} 執行處理的物件"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"無效空值輸入: 名稱"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"無針對 {0} 設定的 LoginModules"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"提供無效空值主題"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"提供無效空值 CallbackHandler"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"空值主題 - 在登入之前即呼叫登出"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"無法創設 LoginModule，{0}，因為它並未提供非引數的建構子"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			u"無法建立 LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"無法建立 LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			u"找不到 LoginModule 類別: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"無法存取 LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"登入失敗: 忽略所有模組"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			u"java.security.policy: 剖析錯誤 {0}: \n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: 新增權限錯誤 {0}: \n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: 新增項目錯誤: \n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			u"未提供別名名稱 ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"無法對別名執行替換，{0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"不支援的替換值，{0}"_s
		}),
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"LPARAM"_s,
			"("_s
		}),
		$$new($ObjectArray, {
			"RPARAM"_s,
			")"_s
		}),
		$$new($ObjectArray, {
			"type.can.t.be.null"_s,
			u"輸入不能為空值"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"指定 keystorePasswordURL 需要同時指定金鑰儲存庫"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"預期的金鑰儲存庫類型"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"預期的金鑰儲存庫提供者"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"多重 Codebase 表示式"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"多重 SignedBy 表示式"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"重複的金鑰儲存庫網域名稱: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"重複的金鑰儲存庫名稱: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedBy 有空別名"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"沒有萬用字元名稱，無法指定含有萬用字元類別的 Principal"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			u"預期的 codeBase 或 SignedBy 或 Principal"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"預期的權限項目"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"號碼 "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"預期的 [{0}], 讀取 [end of file]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"預期的 [;], 讀取 [end of file]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			u"行 {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"行 {0}: 預期的 [{1}]，發現 [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			u"空值 principalClass 或 principalName"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"PKCS11 記號 [{0}] 密碼: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"無法建立主題式的原則"_s
		})
	}));
}

Resources_zh_HK::Resources_zh_HK() {
}

$Class* Resources_zh_HK::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_HK, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_zh_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_zh_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_zh_HK",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_zh_HK, name, initialize, &classInfo$$, Resources_zh_HK::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_zh_HK);
	});
	return class$;
}

$Class* Resources_zh_HK::class$ = nullptr;

		} // util
	} // security
} // sun