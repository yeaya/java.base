#include <sun/security/util/AuthResources_zh_CN.h>
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

$ObjectArray2* AuthResources_zh_CN::contents = nullptr;

void AuthResources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_zh_CN::getContents() {
	return AuthResources_zh_CN::contents;
}

void AuthResources_zh_CN::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"无效的空输入: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTDomainPrincipal.name"_s,
			"NTDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTNumericCredential.name"_s,
			"NTNumericCredential: {0}"_s
		}),
		$$new($ObjectArray, {
			"Invalid.NTSid.value"_s,
			u"无效的 NTSid 值"_s
		}),
		$$new($ObjectArray, {
			"NTSid.name"_s,
			"NTSid: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidDomainPrincipal.name"_s,
			"NTSidDomainPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidGroupPrincipal.name"_s,
			"NTSidGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidPrimaryGroupPrincipal.name"_s,
			"NTSidPrimaryGroupPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTSidUserPrincipal.name"_s,
			"NTSidUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"NTUserPrincipal.name"_s,
			"NTUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Primary.Group.name"_s,
			u"UnixNumericGroupPrincipal [主组]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			u"UnixNumericGroupPrincipal [补充组]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericUserPrincipal.name"_s,
			"UnixNumericUserPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixPrincipal.name"_s,
			"UnixPrincipal: {0}"_s
		}),
		$$new($ObjectArray, {
			"Unable.to.properly.expand.config"_s,
			u"无法正确扩展{0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0} (没有这样的文件或目录)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"配置错误:\n\t没有此文件或目录"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"配置错误: \n\t无效的控制标记, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"配置错误:\n\t无法指定{0}的多个条目"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"配置错误: \n\t应为 [{0}], 读取的是 [文件结尾]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"配置错误: \n\t行 {0}: 应为 [{1}], 找到 [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"配置错误: \n\t行 {0}: 应为 [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"配置错误: \n\t行 {0}: 系统属性 [{1}] 扩展到空值"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"用户名: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			u"口令: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"请输入密钥库信息"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			u"密钥库别名: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			u"密钥库口令: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			u"私有密钥口令 (可选): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Kerberos 用户名 [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			u"{0}的 Kerberos 口令: "_s
		})
	}));
}

AuthResources_zh_CN::AuthResources_zh_CN() {
}

$Class* AuthResources_zh_CN::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_zh_CN, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_zh_CN, name, initialize, &classInfo$$, AuthResources_zh_CN::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_zh_CN);
	});
	return class$;
}

$Class* AuthResources_zh_CN::class$ = nullptr;

		} // util
	} // security
} // sun