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

$FieldInfo _AuthResources_pt_BR_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthResources_pt_BR, contents)},
	{}
};

$MethodInfo _AuthResources_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthResources_pt_BR::*)()>(&AuthResources_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthResources_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.AuthResources_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	_AuthResources_pt_BR_FieldInfo_,
	_AuthResources_pt_BR_MethodInfo_
};

$Object* allocate$AuthResources_pt_BR($Class* clazz) {
	return $of($alloc(AuthResources_pt_BR));
}

$ObjectArray2* AuthResources_pt_BR::contents = nullptr;

void AuthResources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* AuthResources_pt_BR::getContents() {
	return AuthResources_pt_BR::contents;
}

void clinit$AuthResources_pt_BR($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AuthResources_pt_BR::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.value"_s),
			$of(u"entrada nula inválida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTDomainPrincipal.name"_s),
			$of("NTDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTNumericCredential.name"_s),
			$of("NTNumericCredential: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.NTSid.value"_s),
			$of(u"Valor de NTSid inválido"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSid.name"_s),
			$of("NTSid: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidDomainPrincipal.name"_s),
			$of("NTSidDomainPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidGroupPrincipal.name"_s),
			$of("NTSidGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidPrimaryGroupPrincipal.name"_s),
			$of("NTSidPrimaryGroupPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTSidUserPrincipal.name"_s),
			$of("NTSidUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("NTUserPrincipal.name"_s),
			$of("NTUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Primary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Grupo Principal]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericGroupPrincipal.Supplementary.Group.name"_s),
			$of("UnixNumericGroupPrincipal [Grupo Complementar]: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixNumericUserPrincipal.name"_s),
			$of("UnixNumericUserPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("UnixPrincipal.name"_s),
			$of("UnixPrincipal: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Unable.to.properly.expand.config"_s),
			$of(u"Não é possível expandir corretamente {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.config.No.such.file.or.directory."_s),
			$of(u"{0} (tal arquivo ou diretório não existe)"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.No.such.file.or.directory"_s),
			$of(u"Erro de Configuração:\n\tNão há tal arquivo ou diretório"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Invalid.control.flag.flag"_s),
			$of(u"Erro de Configuração:\n\tFlag de controle inválido, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Can.not.specify.multiple.entries.for.appName"_s),
			$of(u"Erro de Configuração:\n\tNão é possível especificar várias entradas para {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.expected.expect.read.end.of.file."_s),
			$of(u"Erro de Configuração:\n\tesperado [{0}], lido [fim do arquivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect.found.value."_s),
			$of(u"Erro de Configuração:\n\tLinha {0}: esperada [{1}], encontrada [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.expected.expect."_s),
			$of(u"Erro de Configuração:\n\tLinha {0}: esperada [{1}]"_s)
		}),
		$$new($ObjectArray, {
			$of("Configuration.Error.Line.line.system.property.value.expanded.to.empty.value"_s),
			$of(u"Erro de Configuração:\n\tLinha {0}: propriedade do sistema [{1}] expandida para valor vazio"_s)
		}),
		$$new($ObjectArray, {
			$of("username."_s),
			$of(u"nome do usuário: "_s)
		}),
		$$new($ObjectArray, {
			$of("password."_s),
			$of("senha: "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.enter.keystore.information"_s),
			$of(u"Especifique as informações do armazenamento de chaves"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.alias."_s),
			$of("Alias do armazenamento de chaves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password."_s),
			$of("Senha do armazenamento de chaves: "_s)
		}),
		$$new($ObjectArray, {
			$of("Private.key.password.optional."_s),
			$of("Senha da chave privada (opcional): "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.username.defUsername."_s),
			$of(u"Nome do usuário de Kerberos [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Kerberos.password.for.username."_s),
			$of("Senha de Kerberos de {0}: "_s)
		})
	}));
}

AuthResources_pt_BR::AuthResources_pt_BR() {
}

$Class* AuthResources_pt_BR::load$($String* name, bool initialize) {
	$loadClass(AuthResources_pt_BR, name, initialize, &_AuthResources_pt_BR_ClassInfo_, clinit$AuthResources_pt_BR, allocate$AuthResources_pt_BR);
	return class$;
}

$Class* AuthResources_pt_BR::class$ = nullptr;

		} // util
	} // security
} // sun