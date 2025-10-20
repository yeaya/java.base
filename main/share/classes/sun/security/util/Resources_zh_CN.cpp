#include <sun/security/util/Resources_zh_CN.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Resources_zh_CN_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_CN, contents)},
	{}
};

$MethodInfo _Resources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_zh_CN::*)()>(&Resources_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_zh_CN_FieldInfo_,
	_Resources_zh_CN_MethodInfo_
};

$Object* allocate$Resources_zh_CN($Class* clazz) {
	return $of($alloc(Resources_zh_CN));
}

$ObjectArray2* Resources_zh_CN::contents = nullptr;

void Resources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_CN::getContents() {
	return Resources_zh_CN::contents;
}

void clinit$Resources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"\u65e0\u6548\u7684\u7a7a\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"\u64cd\u4f5c\u53ea\u80fd\u4e3a \'\u8bfb\u53d6\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"\u6743\u9650\u540d\u79f0 [{0}] \u8bed\u6cd5\u65e0\u6548: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"\u8eab\u4efd\u8bc1\u660e\u7c7b\u540e\u9762\u672a\u8ddf\u968f\u4e3b\u7528\u6237\u7c7b\u53ca\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"\u4e3b\u7528\u6237\u7c7b\u540e\u9762\u672a\u8ddf\u968f\u4e3b\u7528\u6237\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of(u"\u4e3b\u7528\u6237\u540d\u79f0\u5fc5\u987b\u653e\u5728\u5f15\u53f7\u5185"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of(u"\u4e3b\u7528\u6237\u540d\u79f0\u7f3a\u5c11\u53f3\u5f15\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"\u5982\u679c\u4e3b\u7528\u6237\u540d\u79f0\u4e0d\u662f\u901a\u914d\u7b26 (*) \u503c, \u90a3\u4e48 PrivateCredentialPermission \u4e3b\u7528\u6237\u7c7b\u4e0d\u80fd\u662f\u901a\u914d\u7b26 (*) \u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of(u"CredOwner:\n\t\u4e3b\u7528\u6237\u7c7b = {0}\n\t\u4e3b\u7528\u6237\u540d\u79f0 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of(u"\u63d0\u4f9b\u7684\u540d\u79f0\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of(u"\u63d0\u4f9b\u7684\u5173\u952e\u5b57\u6620\u5c04\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of(u"\u63d0\u4f9b\u7684 OID \u6620\u5c04\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"\u63d0\u4f9b\u4e86\u65e0\u6548\u7684\u7a7a AccessControlContext"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"\u63d0\u4f9b\u4e86\u65e0\u6548\u7684\u7a7a\u64cd\u4f5c"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"\u63d0\u4f9b\u4e86\u65e0\u6548\u7684\u7a7a\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of(u"\u4e3b\u4f53: \n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of(u"\t\u4e3b\u7528\u6237: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\t\u516c\u5171\u8eab\u4efd\u8bc1\u660e: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\t\u65e0\u6cd5\u8bbf\u95ee\u4e13\u7528\u8eab\u4efd\u8bc1\u660e\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of(u"\t\u4e13\u7528\u8eab\u4efd\u8bc1\u660e: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\t\u65e0\u6cd5\u8bbf\u95ee\u4e13\u7528\u8eab\u4efd\u8bc1\u660e\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"\u4e3b\u4f53\u4e3a\u53ea\u8bfb"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"\u6b63\u5728\u5c1d\u8bd5\u5c06\u4e00\u4e2a\u975e java.security.Principal \u5b9e\u4f8b\u7684\u5bf9\u8c61\u6dfb\u52a0\u5230\u4e3b\u4f53\u7684\u4e3b\u7528\u6237\u96c6\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"\u6b63\u5728\u5c1d\u8bd5\u6dfb\u52a0\u4e00\u4e2a\u975e{0}\u5b9e\u4f8b\u7684\u5bf9\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"\u65e0\u6548\u7a7a\u8f93\u5165: \u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of(u"\u6ca1\u6709\u4e3a{0}\u914d\u7f6e LoginModules"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"\u63d0\u4f9b\u4e86\u65e0\u6548\u7684\u7a7a\u4e3b\u4f53"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"\u63d0\u4f9b\u4e86\u65e0\u6548\u7684\u7a7a CallbackHandler"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of(u"\u7a7a\u4e3b\u4f53 - \u5728\u767b\u5f55\u4e4b\u524d\u8c03\u7528\u4e86\u6ce8\u9500"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316 LoginModule, {0}, \u56e0\u4e3a\u5b83\u672a\u63d0\u4f9b\u4e00\u4e2a\u65e0\u53c2\u6570\u6784\u9020\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316 LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316 LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"\u65e0\u6cd5\u627e\u5230 LoginModule \u7c7b: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"\u65e0\u6cd5\u8bbf\u95ee LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"\u767b\u5f55\u5931\u8d25: \u5ffd\u7565\u6240\u6709\u6a21\u5757"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of(u"java.security.policy: \u89e3\u6790{0}\u65f6\u51fa\u9519:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: \u6dfb\u52a0\u6743\u9650{0}\u65f6\u51fa\u9519:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of(u"java.security.policy: \u6dfb\u52a0\u6761\u76ee\u65f6\u51fa\u9519:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"\u672a\u63d0\u4f9b\u522b\u540d ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"\u65e0\u6cd5\u5728\u522b\u540d {0} \u4e0a\u6267\u884c\u66ff\u4ee3"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"\u66ff\u4ee3\u503c{0}\u4e0d\u53d7\u652f\u6301"_s)
		}),
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("LPARAM"_s),
			$of("("_s)
		}),
		$$new($ObjectArray, {
			$of("RPARAM"_s),
			$of(")"_s)
		}),
		$$new($ObjectArray, {
			$of("type.can.t.be.null"_s),
			$of(u"\u7c7b\u578b\u4e0d\u80fd\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"\u4e0d\u6307\u5b9a\u5bc6\u94a5\u5e93\u65f6\u65e0\u6cd5\u6307\u5b9a keystorePasswordURL"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of(u"\u5e94\u4e3a\u5bc6\u94a5\u5e93\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"\u5e94\u4e3a\u5bc6\u94a5\u5e93\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"\u591a\u4e2a\u4ee3\u7801\u5e93\u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"\u591a\u4e2a SignedBy \u8868\u8fbe\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"\u5bc6\u94a5\u5e93\u57df\u540d\u91cd\u590d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"\u5bc6\u94a5\u5e93\u540d\u79f0\u91cd\u590d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of(u"SignedBy \u6709\u7a7a\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"\u6ca1\u6709\u901a\u914d\u7b26\u540d\u79f0, \u65e0\u6cd5\u4f7f\u7528\u901a\u914d\u7b26\u7c7b\u6307\u5b9a\u4e3b\u7528\u6237"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of(u"\u5e94\u4e3a codeBase, SignedBy \u6216\u4e3b\u7528\u6237"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"\u5e94\u4e3a\u6743\u9650\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"\u7f16\u53f7 "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of(u"\u5e94\u4e3a [{0}], \u8bfb\u53d6\u7684\u662f [\u6587\u4ef6\u7ed3\u5c3e]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of(u"\u5e94\u4e3a [;], \u8bfb\u53d6\u7684\u662f [\u6587\u4ef6\u7ed3\u5c3e]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of(u"\u5217{0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of(u"\u884c\u53f7 {0}: \u5e94\u4e3a [{1}], \u627e\u5230 [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of(u"principalClass \u6216 principalName \u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of(u"PKCS11 \u6807\u8bb0 [{0}] \u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316\u57fa\u4e8e\u4e3b\u9898\u7684\u7b56\u7565"_s)
		})
	}));
}

Resources_zh_CN::Resources_zh_CN() {
}

$Class* Resources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(Resources_zh_CN, name, initialize, &_Resources_zh_CN_ClassInfo_, clinit$Resources_zh_CN, allocate$Resources_zh_CN);
	return class$;
}

$Class* Resources_zh_CN::class$ = nullptr;

		} // util
	} // security
} // sun