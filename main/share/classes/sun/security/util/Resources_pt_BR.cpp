#include <sun/security/util/Resources_pt_BR.h>

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

$FieldInfo _Resources_pt_BR_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_pt_BR, contents)},
	{}
};

$MethodInfo _Resources_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_pt_BR::*)()>(&Resources_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.Resources_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_pt_BR_FieldInfo_,
	_Resources_pt_BR_MethodInfo_
};

$Object* allocate$Resources_pt_BR($Class* clazz) {
	return $of($alloc(Resources_pt_BR));
}

$ObjectArray2* Resources_pt_BR::contents = nullptr;

void Resources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_pt_BR::getContents() {
	return Resources_pt_BR::contents;
}

void clinit$Resources_pt_BR($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_pt_BR::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("invalid.null.input.s."_s),
			$of(u"entrada(s) nula(s) inv\u00e1lida(s)"_s)
		}),
		$$new($ObjectArray, {
			$of("actions.can.only.be.read."_s),
			$of(u"as a\u00e7\u00f5es s\u00f3 podem ser \'lidas\'"_s)
		}),
		$$new($ObjectArray, {
			$of("permission.name.name.syntax.invalid."_s),
			$of(u"sintaxe inv\u00e1lida do nome da permiss\u00e3o [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s),
			$of(u"Classe da Credencial n\u00e3o seguida por um Nome e uma Classe do Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Class.not.followed.by.a.Principal.Name"_s),
			$of(u"Classe do Principal n\u00e3o seguida por um Nome do Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.must.be.surrounded.by.quotes"_s),
			$of("O Nome do Principal deve estar entre aspas"_s)
		}),
		$$new($ObjectArray, {
			$of("Principal.Name.missing.end.quote"_s),
			$of("Faltam as aspas finais no Nome do Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s),
			$of(u"A Classe do Principal PrivateCredentialPermission n\u00e3o pode ser um valor curinga (*) se o Nome do Principal n\u00e3o for um valor curinga (*)"_s)
		}),
		$$new($ObjectArray, {
			$of("CredOwner.Principal.Class.class.Principal.Name.name"_s),
			$of("CredOwner:\n\tClasse do Principal = {0}\n\tNome do Principal = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.name"_s),
			$of("nome nulo fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.keyword.map"_s),
			$of("mapa de palavra-chave nulo fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("provided.null.OID.map"_s),
			$of("mapa OID nulo fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.AccessControlContext.provided"_s),
			$of(u"AccessControlContext nulo inv\u00e1lido fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.action.provided"_s),
			$of(u"a\u00e7\u00e3o nula inv\u00e1lida fornecida"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Class.provided"_s),
			$of(u"Classe nula inv\u00e1lida fornecida"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject."_s),
			$of("Assunto:\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Principal."_s),
			$of("\tPrincipal: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Public.Credential."_s),
			$of(u"\tCredencial P\u00fablica: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credentials.inaccessible."_s),
			$of(u"\tCredenciais Privadas inacess\u00edveis\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential."_s),
			$of("\tCredencial Privada: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Private.Credential.inaccessible."_s),
			$of(u"\tCredencial Privada inacess\u00edvel\n"_s)
		}),
		$$new($ObjectArray, {
			$of("Subject.is.read.only"_s),
			$of(u"O Assunto \u00e9 somente para leitura"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s),
			$of(u"tentativa de adicionar um objeto que n\u00e3o \u00e9 uma inst\u00e2ncia de java.security.Principal a um conjunto de principais do Subject"_s)
		}),
		$$new($ObjectArray, {
			$of("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s),
			$of(u"tentativa de adicionar um objeto que n\u00e3o \u00e9 uma inst\u00e2ncia de {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("LoginModuleControlFlag."_s),
			$of("LoginModuleControlFlag: "_s)
		}),
		$$new($ObjectArray, {
			$of("Invalid.null.input.name"_s),
			$of(u"Entrada nula inv\u00e1lida: nome"_s)
		}),
		$$new($ObjectArray, {
			$of("No.LoginModules.configured.for.name"_s),
			$of("Nenhum LoginModule configurado para {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.Subject.provided"_s),
			$of(u"Subject nulo inv\u00e1lido fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.null.CallbackHandler.provided"_s),
			$of(u"CallbackHandler nulo inv\u00e1lido fornecido"_s)
		}),
		$$new($ObjectArray, {
			$of("null.subject.logout.called.before.login"_s),
			$of("Subject nulo - log-out chamado antes do log-in"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel instanciar LoginModule, {0}, porque ele n\u00e3o fornece um construtor sem argumento"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel instanciar LoginModule"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.LoginModule."_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel instanciar LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.find.LoginModule.class."_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel localizar a classe LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.access.LoginModule."_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel acessar LoginModule: "_s)
		}),
		$$new($ObjectArray, {
			$of("Login.Failure.all.modules.ignored"_s),
			$of(u"Falha de Log-in: todos os m\u00f3dulos ignorados"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.parsing.policy.message"_s),
			$of("java.security.policy: erro durante o parsing de {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Permission.perm.message"_s),
			$of(u"java.security.policy: erro ao adicionar a permiss\u00e3o, {0}:\n\t{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.policy.error.adding.Entry.message"_s),
			$of("java.security.policy: erro ao adicionar a Entrada:\n\t{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.not.provided.pe.name."_s),
			$of(u"nome de alias n\u00e3o fornecido ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.perform.substitution.on.alias.suffix"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel realizar a substitui\u00e7\u00e3o no alias, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("substitution.value.prefix.unsupported"_s),
			$of(u"valor da substitui\u00e7\u00e3o, {0}, n\u00e3o suportado"_s)
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
			$of(u"o tipo n\u00e3o pode ser nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s),
			$of(u"keystorePasswordURL n\u00e3o pode ser especificado sem que a \u00e1rea de armazenamento de chaves tamb\u00e9m seja especificada"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.type"_s),
			$of("tipo de armazenamento de chaves esperado"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.keystore.provider"_s),
			$of(u"fornecedor da \u00e1rea de armazenamento de chaves esperado"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.Codebase.expressions"_s),
			$of(u"v\u00e1rias express\u00f5es CodeBase"_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.SignedBy.expressions"_s),
			$of(u"v\u00e1rias express\u00f5es SignedBy"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.domain.name"_s),
			$of(u"nome do dom\u00ednio da \u00e1rea de armazenamento de teclas duplicado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("duplicate.keystore.name"_s),
			$of(u"nome da \u00e1rea de armazenamento de chaves duplicado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("SignedBy.has.empty.alias"_s),
			$of("SignedBy tem alias vazio"_s)
		}),
		$$new($ObjectArray, {
			$of("can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel especificar um principal com uma classe curinga sem um nome curinga"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.codeBase.or.SignedBy.or.Principal"_s),
			$of("CodeBase ou SignedBy ou Principal esperado"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.permission.entry"_s),
			$of(u"entrada de permiss\u00e3o esperada"_s)
		}),
		$$new($ObjectArray, {
			$of("number."_s),
			$of(u"n\u00famero "_s)
		}),
		$$new($ObjectArray, {
			$of("expected.expect.read.end.of.file."_s),
			$of("esperado [{0}], lido [fim do arquivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("expected.read.end.of.file."_s),
			$of("esperado [;], lido [fim do arquivo]"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.msg"_s),
			$of("linha {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("line.number.expected.expect.found.actual."_s),
			$of("linha {0}: esperada [{1}], encontrada [{2}]"_s)
		}),
		$$new($ObjectArray, {
			$of("null.principalClass.or.principalName"_s),
			$of("principalClass ou principalName nulo"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS11.Token.providerName.Password."_s),
			$of("Senha PKCS11 de Token [{0}]: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.Subject.based.policy"_s),
			$of(u"n\u00e3o \u00e9 poss\u00edvel instanciar a pol\u00edtica com base em Subject"_s)
		})
	}));
}

Resources_pt_BR::Resources_pt_BR() {
}

$Class* Resources_pt_BR::load$($String* name, bool initialize) {
	$loadClass(Resources_pt_BR, name, initialize, &_Resources_pt_BR_ClassInfo_, clinit$Resources_pt_BR, allocate$Resources_pt_BR);
	return class$;
}

$Class* Resources_pt_BR::class$ = nullptr;

		} // util
	} // security
} // sun