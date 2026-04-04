#include <sun/security/util/Resources_zh_CN.h>
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

$ObjectArray2* Resources_zh_CN::contents = nullptr;

void Resources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_CN::getContents() {
	return Resources_zh_CN::contents;
}

void Resources_zh_CN::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"无效的空输入"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"操作只能为 \'读取\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"权限名称 [{0}] 语法无效: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"身份证明类后面未跟随主用户类及名称"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"主用户类后面未跟随主用户名称"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			u"主用户名称必须放在引号内"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			u"主用户名称缺少右引号"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"如果主用户名称不是通配符 (*) 值, 那么 PrivateCredentialPermission 主用户类不能是通配符 (*) 值"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			u"CredOwner:\n\t主用户类 = {0}\n\t主用户名称 = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			u"提供的名称为空值"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			u"提供的关键字映射为空值"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			u"提供的 OID 映射为空值"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"提供了无效的空 AccessControlContext"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"提供了无效的空操作"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"提供了无效的空类"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			u"主体: \n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			u"\t主用户: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\t公共身份证明: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\t无法访问专用身份证明\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			u"\t专用身份证明: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\t无法访问专用身份证明\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"主体为只读"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"正在尝试将一个非 java.security.Principal 实例的对象添加到主体的主用户集中"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"正在尝试添加一个非{0}实例的对象"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"无效空输入: 名称"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			u"没有为{0}配置 LoginModules"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"提供了无效的空主体"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"提供了无效的空 CallbackHandler"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			u"空主体 - 在登录之前调用了注销"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"无法实例化 LoginModule, {0}, 因为它未提供一个无参数构造器"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			u"无法实例化 LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"无法实例化 LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			u"无法找到 LoginModule 类: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"无法访问 LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"登录失败: 忽略所有模块"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			u"java.security.policy: 解析{0}时出错:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: 添加权限{0}时出错:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			u"java.security.policy: 添加条目时出错:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			u"未提供别名 ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"无法在别名 {0} 上执行替代"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"替代值{0}不受支持"_s
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
			u"类型不能为空值"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"不指定密钥库时无法指定 keystorePasswordURL"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			u"应为密钥库类型"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"应为密钥库提供方"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"多个代码库表达式"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"多个 SignedBy 表达式"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"密钥库域名重复: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"密钥库名称重复: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			u"SignedBy 有空别名"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"没有通配符名称, 无法使用通配符类指定主用户"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			u"应为 codeBase, SignedBy 或主用户"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"应为权限条目"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"编号 "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			u"应为 [{0}], 读取的是 [文件结尾]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			u"应为 [;], 读取的是 [文件结尾]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			u"列{0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			u"行号 {0}: 应为 [{1}], 找到 [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			u"principalClass 或 principalName 为空值"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			u"PKCS11 标记 [{0}] 口令: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"无法实例化基于主题的策略"_s
		})
	}));
}

Resources_zh_CN::Resources_zh_CN() {
}

$Class* Resources_zh_CN::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_CN, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_zh_CN, name, initialize, &classInfo$$, Resources_zh_CN::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_zh_CN);
	});
	return class$;
}

$Class* Resources_zh_CN::class$ = nullptr;

		} // util
	} // security
} // sun