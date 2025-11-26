#include <sun/security/tools/keytool/Resources_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _Resources_fr_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_fr, contents)},
	{}
};

$MethodInfo _Resources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_fr::*)()>(&Resources_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.keytool.Resources_fr",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_fr_FieldInfo_,
	_Resources_fr_MethodInfo_
};

$Object* allocate$Resources_fr($Class* clazz) {
	return $of($alloc(Resources_fr));
}

$ObjectArray2* Resources_fr::contents = nullptr;

void Resources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_fr::getContents() {
	return Resources_fr::contents;
}

void clinit$Resources_fr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NEWLINE"_s),
			$of("\n"_s)
		}),
		$$new($ObjectArray, {
			$of("STAR"_s),
			$of("*******************************************"_s)
		}),
		$$new($ObjectArray, {
			$of("STARNN"_s),
			$of("*******************************************\n\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".OPTION."_s),
			$of(" [OPTION]..."_s)
		}),
		$$new($ObjectArray, {
			$of("Options."_s),
			$of("Options :"_s)
		}),
		$$new($ObjectArray, {
			$of("option.1.set.twice"_s),
			$of(u"L\'option %s est sp\u00e9cifi\u00e9e plusieurs fois. Toutes les occurrences seront ignor\u00e9es, sauf la derni\u00e8re."_s)
		}),
		$$new($ObjectArray, {
			$of("multiple.commands.1.2"_s),
			$of(u"Une seule commande est autoris\u00e9e : %1$s et %2$s ont \u00e9t\u00e9 sp\u00e9cifi\u00e9es."_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.help.for.all.available.commands"_s),
			$of("Utiliser \"keytool -help\" pour toutes les commandes disponibles"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.and.Certificate.Management.Tool"_s),
			$of(u"Outil de gestion de certificats et de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Commands."_s),
			$of("Commandes :"_s)
		}),
		$$new($ObjectArray, {
			$of("Use.keytool.command.name.help.for.usage.of.command.name"_s),
			$of(u"Utilisez \"keytool -command_name -help\" pour la syntaxe de command_name.\nUtilisez l\'option -conf <url> pour indiquer un fichier d\'options pr\u00e9configur\u00e9es."_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.certificate.request"_s),
			$of(u"G\u00e9n\u00e8re une demande de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.an.entry.s.alias"_s),
			$of(u"Modifie l\'alias d\'une entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Deletes.an.entry"_s),
			$of(u"Supprime une entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Exports.certificate"_s),
			$of("Exporte le certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.key.pair"_s),
			$of(u"G\u00e9n\u00e8re une paire de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.secret.key"_s),
			$of(u"G\u00e9n\u00e8re une cl\u00e9 secr\u00e8te"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.certificate.from.a.certificate.request"_s),
			$of(u"G\u00e9n\u00e8re le certificat \u00e0 partir d\'une demande de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.CRL"_s),
			$of(u"G\u00e9n\u00e8re la liste des certificats r\u00e9voqu\u00e9s (CRL)"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keyAlgName.secret.key"_s),
			$of(u"Cl\u00e9 secr\u00e8te {0} g\u00e9n\u00e9r\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Generated.keysize.bit.keyAlgName.secret.key"_s),
			$of(u"Cl\u00e9 secr\u00e8te {0} bits {1} g\u00e9n\u00e9r\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s),
			$of(u"Importe les entr\u00e9es \u00e0 partir d\'une base de donn\u00e9es d\'identit\u00e9s de type JDK 1.1.x"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.certificate.or.a.certificate.chain"_s),
			$of(u"Importe un certificat ou une cha\u00eene de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.a.password"_s),
			$of("Importe un mot de passe"_s)
		}),
		$$new($ObjectArray, {
			$of("Imports.one.or.all.entries.from.another.keystore"_s),
			$of(u"Importe une entr\u00e9e ou la totalit\u00e9 des entr\u00e9es depuis un autre fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Clones.a.key.entry"_s),
			$of(u"Clone une entr\u00e9e de cl\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.key.password.of.an.entry"_s),
			$of(u"Modifie le mot de passe de cl\u00e9 d\'une entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Lists.entries.in.a.keystore"_s),
			$of(u"R\u00e9pertorie les entr\u00e9es d\'un fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate"_s),
			$of("Imprime le contenu d\'un certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.certificate.request"_s),
			$of("Imprime le contenu d\'une demande de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Prints.the.content.of.a.CRL.file"_s),
			$of(u"Imprime le contenu d\'un fichier de liste des certificats r\u00e9voqu\u00e9s (CRL)"_s)
		}),
		$$new($ObjectArray, {
			$of("Generates.a.self.signed.certificate"_s),
			$of(u"G\u00e9n\u00e8re un certificat auto-sign\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Changes.the.store.password.of.a.keystore"_s),
			$of(u"Modifie le mot de passe de banque d\'un fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.name.of.the.entry.to.process"_s),
			$of(u"nom d\'alias de l\'entr\u00e9e \u00e0 traiter"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.alias"_s),
			$of("alias de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.key.password"_s),
			$of(u"mot de passe de la cl\u00e9 de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.name"_s),
			$of(u"nom du fichier de cl\u00e9s de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password.protected"_s),
			$of(u"mot de passe du fichier de cl\u00e9s de destination prot\u00e9g\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.provider.name"_s),
			$of(u"nom du fournisseur du fichier de cl\u00e9s de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.password"_s),
			$of(u"mot de passe du fichier de cl\u00e9s de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("destination.keystore.type"_s),
			$of(u"type du fichier de cl\u00e9s de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("distinguished.name"_s),
			$of("nom distinctif"_s)
		}),
		$$new($ObjectArray, {
			$of("X.509.extension"_s),
			$of("extension X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("output.file.name"_s),
			$of("nom du fichier de sortie"_s)
		}),
		$$new($ObjectArray, {
			$of("input.file.name"_s),
			$of(u"nom du fichier d\'entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.algorithm.name"_s),
			$of(u"nom de l\'algorithme de cl\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password"_s),
			$of(u"mot de passe de la cl\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.size"_s),
			$of(u"taille en bits de la cl\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.name"_s),
			$of(u"nom du fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("access.the.cacerts.keystore"_s),
			$of(u"acc\u00e9der au fichier de cl\u00e9s cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.cacerts.option"_s),
			$of(u"Avertissement : utiliser l\'option -cacerts pour acc\u00e9der au fichier de cl\u00e9s cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of("new.password"_s),
			$of("nouveau mot de passe"_s)
		}),
		$$new($ObjectArray, {
			$of("do.not.prompt"_s),
			$of("ne pas inviter"_s)
		}),
		$$new($ObjectArray, {
			$of("password.through.protected.mechanism"_s),
			$of(u"mot de passe via m\u00e9canisme prot\u00e9g\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("addprovider.option"_s),
			$of(u"ajouter un fournisseur de s\u00e9curit\u00e9 par nom (par ex. SunPKCS11)\nconfigurer l\'argument pour -addprovider"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.option"_s),
			$of(u"ajouter un fournisseur de s\u00e9curit\u00e9 par nom de classe qualifi\u00e9 complet\nconfigurer l\'argument pour -providerclass"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name"_s),
			$of("nom du fournisseur"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.classpath"_s),
			$of("variable d\'environnement CLASSPATH du fournisseur"_s)
		}),
		$$new($ObjectArray, {
			$of("output.in.RFC.style"_s),
			$of("sortie au style RFC"_s)
		}),
		$$new($ObjectArray, {
			$of("signature.algorithm.name"_s),
			$of("nom de l\'algorithme de signature"_s)
		}),
		$$new($ObjectArray, {
			$of("source.alias"_s),
			$of("alias source"_s)
		}),
		$$new($ObjectArray, {
			$of("source.key.password"_s),
			$of(u"mot de passe de la cl\u00e9 source"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.name"_s),
			$of(u"nom du fichier de cl\u00e9s source"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password.protected"_s),
			$of(u"mot de passe du fichier de cl\u00e9s source prot\u00e9g\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.provider.name"_s),
			$of(u"nom du fournisseur du fichier de cl\u00e9s source"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.password"_s),
			$of(u"mot de passe du fichier de cl\u00e9s source"_s)
		}),
		$$new($ObjectArray, {
			$of("source.keystore.type"_s),
			$of(u"type du fichier de cl\u00e9s source"_s)
		}),
		$$new($ObjectArray, {
			$of("SSL.server.host.and.port"_s),
			$of(u"Port et h\u00f4te du serveur SSL"_s)
		}),
		$$new($ObjectArray, {
			$of("signed.jar.file"_s),
			$of(u"fichier JAR sign\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.validity.start.date.time"_s),
			$of(u"date/heure de d\u00e9but de validit\u00e9 du certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.password"_s),
			$of(u"mot de passe du fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.type"_s),
			$of(u"type du fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("trust.certificates.from.cacerts"_s),
			$of(u"certificats s\u00e9curis\u00e9s issus de certificats CA"_s)
		}),
		$$new($ObjectArray, {
			$of("verbose.output"_s),
			$of("sortie en mode verbose"_s)
		}),
		$$new($ObjectArray, {
			$of("validity.number.of.days"_s),
			$of(u"nombre de jours de validit\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Serial.ID.of.cert.to.revoke"_s),
			$of(u"ID de s\u00e9rie du certificat \u00e0 r\u00e9voquer"_s)
		}),
		$$new($ObjectArray, {
			$of("keytool.error."_s),
			$of("erreur keytool : "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of("Option non admise :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.value."_s),
			$of("Valeur non admise : "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of("Type de mot de passe inconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of("Variable d\'environnement introuvable : "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of("Fichier introuvable : "_s)
		}),
		$$new($ObjectArray, {
			$of("Command.option.flag.needs.an.argument."_s),
			$of("L\'\'option de commande {0} requiert un argument."_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s),
			$of(u"Avertissement\u00a0: les mots de passe de cl\u00e9 et de banque distincts ne sont pas pris en charge pour les fichiers de cl\u00e9s d\'\'acc\u00e8s PKCS12. La valeur {0} sp\u00e9cifi\u00e9e par l\'\'utilisateur est ignor\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s),
			$of(u"Les options -keystore ou -storetype ne peuvent pas \u00eatre utilis\u00e9es avec l\'option -cacerts"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-keystore doit \u00eatre d\u00e9fini sur NONE si -storetype est {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.retries.program.terminated"_s),
			$of("Trop de tentatives, fin du programme"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s),
			$of(u"Les commandes -storepasswd et -keypasswd ne sont pas prises en charge si -storetype est d\u00e9fini sur {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s),
			$of(u"Les commandes -keypasswd ne sont pas prises en charge si -storetype est d\u00e9fini sur PKCS12"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"Les commandes -keypass et -new ne peuvent pas \u00eatre sp\u00e9cifi\u00e9es si -storetype est d\u00e9fini sur {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"si -protected est sp\u00e9cifi\u00e9, -storepass, -keypass et -new ne doivent pas \u00eatre indiqu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Si -srcprotected est indiqu\u00e9, les commandes -srcstorepass et -srckeypass ne doivent pas \u00eatre sp\u00e9cifi\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s),
			$of(u"Si le fichier de cl\u00e9s n\'est pas prot\u00e9g\u00e9 par un mot de passe, les commandes -storepass, -keypass et -new ne doivent pas \u00eatre sp\u00e9cifi\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s),
			$of(u"Si le fichier de cl\u00e9s source n\'est pas prot\u00e9g\u00e9 par un mot de passe, les commandes -srcstorepass et -srckeypass ne doivent pas \u00eatre sp\u00e9cifi\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.startdate.value"_s),
			$of(u"Valeur de date de d\u00e9but non admise"_s)
		}),
		$$new($ObjectArray, {
			$of("Validity.must.be.greater.than.zero"_s),
			$of(u"La validit\u00e9 doit \u00eatre sup\u00e9rieure \u00e0 z\u00e9ro"_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of("%s n\'est pas un fournisseur"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"Fournisseur nomm\u00e9 \"%s\" introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of("Fournisseur \"%s\" introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.error.no.command.provided"_s),
			$of(u"Erreur de syntaxe\u00a0: aucune commande fournie"_s)
		}),
		$$new($ObjectArray, {
			$of("Source.keystore.file.exists.but.is.empty."_s),
			$of(u"Le fichier de cl\u00e9s source existe mais il est vide : "_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.srckeystore"_s),
			$of("Indiquez -srckeystore"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.not.specify.both.v.and.rfc.with.list.command"_s),
			$of(u"-v et -rfc ne doivent pas \u00eatre sp\u00e9cifi\u00e9s avec la commande \'list\'"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.must.be.at.least.6.characters"_s),
			$of(u"Un mot de passe de cl\u00e9 doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("New.password.must.be.at.least.6.characters"_s),
			$of(u"Le nouveau mot de passe doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.exists.but.is.empty."_s),
			$of(u"Fichier de cl\u00e9s existant mais vide : "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.file.does.not.exist."_s),
			$of(u"Le fichier de cl\u00e9s n\'existe pas : "_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.destination.alias"_s),
			$of(u"L\'alias de destination doit \u00eatre sp\u00e9cifi\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Must.specify.alias"_s),
			$of(u"L\'alias doit \u00eatre sp\u00e9cifi\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.must.be.at.least.6.characters"_s),
			$of(u"Un mot de passe de fichier de cl\u00e9s doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.the.password.to.be.stored."_s),
			$of(u"Saisissez le mot de passe \u00e0 stocker :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.keystore.password."_s),
			$of(u"Entrez le mot de passe du fichier de cl\u00e9s :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.source.keystore.password."_s),
			$of(u"Entrez le mot de passe du fichier de cl\u00e9s source\u00a0:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.destination.keystore.password."_s),
			$of(u"Entrez le mot de passe du fichier de cl\u00e9s de destination\u00a0:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Le mot de passe du fichier de cl\u00e9s est trop court : il doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.Entry.Type"_s),
			$of(u"Type d\'entr\u00e9e inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Alias.not.changed"_s),
			$of(u"Trop d\'erreurs. Alias non modifi\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.successfully.imported."_s),
			$of(u"L\'\'entr\u00e9e de l\'\'alias {0} a \u00e9t\u00e9 import\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.for.alias.alias.not.imported."_s),
			$of(u"L\'\'entr\u00e9e de l\'\'alias {0} n\'\'a pas \u00e9t\u00e9 import\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s),
			$of(u"Probl\u00e8me lors de l\'\'import de l\'\'entr\u00e9e de l\'\'alias {0}\u00a0: {1}.\nL\'\'entr\u00e9e de l\'\'alias {0} n\'\'a pas \u00e9t\u00e9 import\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s),
			$of(u"Commande d\'\'import ex\u00e9cut\u00e9e\u00a0: {0} entr\u00e9es import\u00e9es, \u00e9chec ou annulation de {1} entr\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s),
			$of(u"Avertissement\u00a0: l\'\'alias {0} existant sera remplac\u00e9 dans le fichier de cl\u00e9s d\'\'acc\u00e8s de destination"_s)
		}),
		$$new($ObjectArray, {
			$of("Existing.entry.alias.alias.exists.overwrite.no."_s),
			$of(u"L\'\'alias d\'\'entr\u00e9e {0} existe d\u00e9j\u00e0. Voulez-vous le remplacer ? [non]\u00a0:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.try.later"_s),
			$of(u"Trop d\'erreurs. R\u00e9essayez plus tard"_s)
		}),
		$$new($ObjectArray, {
			$of("Certification.request.stored.in.file.filename."_s),
			$of(u"Demande de certification stock\u00e9e dans le fichier <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Submit.this.to.your.CA"_s),
			$of(u"Soumettre \u00e0 votre CA"_s)
		}),
		$$new($ObjectArray, {
			$of("if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s),
			$of(u"si l\'alias n\'est pas sp\u00e9cifi\u00e9, destalias et srckeypass ne doivent pas \u00eatre sp\u00e9cifi\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s),
			$of(u"Le fichier de cl\u00e9s pkcs12 de destination contient un mot de passe de fichier de cl\u00e9s et un mot de passe de cl\u00e9 diff\u00e9rents. R\u00e9essayez en sp\u00e9cifiant -destkeypass."_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.stored.in.file.filename."_s),
			$of(u"Certificat stock\u00e9 dans le fichier <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.installed.in.keystore"_s),
			$of(u"R\u00e9ponse de certificat install\u00e9e dans le fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.was.not.installed.in.keystore"_s),
			$of(u"R\u00e9ponse de certificat non install\u00e9e dans le fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.added.to.keystore"_s),
			$of(u"Certificat ajout\u00e9 au fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.was.not.added.to.keystore"_s),
			$of(u"Certificat non ajout\u00e9 au fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of(".Storing.ksfname."_s),
			$of("[Stockage de {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key.certificate."_s),
			$of(u"{0} ne poss\u00e8de pas de cl\u00e9 publique (certificat)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.derive.signature.algorithm"_s),
			$of(u"Impossible de d\u00e9duire l\'algorithme de signature"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.does.not.exist"_s),
			$of("L\'\'alias <{0}> n\'\'existe pas"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.certificate"_s),
			$of(u"L\'\'alias <{0}> ne poss\u00e8de pas de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Key.pair.not.generated.alias.alias.already.exists"_s),
			$of(u"Paire de cl\u00e9s non g\u00e9n\u00e9r\u00e9e, l\'\'alias <{0}> existe d\u00e9j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s),
			$of(u"G\u00e9n\u00e9ration d\'\'une paire de cl\u00e9s {1} de {0} bits et d\'\'un certificat auto-sign\u00e9 ({2}) d\'\'une validit\u00e9 de {3} jours\n\tpour : {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"Entrez le mot de passe de la cl\u00e9 pour <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.keystore.password."_s),
			$of(u"\t(appuyez sur Entr\u00e9e s\'il s\'agit du mot de passe du fichier de cl\u00e9s) :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Key.password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Le mot de passe de la cl\u00e9 est trop court : il doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.key.not.added.to.keystore"_s),
			$of(u"Trop d\'erreurs. Cl\u00e9 non ajout\u00e9e au fichier de cl\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Destination.alias.dest.already.exists"_s),
			$of(u"L\'\'alias de la destination <{0}> existe d\u00e9j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Password.is.too.short.must.be.at.least.6.characters"_s),
			$of(u"Le mot de passe est trop court : il doit comporter au moins 6 caract\u00e8res"_s)
		}),
		$$new($ObjectArray, {
			$of("Too.many.failures.Key.entry.not.cloned"_s),
			$of(u"Trop d\'erreurs. Entr\u00e9e de cl\u00e9 non clon\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("key.password.for.alias."_s),
			$of(u"mot de passe de cl\u00e9 pour <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.entry.for.id.getName.already.exists"_s),
			$of(u"L\'\'entr\u00e9e de fichier de cl\u00e9s d\'\'acc\u00e8s pour <{0}> existe d\u00e9j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Creating.keystore.entry.for.id.getName."_s),
			$of(u"Cr\u00e9ation d\'\'une entr\u00e9e de fichier de cl\u00e9s d\'\'acc\u00e8s pour <{0}>..."_s)
		}),
		$$new($ObjectArray, {
			$of("No.entries.from.identity.database.added"_s),
			$of(u"Aucune entr\u00e9e ajout\u00e9e \u00e0 partir de la base de donn\u00e9es d\'identit\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.name.alias"_s),
			$of("Nom d\'\'alias : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Creation.date.keyStore.getCreationDate.alias."_s),
			$of(u"Date de cr\u00e9ation : {0,date}"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.keyStore.getCreationDate.alias."_s),
			$of("{0}, {1,date}, "_s)
		}),
		$$new($ObjectArray, {
			$of("alias."_s),
			$of("{0}, "_s)
		}),
		$$new($ObjectArray, {
			$of("Entry.type.type."_s),
			$of(u"Type d\'\'entr\u00e9e\u00a0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.length."_s),
			$of(u"Longueur de cha\u00eene du certificat : "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.i.1."_s),
			$of("Certificat[{0,number,integer}]:"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.fingerprint.SHA.256."_s),
			$of("Empreinte du certificat (SHA-256) : "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.type."_s),
			$of(u"Type de fichier de cl\u00e9s : "_s)
		}),
		$$new($ObjectArray, {
			$of("Keystore.provider."_s),
			$of(u"Fournisseur de fichier de cl\u00e9s : "_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entry"_s),
			$of(u"Votre fichier de cl\u00e9s d\'\'acc\u00e8s contient {0,number,integer} entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("Your.keystore.contains.keyStore.size.entries"_s),
			$of(u"Votre fichier de cl\u00e9s d\'\'acc\u00e8s contient {0,number,integer} entr\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.parse.input"_s),
			$of(u"L\'analyse de l\'entr\u00e9e a \u00e9chou\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Empty.input"_s),
			$of(u"Entr\u00e9e vide"_s)
		}),
		$$new($ObjectArray, {
			$of("Not.X.509.certificate"_s),
			$of("Pas un certificat X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.public.key"_s),
			$of(u"{0} ne poss\u00e8de pas de cl\u00e9 publique"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.has.no.X.509.certificate"_s),
			$of(u"{0} ne poss\u00e8de pas de certificat X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("New.certificate.self.signed."_s),
			$of(u"Nouveau certificat (auto-sign\u00e9) :"_s)
		}),
		$$new($ObjectArray, {
			$of("Reply.has.no.certificates"_s),
			$of(u"La r\u00e9ponse n\'a pas de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.imported.alias.alias.already.exists"_s),
			$of(u"Certificat non import\u00e9, l\'\'alias <{0}> existe d\u00e9j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Input.not.an.X.509.certificate"_s),
			$of(u"L\'entr\u00e9e n\'est pas un certificat X.509"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.keystore.under.alias.trustalias."_s),
			$of(u"Le certificat existe d\u00e9j\u00e0 dans le fichier de cl\u00e9s d\'\'acc\u00e8s sous l\'\'alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.no."_s),
			$of("Voulez-vous toujours l\'ajouter ? [non] :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s),
			$of(u"Le certificat existe d\u00e9j\u00e0 dans le fichier de cl\u00e9s d\'\'acc\u00e8s CA syst\u00e8me sous l\'\'alias <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Do.you.still.want.to.add.it.to.your.own.keystore.no."_s),
			$of(u"Voulez-vous toujours l\'ajouter \u00e0 votre fichier de cl\u00e9s ? [non] :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Trust.this.certificate.no."_s),
			$of(u"Faire confiance \u00e0 ce certificat ? [non] :  "_s)
		}),
		$$new($ObjectArray, {
			$of("YES"_s),
			$of("OUI"_s)
		}),
		$$new($ObjectArray, {
			$of("New.prompt."_s),
			$of("Nouveau {0} : "_s)
		}),
		$$new($ObjectArray, {
			$of("Passwords.must.differ"_s),
			$of(u"Les mots de passe doivent diff\u00e9rer"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.prompt."_s),
			$of("Indiquez encore le nouveau {0} : "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.password."_s),
			$of(u"R\u00e9p\u00e9tez le mot de passe : "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.enter.new.password."_s),
			$of("Ressaisissez le nouveau mot de passe : "_s)
		}),
		$$new($ObjectArray, {
			$of("They.don.t.match.Try.again"_s),
			$of(u"Ils sont diff\u00e9rents. R\u00e9essayez."_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.prompt.alias.name."_s),
			$of("Indiquez le nom d\'\'alias {0} :  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s),
			$of(u"Saisissez le nom du nouvel alias\t(ou appuyez sur Entr\u00e9e pour annuler l\'import de cette entr\u00e9e)\u00a0:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.alias.name."_s),
			$of("Indiquez le nom d\'alias :  "_s)
		}),
		$$new($ObjectArray, {
			$of(".RETURN.if.same.as.for.otherAlias."_s),
			$of(u"\t(appuyez sur Entr\u00e9e si le r\u00e9sultat est identique \u00e0 <{0}>)"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.your.first.and.last.name."_s),
			$of(u"Quels sont vos nom et pr\u00e9nom ?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organizational.unit."_s),
			$of(u"Quel est le nom de votre unit\u00e9 organisationnelle ?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.organization."_s),
			$of("Quel est le nom de votre entreprise ?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.City.or.Locality."_s),
			$of(u"Quel est le nom de votre ville de r\u00e9sidence ?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.name.of.your.State.or.Province."_s),
			$of(u"Quel est le nom de votre \u00e9tat ou province ?"_s)
		}),
		$$new($ObjectArray, {
			$of("What.is.the.two.letter.country.code.for.this.unit."_s),
			$of(u"Quel est le code pays \u00e0 deux lettres pour cette unit\u00e9 ?"_s)
		}),
		$$new($ObjectArray, {
			$of("Is.name.correct."_s),
			$of("Est-ce {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("non"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("oui"_s)
		}),
		$$new($ObjectArray, {
			$of("y"_s),
			$of("o"_s)
		}),
		$$new($ObjectArray, {
			$of(".defaultValue."_s),
			$of("  [{0}]:  "_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.has.no.key"_s),
			$of(u"L\'\'alias <{0}> n\'\'est associ\u00e9 \u00e0 aucune cl\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s),
			$of(u"L\'\'entr\u00e9e \u00e0 laquelle l\'\'alias <{0}> fait r\u00e9f\u00e9rence n\'\'est pas une entr\u00e9e de type cl\u00e9 priv\u00e9e. La commande -keyclone prend uniquement en charge le clonage des cl\u00e9s priv\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of(".WARNING.WARNING.WARNING."_s),
			$of("*****************  WARNING WARNING WARNING  *****************"_s)
		}),
		$$new($ObjectArray, {
			$of("Signer.d."_s),
			$of(u"Signataire n\u00b0%d :"_s)
		}),
		$$new($ObjectArray, {
			$of("Timestamp."_s),
			$of("Horodatage :"_s)
		}),
		$$new($ObjectArray, {
			$of("Signature."_s),
			$of("Signature :"_s)
		}),
		$$new($ObjectArray, {
			$of("CRLs."_s),
			$of(u"Listes des certificats r\u00e9voqu\u00e9s (CRL) :"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.owner."_s),
			$of(u"Propri\u00e9taire du certificat : "_s)
		}),
		$$new($ObjectArray, {
			$of("Not.a.signed.jar.file"_s),
			$of(u"Fichier JAR non sign\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("No.certificate.from.the.SSL.server"_s),
			$of("Aucun certificat du serveur SSL"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.your.keystore."_s),
			$of(u"* L\'int\u00e9grit\u00e9 des informations stock\u00e9es dans votre fichier de cl\u00e9s  *\n* n\'a PAS \u00e9t\u00e9 v\u00e9rifi\u00e9e. Pour cela, *\n* vous devez fournir le mot de passe de votre fichier de cl\u00e9s.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of(".The.integrity.of.the.information.stored.in.the.srckeystore."_s),
			$of(u"* L\'int\u00e9grit\u00e9 des informations stock\u00e9es dans le fichier de cl\u00e9s source  *\n* n\'a PAS \u00e9t\u00e9 v\u00e9rifi\u00e9e. Pour cela, *\n* vous devez fournir le mot de passe de votre fichier de cl\u00e9s source.                  *"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.does.not.contain.public.key.for.alias."_s),
			$of(u"La r\u00e9ponse au certificat ne contient pas de cl\u00e9 publique pour <{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("Incomplete.certificate.chain.in.reply"_s),
			$of(u"Cha\u00eene de certificat incompl\u00e8te dans la r\u00e9ponse"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.in.reply.does.not.verify."_s),
			$of(u"La cha\u00eene de certificat de la r\u00e9ponse ne concorde pas : "_s)
		}),
		$$new($ObjectArray, {
			$of("Top.level.certificate.in.reply."_s),
			$of(u"Certificat de niveau sup\u00e9rieur dans la r\u00e9ponse :\n"_s)
		}),
		$$new($ObjectArray, {
			$of(".is.not.trusted."_s),
			$of(u"... non s\u00e9curis\u00e9. "_s)
		}),
		$$new($ObjectArray, {
			$of("Install.reply.anyway.no."_s),
			$of(u"Installer la r\u00e9ponse quand m\u00eame ? [non] :  "_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("NON"_s)
		}),
		$$new($ObjectArray, {
			$of("Public.keys.in.reply.and.keystore.don.t.match"_s),
			$of(u"Les cl\u00e9s publiques de la r\u00e9ponse et du fichier de cl\u00e9s ne concordent pas"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.reply.and.certificate.in.keystore.are.identical"_s),
			$of(u"La r\u00e9ponse au certificat et le certificat du fichier de cl\u00e9s sont identiques"_s)
		}),
		$$new($ObjectArray, {
			$of("Failed.to.establish.chain.from.reply"_s),
			$of(u"Impossible de cr\u00e9er une cha\u00eene \u00e0 partir de la r\u00e9ponse"_s)
		}),
		$$new($ObjectArray, {
			$of("n"_s),
			$of("n"_s)
		}),
		$$new($ObjectArray, {
			$of("Wrong.answer.try.again"_s),
			$of(u"R\u00e9ponse incorrecte, recommencez"_s)
		}),
		$$new($ObjectArray, {
			$of("Secret.key.not.generated.alias.alias.already.exists"_s),
			$of(u"Cl\u00e9 secr\u00e8te non g\u00e9n\u00e9r\u00e9e, l\'\'alias <{0}> existe d\u00e9j\u00e0"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.provide.keysize.for.secret.key.generation"_s),
			$of(u"Indiquez -keysize pour la g\u00e9n\u00e9ration de la cl\u00e9 secr\u00e8te"_s)
		}),
		$$new($ObjectArray, {
			$of("warning.not.verified.make.sure.keystore.is.correct"_s),
			$of(u"AVERTISSEMENT : non v\u00e9rifi\u00e9. Assurez-vous que -keystore est correct."_s)
		}),
		$$new($ObjectArray, {
			$of("Extensions."_s),
			$of(u"Extensions\u00a0: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Empty.value."_s),
			$of("(Valeur vide)"_s)
		}),
		$$new($ObjectArray, {
			$of("Extension.Request."_s),
			$of("Demande d\'extension :"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.keyUsage.type."_s),
			$of("Type keyUsage inconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extendedkeyUsage.type."_s),
			$of("Type extendedkeyUsage inconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.AccessDescription.type."_s),
			$of("Type AccessDescription inconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("Unrecognized.GeneralName.type."_s),
			$of("Type GeneralName non reconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("This.extension.cannot.be.marked.as.critical."_s),
			$of(u"Cette extension ne peut pas \u00eatre marqu\u00e9e comme critique. "_s)
		}),
		$$new($ObjectArray, {
			$of("Odd.number.of.hex.digits.found."_s),
			$of(u"Nombre impair de chiffres hexad\u00e9cimaux trouv\u00e9 : "_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.extension.type."_s),
			$of("Type d\'extension inconnu : "_s)
		}),
		$$new($ObjectArray, {
			$of("command.{0}.is.ambiguous."_s),
			$of(u"commande {0} ambigu\u00eb :"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate.request"_s),
			$of("Demande de certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.issuer"_s),
			$of("Emetteur"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate"_s),
			$of(u"Certificat g\u00e9n\u00e9r\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.crl"_s),
			$of(u"Liste des certificats r\u00e9voqu\u00e9s g\u00e9n\u00e9r\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("the.generated.certificate.request"_s),
			$of(u"Demande de certificat g\u00e9n\u00e9r\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("the.certificate"_s),
			$of("Certificat"_s)
		}),
		$$new($ObjectArray, {
			$of("the.crl"_s),
			$of(u"Liste de certificats r\u00e9voqu\u00e9s"_s)
		}),
		$$new($ObjectArray, {
			$of("the.tsa.certificate"_s),
			$of("Certificat TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("the.input"_s),
			$of(u"Entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("reply"_s),
			$of(u"R\u00e9pondre"_s)
		}),
		$$new($ObjectArray, {
			$of("one.in.many"_s),
			$of("%1$s #%2$d sur %3$d"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.cacerts"_s),
			$of("Emetteur <%s> dans les certificats CA"_s)
		}),
		$$new($ObjectArray, {
			$of("alias.in.keystore"_s),
			$of("Emetteur <%s>"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of("%s (faible)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"Cl\u00e9 %2$s %1$d bits"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"Cl\u00e9 %2$s %1$d bits (faible)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size.1"_s),
			$of(u"taille de cl\u00e9 %s inconnue"_s)
		}),
		$$new($ObjectArray, {
			$of(".PATTERN.printX509Cert.with.weak"_s),
			$of(u"Propri\u00e9taire : {0}\nEmetteur : {1}\nNum\u00e9ro de s\u00e9rie : {2}\nValide du {3} au {4}\nEmpreintes du certificat :\n\t SHA 1: {5}\n\t SHA 256: {6}\nNom de l\'\'algorithme de signature : {7}\nAlgorithme de cl\u00e9 publique du sujet : {8}\nVersion : {9}"_s)
		}),
		$$new($ObjectArray, {
			$of("PKCS.10.with.weak"_s),
			$of(u"Demande de certificat PKCS #10 (version 1.0)\nSujet : %1$s\nFormat : %2$s\nCl\u00e9 publique : %3$s\nAlgorithme de signature : %4$s\n"_s)
		}),
		$$new($ObjectArray, {
			$of("verified.by.s.in.s.weak"_s),
			$of(u"V\u00e9rifi\u00e9 par %1$s dans %2$s avec un \u00e9l\u00e9ment %3$s"_s)
		}),
		$$new($ObjectArray, {
			$of("whose.sigalg.risk"_s),
			$of(u"%1$s utilise l\'algorithme de signature %2$s, qui repr\u00e9sente un risque pour la s\u00e9curit\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of("whose.key.risk"_s),
			$of(u"%1$s utilise un \u00e9l\u00e9ment %2$s, qui repr\u00e9sente un risque pour la s\u00e9curit\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of("jks.storetype.warning"_s),
			$of(u"Le fichier de cl\u00e9s %1$s utilise un format propri\u00e9taire. Il est recommand\u00e9 de migrer vers PKCS12, qui est un format standard de l\'industrie en utilisant \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s)
		}),
		$$new($ObjectArray, {
			$of("migrate.keystore.warning"_s),
			$of(u"El\u00e9ment \"%1$s\" migr\u00e9 vers %4$s. Le fichier de cl\u00e9s %2$s est sauvegard\u00e9 en tant que \"%3$s\"."_s)
		}),
		$$new($ObjectArray, {
			$of("backup.keystore.warning"_s),
			$of(u"Le fichier de cl\u00e9s d\'origine \"%1$s\" est sauvegard\u00e9 en tant que \"%3$s\"..."_s)
		}),
		$$new($ObjectArray, {
			$of("importing.keystore.status"_s),
			$of(u"Import du fichier de cl\u00e9s %1$s vers %2$s..."_s)
		})
	}));
}

Resources_fr::Resources_fr() {
}

$Class* Resources_fr::load$($String* name, bool initialize) {
	$loadClass(Resources_fr, name, initialize, &_Resources_fr_ClassInfo_, clinit$Resources_fr, allocate$Resources_fr);
	return class$;
}

$Class* Resources_fr::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun