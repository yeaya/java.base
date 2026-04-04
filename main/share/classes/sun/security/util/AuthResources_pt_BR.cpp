#include <sun/security/util/AuthResources_pt_BR.h>
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

$ObjectArray2* AuthResources_pt_BR::contents = nullptr;

void AuthResources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_pt_BR::getContents() {
	return AuthResources_pt_BR::contents;
}

void AuthResources_pt_BR::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(AuthResources_pt_BR::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.value"_s,
			u"entrada nula inválida: {0}"_s
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
			u"Valor de NTSid inválido"_s
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
			"UnixNumericGroupPrincipal [Grupo Principal]: {0}"_s
		}),
		$$new($ObjectArray, {
			"UnixNumericGroupPrincipal.Supplementary.Group.name"_s,
			"UnixNumericGroupPrincipal [Grupo Complementar]: {0}"_s
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
			u"Não é possível expandir corretamente {0}"_s
		}),
		$$new($ObjectArray, {
			"extra.config.No.such.file.or.directory."_s,
			u"{0} (tal arquivo ou diretório não existe)"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.No.such.file.or.directory"_s,
			u"Erro de Configuração:\n\tNão há tal arquivo ou diretório"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Invalid.control.flag.flag"_s,
			u"Erro de Configuração:\n\tFlag de controle inválido, {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s,
			u"Erro de Configuração:\n\tNão é possível especificar várias entradas para {0}"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.expected.expect.read.end.of.file."_s,
			u"Erro de Configuração:\n\tesperado [{0}], lido [fim do arquivo]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect.found.value."_s,
			u"Erro de Configuração:\n\tLinha {0}: esperada [{1}], encontrada [{2}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.expected.expect."_s,
			u"Erro de Configuração:\n\tLinha {0}: esperada [{1}]"_s
		}),
		$$new($ObjectArray, {
			"Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s,
			u"Erro de Configuração:\n\tLinha {0}: propriedade do sistema [{1}] expandida para valor vazio"_s
		}),
		$$new($ObjectArray, {
			"username."_s,
			u"nome do usuário: "_s
		}),
		$$new($ObjectArray, {
			"password."_s,
			"senha: "_s
		}),
		$$new($ObjectArray, {
			"Please.enter.keystore.information"_s,
			u"Especifique as informações do armazenamento de chaves"_s
		}),
		$$new($ObjectArray, {
			"Keystore.alias."_s,
			"Alias do armazenamento de chaves: "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password."_s,
			"Senha do armazenamento de chaves: "_s
		}),
		$$new($ObjectArray, {
			"Private.key.password.optional."_s,
			"Senha da chave privada (opcional): "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.username.defUsername."_s,
			u"Nome do usuário de Kerberos [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Kerberos.password.for.username."_s,
			"Senha de Kerberos de {0}: "_s
		})
	}));
}

AuthResources_pt_BR::AuthResources_pt_BR() {
}

$Class* AuthResources_pt_BR::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_pt_BR, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthResources_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthResources_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.AuthResources_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthResources_pt_BR, name, initialize, &classInfo$$, AuthResources_pt_BR::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthResources_pt_BR);
	});
	return class$;
}

$Class* AuthResources_pt_BR::class$ = nullptr;

		} // util
	} // security
} // sun