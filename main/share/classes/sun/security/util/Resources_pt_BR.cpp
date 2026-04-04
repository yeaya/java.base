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

$ObjectArray2* Resources_pt_BR::contents = nullptr;

void Resources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_pt_BR::getContents() {
	return Resources_pt_BR::contents;
}

void Resources_pt_BR::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_pt_BR::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"invalid.null.input.s."_s,
			u"entrada(s) nula(s) inválida(s)"_s
		}),
		$$new($ObjectArray, {
			"actions.can.only.be.read."_s,
			u"as ações só podem ser \'lidas\'"_s
		}),
		$$new($ObjectArray, {
			"permission.name.name.syntax.invalid."_s,
			u"sintaxe inválida do nome da permissão [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s,
			u"Classe da Credencial não seguida por um Nome e uma Classe do Principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Class.not.followed.by.a.Principal.Name"_s,
			u"Classe do Principal não seguida por um Nome do Principal"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.must.be.surrounded.by.quotes"_s,
			"O Nome do Principal deve estar entre aspas"_s
		}),
		$$new($ObjectArray, {
			"Principal.Name.missing.end.quote"_s,
			"Faltam as aspas finais no Nome do Principal"_s
		}),
		$$new($ObjectArray, {
			"PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s,
			u"A Classe do Principal PrivateCredentialPermission não pode ser um valor curinga (*) se o Nome do Principal não for um valor curinga (*)"_s
		}),
		$$new($ObjectArray, {
			"CredOwner.Principal.Class.class.Principal.Name.name"_s,
			"CredOwner:\n\tClasse do Principal = {0}\n\tNome do Principal = {1}"_s
		}),
		$$new($ObjectArray, {
			"provided.null.name"_s,
			"nome nulo fornecido"_s
		}),
		$$new($ObjectArray, {
			"provided.null.keyword.map"_s,
			"mapa de palavra-chave nulo fornecido"_s
		}),
		$$new($ObjectArray, {
			"provided.null.OID.map"_s,
			"mapa OID nulo fornecido"_s
		}),
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.AccessControlContext.provided"_s,
			u"AccessControlContext nulo inválido fornecido"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.action.provided"_s,
			u"ação nula inválida fornecida"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Class.provided"_s,
			u"Classe nula inválida fornecida"_s
		}),
		$$new($ObjectArray, {
			"Subject."_s,
			"Assunto:\n"_s
		}),
		$$new($ObjectArray, {
			".Principal."_s,
			"\tPrincipal: "_s
		}),
		$$new($ObjectArray, {
			".Public.Credential."_s,
			u"\tCredencial Pública: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credentials.inaccessible."_s,
			u"\tCredenciais Privadas inacessíveis\n"_s
		}),
		$$new($ObjectArray, {
			".Private.Credential."_s,
			"\tCredencial Privada: "_s
		}),
		$$new($ObjectArray, {
			".Private.Credential.inaccessible."_s,
			u"\tCredencial Privada inacessível\n"_s
		}),
		$$new($ObjectArray, {
			"Subject.is.read.only"_s,
			u"O Assunto é somente para leitura"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s,
			u"tentativa de adicionar um objeto que não é uma instância de java.security.Principal a um conjunto de principais do Subject"_s
		}),
		$$new($ObjectArray, {
			"attempting.to.add.an.object.which.is.not.an.instance.of.class"_s,
			u"tentativa de adicionar um objeto que não é uma instância de {0}"_s
		}),
		$$new($ObjectArray, {
			"LoginModuleControlFlag."_s,
			"LoginModuleControlFlag: "_s
		}),
		$$new($ObjectArray, {
			"Invalid.null.input.name"_s,
			u"Entrada nula inválida: nome"_s
		}),
		$$new($ObjectArray, {
			"No.LoginModules.configured.for.name"_s,
			"Nenhum LoginModule configurado para {0}"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.Subject.provided"_s,
			u"Subject nulo inválido fornecido"_s
		}),
		$$new($ObjectArray, {
			"invalid.null.CallbackHandler.provided"_s,
			u"CallbackHandler nulo inválido fornecido"_s
		}),
		$$new($ObjectArray, {
			"null.subject.logout.called.before.login"_s,
			"Subject nulo - log-out chamado antes do log-in"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule.module.because.it.does.not.provide.a.no.argument.constructor"_s,
			u"não é possível instanciar LoginModule, {0}, porque ele não fornece um construtor sem argumento"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule"_s,
			u"não é possível instanciar LoginModule"_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.LoginModule."_s,
			u"não é possível instanciar LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.find.LoginModule.class."_s,
			u"não é possível localizar a classe LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.access.LoginModule."_s,
			u"não é possível acessar LoginModule: "_s
		}),
		$$new($ObjectArray, {
			"Login.Failure.all.modules.ignored"_s,
			u"Falha de Log-in: todos os módulos ignorados"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.parsing.policy.message"_s,
			"java.security.policy: erro durante o parsing de {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Permission.perm.message"_s,
			u"java.security.policy: erro ao adicionar a permissão, {0}:\n\t{1}"_s
		}),
		$$new($ObjectArray, {
			"java.security.policy.error.adding.Entry.message"_s,
			"java.security.policy: erro ao adicionar a Entrada:\n\t{0}"_s
		}),
		$$new($ObjectArray, {
			"alias.name.not.provided.pe.name."_s,
			u"nome de alias não fornecido ({0})"_s
		}),
		$$new($ObjectArray, {
			"unable.to.perform.substitution.on.alias.suffix"_s,
			u"não é possível realizar a substituição no alias, {0}"_s
		}),
		$$new($ObjectArray, {
			"substitution.value.prefix.unsupported"_s,
			u"valor da substituição, {0}, não suportado"_s
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
			u"o tipo não pode ser nulo"_s
		}),
		$$new($ObjectArray, {
			"keystorePasswordURL.can.not.be.specified.without.also.specifying.keystore"_s,
			u"keystorePasswordURL não pode ser especificado sem que a área de armazenamento de chaves também seja especificada"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.type"_s,
			"tipo de armazenamento de chaves esperado"_s
		}),
		$$new($ObjectArray, {
			"expected.keystore.provider"_s,
			u"fornecedor da área de armazenamento de chaves esperado"_s
		}),
		$$new($ObjectArray, {
			"multiple.Codebase.expressions"_s,
			u"várias expressões CodeBase"_s
		}),
		$$new($ObjectArray, {
			"multiple.SignedBy.expressions"_s,
			u"várias expressões SignedBy"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.domain.name"_s,
			u"nome do domínio da área de armazenamento de teclas duplicado: {0}"_s
		}),
		$$new($ObjectArray, {
			"duplicate.keystore.name"_s,
			u"nome da área de armazenamento de chaves duplicado: {0}"_s
		}),
		$$new($ObjectArray, {
			"SignedBy.has.empty.alias"_s,
			"SignedBy tem alias vazio"_s
		}),
		$$new($ObjectArray, {
			"can.not.specify.Principal.with.a.wildcard.class.without.a.wildcard.name"_s,
			u"não é possível especificar um principal com uma classe curinga sem um nome curinga"_s
		}),
		$$new($ObjectArray, {
			"expected.codeBase.or.SignedBy.or.Principal"_s,
			"CodeBase ou SignedBy ou Principal esperado"_s
		}),
		$$new($ObjectArray, {
			"expected.permission.entry"_s,
			u"entrada de permissão esperada"_s
		}),
		$$new($ObjectArray, {
			"number."_s,
			u"número "_s
		}),
		$$new($ObjectArray, {
			"expected.expect.read.end.of.file."_s,
			"esperado [{0}], lido [fim do arquivo]"_s
		}),
		$$new($ObjectArray, {
			"expected.read.end.of.file."_s,
			"esperado [;], lido [fim do arquivo]"_s
		}),
		$$new($ObjectArray, {
			"line.number.msg"_s,
			"linha {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"line.number.expected.expect.found.actual."_s,
			"linha {0}: esperada [{1}], encontrada [{2}]"_s
		}),
		$$new($ObjectArray, {
			"null.principalClass.or.principalName"_s,
			"principalClass ou principalName nulo"_s
		}),
		$$new($ObjectArray, {
			"PKCS11.Token.providerName.Password."_s,
			"Senha PKCS11 de Token [{0}]: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.Subject.based.policy"_s,
			u"não é possível instanciar a política com base em Subject"_s
		})
	}));
}

Resources_pt_BR::Resources_pt_BR() {
}

$Class* Resources_pt_BR::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_pt_BR, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.Resources_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_pt_BR, name, initialize, &classInfo$$, Resources_pt_BR::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_pt_BR);
	});
	return class$;
}

$Class* Resources_pt_BR::class$ = nullptr;

		} // util
	} // security
} // sun