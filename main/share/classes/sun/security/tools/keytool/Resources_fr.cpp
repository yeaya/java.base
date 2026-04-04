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

$ObjectArray2* Resources_fr::contents = nullptr;

void Resources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_fr::getContents() {
	return Resources_fr::contents;
}

void Resources_fr::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"NEWLINE"_s,
			"\n"_s
		}),
		$$new($ObjectArray, {
			"STAR"_s,
			"*******************************************"_s
		}),
		$$new($ObjectArray, {
			"STARNN"_s,
			"*******************************************\n\n"_s
		}),
		$$new($ObjectArray, {
			".OPTION."_s,
			" [OPTION]..."_s
		}),
		$$new($ObjectArray, {
			"Options."_s,
			"Options :"_s
		}),
		$$new($ObjectArray, {
			"option.1.set.twice"_s,
			u"L\'option %s est spécifiée plusieurs fois. Toutes les occurrences seront ignorées, sauf la dernière."_s
		}),
		$$new($ObjectArray, {
			"multiple.commands.1.2"_s,
			u"Une seule commande est autorisée : %1$s et %2$s ont été spécifiées."_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.help.for.all.available.commands"_s,
			"Utiliser \"keytool -help\" pour toutes les commandes disponibles"_s
		}),
		$$new($ObjectArray, {
			"Key.and.Certificate.Management.Tool"_s,
			u"Outil de gestion de certificats et de clés"_s
		}),
		$$new($ObjectArray, {
			"Commands."_s,
			"Commandes :"_s
		}),
		$$new($ObjectArray, {
			"Use.keytool.command.name.help.for.usage.of.command.name"_s,
			u"Utilisez \"keytool -command_name -help\" pour la syntaxe de command_name.\nUtilisez l\'option -conf <url> pour indiquer un fichier d\'options préconfigurées."_s
		}),
		$$new($ObjectArray, {
			"Generates.a.certificate.request"_s,
			u"Génère une demande de certificat"_s
		}),
		$$new($ObjectArray, {
			"Changes.an.entry.s.alias"_s,
			u"Modifie l\'alias d\'une entrée"_s
		}),
		$$new($ObjectArray, {
			"Deletes.an.entry"_s,
			u"Supprime une entrée"_s
		}),
		$$new($ObjectArray, {
			"Exports.certificate"_s,
			"Exporte le certificat"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.key.pair"_s,
			u"Génère une paire de clés"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.secret.key"_s,
			u"Génère une clé secrète"_s
		}),
		$$new($ObjectArray, {
			"Generates.certificate.from.a.certificate.request"_s,
			u"Génère le certificat à partir d\'une demande de certificat"_s
		}),
		$$new($ObjectArray, {
			"Generates.CRL"_s,
			u"Génère la liste des certificats révoqués (CRL)"_s
		}),
		$$new($ObjectArray, {
			"Generated.keyAlgName.secret.key"_s,
			u"Clé secrète {0} générée"_s
		}),
		$$new($ObjectArray, {
			"Generated.keysize.bit.keyAlgName.secret.key"_s,
			u"Clé secrète {0} bits {1} générée"_s
		}),
		$$new($ObjectArray, {
			"Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s,
			u"Importe les entrées à partir d\'une base de données d\'identités de type JDK 1.1.x"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.certificate.or.a.certificate.chain"_s,
			u"Importe un certificat ou une chaîne de certificat"_s
		}),
		$$new($ObjectArray, {
			"Imports.a.password"_s,
			"Importe un mot de passe"_s
		}),
		$$new($ObjectArray, {
			"Imports.one.or.all.entries.from.another.keystore"_s,
			u"Importe une entrée ou la totalité des entrées depuis un autre fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Clones.a.key.entry"_s,
			u"Clone une entrée de clé"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.key.password.of.an.entry"_s,
			u"Modifie le mot de passe de clé d\'une entrée"_s
		}),
		$$new($ObjectArray, {
			"Lists.entries.in.a.keystore"_s,
			u"Répertorie les entrées d\'un fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate"_s,
			"Imprime le contenu d\'un certificat"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.certificate.request"_s,
			"Imprime le contenu d\'une demande de certificat"_s
		}),
		$$new($ObjectArray, {
			"Prints.the.content.of.a.CRL.file"_s,
			u"Imprime le contenu d\'un fichier de liste des certificats révoqués (CRL)"_s
		}),
		$$new($ObjectArray, {
			"Generates.a.self.signed.certificate"_s,
			u"Génère un certificat auto-signé"_s
		}),
		$$new($ObjectArray, {
			"Changes.the.store.password.of.a.keystore"_s,
			u"Modifie le mot de passe de banque d\'un fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"alias.name.of.the.entry.to.process"_s,
			u"nom d\'alias de l\'entrée à traiter"_s
		}),
		$$new($ObjectArray, {
			"destination.alias"_s,
			"alias de destination"_s
		}),
		$$new($ObjectArray, {
			"destination.key.password"_s,
			u"mot de passe de la clé de destination"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.name"_s,
			u"nom du fichier de clés de destination"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password.protected"_s,
			u"mot de passe du fichier de clés de destination protégé"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.provider.name"_s,
			u"nom du fournisseur du fichier de clés de destination"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.password"_s,
			u"mot de passe du fichier de clés de destination"_s
		}),
		$$new($ObjectArray, {
			"destination.keystore.type"_s,
			u"type du fichier de clés de destination"_s
		}),
		$$new($ObjectArray, {
			"distinguished.name"_s,
			"nom distinctif"_s
		}),
		$$new($ObjectArray, {
			"X.509.extension"_s,
			"extension X.509"_s
		}),
		$$new($ObjectArray, {
			"output.file.name"_s,
			"nom du fichier de sortie"_s
		}),
		$$new($ObjectArray, {
			"input.file.name"_s,
			u"nom du fichier d\'entrée"_s
		}),
		$$new($ObjectArray, {
			"key.algorithm.name"_s,
			u"nom de l\'algorithme de clé"_s
		}),
		$$new($ObjectArray, {
			"key.password"_s,
			u"mot de passe de la clé"_s
		}),
		$$new($ObjectArray, {
			"key.bit.size"_s,
			u"taille en bits de la clé"_s
		}),
		$$new($ObjectArray, {
			"keystore.name"_s,
			u"nom du fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"access.the.cacerts.keystore"_s,
			u"accéder au fichier de clés cacerts"_s
		}),
		$$new($ObjectArray, {
			"warning.cacerts.option"_s,
			u"Avertissement : utiliser l\'option -cacerts pour accéder au fichier de clés cacerts"_s
		}),
		$$new($ObjectArray, {
			"new.password"_s,
			"nouveau mot de passe"_s
		}),
		$$new($ObjectArray, {
			"do.not.prompt"_s,
			"ne pas inviter"_s
		}),
		$$new($ObjectArray, {
			"password.through.protected.mechanism"_s,
			u"mot de passe via mécanisme protégé"_s
		}),
		$$new($ObjectArray, {
			"addprovider.option"_s,
			u"ajouter un fournisseur de sécurité par nom (par ex. SunPKCS11)\nconfigurer l\'argument pour -addprovider"_s
		}),
		$$new($ObjectArray, {
			"provider.class.option"_s,
			u"ajouter un fournisseur de sécurité par nom de classe qualifié complet\nconfigurer l\'argument pour -providerclass"_s
		}),
		$$new($ObjectArray, {
			"provider.name"_s,
			"nom du fournisseur"_s
		}),
		$$new($ObjectArray, {
			"provider.classpath"_s,
			"variable d\'environnement CLASSPATH du fournisseur"_s
		}),
		$$new($ObjectArray, {
			"output.in.RFC.style"_s,
			"sortie au style RFC"_s
		}),
		$$new($ObjectArray, {
			"signature.algorithm.name"_s,
			"nom de l\'algorithme de signature"_s
		}),
		$$new($ObjectArray, {
			"source.alias"_s,
			"alias source"_s
		}),
		$$new($ObjectArray, {
			"source.key.password"_s,
			u"mot de passe de la clé source"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.name"_s,
			u"nom du fichier de clés source"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password.protected"_s,
			u"mot de passe du fichier de clés source protégé"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.provider.name"_s,
			u"nom du fournisseur du fichier de clés source"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.password"_s,
			u"mot de passe du fichier de clés source"_s
		}),
		$$new($ObjectArray, {
			"source.keystore.type"_s,
			u"type du fichier de clés source"_s
		}),
		$$new($ObjectArray, {
			"SSL.server.host.and.port"_s,
			u"Port et hôte du serveur SSL"_s
		}),
		$$new($ObjectArray, {
			"signed.jar.file"_s,
			u"fichier JAR signé"_s
		}),
		$$new($ObjectArray, {
			"certificate.validity.start.date.time"_s,
			u"date/heure de début de validité du certificat"_s
		}),
		$$new($ObjectArray, {
			"keystore.password"_s,
			u"mot de passe du fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"keystore.type"_s,
			u"type du fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"trust.certificates.from.cacerts"_s,
			u"certificats sécurisés issus de certificats CA"_s
		}),
		$$new($ObjectArray, {
			"verbose.output"_s,
			"sortie en mode verbose"_s
		}),
		$$new($ObjectArray, {
			"validity.number.of.days"_s,
			u"nombre de jours de validité"_s
		}),
		$$new($ObjectArray, {
			"Serial.ID.of.cert.to.revoke"_s,
			u"ID de série du certificat à révoquer"_s
		}),
		$$new($ObjectArray, {
			"keytool.error."_s,
			"erreur keytool : "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			"Option non admise :  "_s
		}),
		$$new($ObjectArray, {
			"Illegal.value."_s,
			"Valeur non admise : "_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Type de mot de passe inconnu : "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"Variable d\'environnement introuvable : "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Fichier introuvable : "_s
		}),
		$$new($ObjectArray, {
			"Command.option.flag.needs.an.argument."_s,
			"L\'\'option de commande {0} requiert un argument."_s
		}),
		$$new($ObjectArray, {
			"Warning.Different.store.and.key.passwords.not.supported.for.PKCS12.KeyStores.Ignoring.user.specified.command.value."_s,
			u"Avertissement : les mots de passe de clé et de banque distincts ne sont pas pris en charge pour les fichiers de clés d\'\'accès PKCS12. La valeur {0} spécifiée par l\'\'utilisateur est ignorée."_s
		}),
		$$new($ObjectArray, {
			"the.keystore.or.storetype.option.cannot.be.used.with.the.cacerts.option"_s,
			u"Les options -keystore ou -storetype ne peuvent pas être utilisées avec l\'option -cacerts"_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"-keystore doit être défini sur NONE si -storetype est {0}"_s
		}),
		$$new($ObjectArray, {
			"Too.many.retries.program.terminated"_s,
			"Trop de tentatives, fin du programme"_s
		}),
		$$new($ObjectArray, {
			".storepasswd.and.keypasswd.commands.not.supported.if.storetype.is.{0}"_s,
			u"Les commandes -storepasswd et -keypasswd ne sont pas prises en charge si -storetype est défini sur {0}"_s
		}),
		$$new($ObjectArray, {
			".keypasswd.commands.not.supported.if.storetype.is.PKCS12"_s,
			u"Les commandes -keypasswd ne sont pas prises en charge si -storetype est défini sur PKCS12"_s
		}),
		$$new($ObjectArray, {
			".keypass.and.new.can.not.be.specified.if.storetype.is.{0}"_s,
			u"Les commandes -keypass et -new ne peuvent pas être spécifiées si -storetype est défini sur {0}"_s
		}),
		$$new($ObjectArray, {
			"if.protected.is.specified.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"si -protected est spécifié, -storepass, -keypass et -new ne doivent pas être indiqués"_s
		}),
		$$new($ObjectArray, {
			"if.srcprotected.is.specified.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Si -srcprotected est indiqué, les commandes -srcstorepass et -srckeypass ne doivent pas être spécifiées"_s
		}),
		$$new($ObjectArray, {
			"if.keystore.is.not.password.protected.then.storepass.keypass.and.new.must.not.be.specified"_s,
			u"Si le fichier de clés n\'est pas protégé par un mot de passe, les commandes -storepass, -keypass et -new ne doivent pas être spécifiées"_s
		}),
		$$new($ObjectArray, {
			"if.source.keystore.is.not.password.protected.then.srcstorepass.and.srckeypass.must.not.be.specified"_s,
			u"Si le fichier de clés source n\'est pas protégé par un mot de passe, les commandes -srcstorepass et -srckeypass ne doivent pas être spécifiées"_s
		}),
		$$new($ObjectArray, {
			"Illegal.startdate.value"_s,
			u"Valeur de date de début non admise"_s
		}),
		$$new($ObjectArray, {
			"Validity.must.be.greater.than.zero"_s,
			u"La validité doit être supérieure à zéro"_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			"%s n\'est pas un fournisseur"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"Fournisseur nommé \"%s\" introuvable"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"Fournisseur \"%s\" introuvable"_s
		}),
		$$new($ObjectArray, {
			"Usage.error.no.command.provided"_s,
			u"Erreur de syntaxe : aucune commande fournie"_s
		}),
		$$new($ObjectArray, {
			"Source.keystore.file.exists.but.is.empty."_s,
			u"Le fichier de clés source existe mais il est vide : "_s
		}),
		$$new($ObjectArray, {
			"Please.specify.srckeystore"_s,
			"Indiquez -srckeystore"_s
		}),
		$$new($ObjectArray, {
			"Must.not.specify.both.v.and.rfc.with.list.command"_s,
			u"-v et -rfc ne doivent pas être spécifiés avec la commande \'list\'"_s
		}),
		$$new($ObjectArray, {
			"Key.password.must.be.at.least.6.characters"_s,
			u"Un mot de passe de clé doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"New.password.must.be.at.least.6.characters"_s,
			u"Le nouveau mot de passe doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.exists.but.is.empty."_s,
			u"Fichier de clés existant mais vide : "_s
		}),
		$$new($ObjectArray, {
			"Keystore.file.does.not.exist."_s,
			u"Le fichier de clés n\'existe pas : "_s
		}),
		$$new($ObjectArray, {
			"Must.specify.destination.alias"_s,
			u"L\'alias de destination doit être spécifié"_s
		}),
		$$new($ObjectArray, {
			"Must.specify.alias"_s,
			u"L\'alias doit être spécifié"_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.must.be.at.least.6.characters"_s,
			u"Un mot de passe de fichier de clés doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"Enter.the.password.to.be.stored."_s,
			u"Saisissez le mot de passe à stocker :  "_s
		}),
		$$new($ObjectArray, {
			"Enter.keystore.password."_s,
			u"Entrez le mot de passe du fichier de clés :  "_s
		}),
		$$new($ObjectArray, {
			"Enter.source.keystore.password."_s,
			u"Entrez le mot de passe du fichier de clés source :  "_s
		}),
		$$new($ObjectArray, {
			"Enter.destination.keystore.password."_s,
			u"Entrez le mot de passe du fichier de clés de destination :  "_s
		}),
		$$new($ObjectArray, {
			"Keystore.password.is.too.short.must.be.at.least.6.characters"_s,
			u"Le mot de passe du fichier de clés est trop court : il doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"Unknown.Entry.Type"_s,
			u"Type d\'entrée inconnu"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Alias.not.changed"_s,
			u"Trop d\'erreurs. Alias non modifié"_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.successfully.imported."_s,
			u"L\'\'entrée de l\'\'alias {0} a été importée."_s
		}),
		$$new($ObjectArray, {
			"Entry.for.alias.alias.not.imported."_s,
			u"L\'\'entrée de l\'\'alias {0} n\'\'a pas été importée."_s
		}),
		$$new($ObjectArray, {
			"Problem.importing.entry.for.alias.alias.exception.Entry.for.alias.alias.not.imported."_s,
			u"Problème lors de l\'\'import de l\'\'entrée de l\'\'alias {0} : {1}.\nL\'\'entrée de l\'\'alias {0} n\'\'a pas été importée."_s
		}),
		$$new($ObjectArray, {
			"Import.command.completed.ok.entries.successfully.imported.fail.entries.failed.or.cancelled"_s,
			u"Commande d\'\'import exécutée : {0} entrées importées, échec ou annulation de {1} entrées"_s
		}),
		$$new($ObjectArray, {
			"Warning.Overwriting.existing.alias.alias.in.destination.keystore"_s,
			u"Avertissement : l\'\'alias {0} existant sera remplacé dans le fichier de clés d\'\'accès de destination"_s
		}),
		$$new($ObjectArray, {
			"Existing.entry.alias.alias.exists.overwrite.no."_s,
			u"L\'\'alias d\'\'entrée {0} existe déjà. Voulez-vous le remplacer ? [non] :  "_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.try.later"_s,
			u"Trop d\'erreurs. Réessayez plus tard"_s
		}),
		$$new($ObjectArray, {
			"Certification.request.stored.in.file.filename."_s,
			u"Demande de certification stockée dans le fichier <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Submit.this.to.your.CA"_s,
			u"Soumettre à votre CA"_s
		}),
		$$new($ObjectArray, {
			"if.alias.not.specified.destalias.and.srckeypass.must.not.be.specified"_s,
			u"si l\'alias n\'est pas spécifié, destalias et srckeypass ne doivent pas être spécifiés"_s
		}),
		$$new($ObjectArray, {
			"The.destination.pkcs12.keystore.has.different.storepass.and.keypass.Please.retry.with.destkeypass.specified."_s,
			u"Le fichier de clés pkcs12 de destination contient un mot de passe de fichier de clés et un mot de passe de clé différents. Réessayez en spécifiant -destkeypass."_s
		}),
		$$new($ObjectArray, {
			"Certificate.stored.in.file.filename."_s,
			u"Certificat stocké dans le fichier <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.installed.in.keystore"_s,
			u"Réponse de certificat installée dans le fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.was.not.installed.in.keystore"_s,
			u"Réponse de certificat non installée dans le fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.added.to.keystore"_s,
			u"Certificat ajouté au fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Certificate.was.not.added.to.keystore"_s,
			u"Certificat non ajouté au fichier de clés"_s
		}),
		$$new($ObjectArray, {
			".Storing.ksfname."_s,
			"[Stockage de {0}]"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key.certificate."_s,
			u"{0} ne possède pas de clé publique (certificat)"_s
		}),
		$$new($ObjectArray, {
			"Cannot.derive.signature.algorithm"_s,
			u"Impossible de déduire l\'algorithme de signature"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.does.not.exist"_s,
			"L\'\'alias <{0}> n\'\'existe pas"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.certificate"_s,
			u"L\'\'alias <{0}> ne possède pas de certificat"_s
		}),
		$$new($ObjectArray, {
			"Key.pair.not.generated.alias.alias.already.exists"_s,
			u"Paire de clés non générée, l\'\'alias <{0}> existe déjà"_s
		}),
		$$new($ObjectArray, {
			"Generating.keysize.bit.keyAlgName.key.pair.and.self.signed.certificate.sigAlgName.with.a.validity.of.validality.days.for"_s,
			u"Génération d\'\'une paire de clés {1} de {0} bits et d\'\'un certificat auto-signé ({2}) d\'\'une validité de {3} jours\n\tpour : {4}"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"Entrez le mot de passe de la clé pour <{0}>"_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.keystore.password."_s,
			u"\t(appuyez sur Entrée s\'il s\'agit du mot de passe du fichier de clés) :  "_s
		}),
		$$new($ObjectArray, {
			"Key.password.is.too.short.must.be.at.least.6.characters"_s,
			u"Le mot de passe de la clé est trop court : il doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.key.not.added.to.keystore"_s,
			u"Trop d\'erreurs. Clé non ajoutée au fichier de clés"_s
		}),
		$$new($ObjectArray, {
			"Destination.alias.dest.already.exists"_s,
			u"L\'\'alias de la destination <{0}> existe déjà"_s
		}),
		$$new($ObjectArray, {
			"Password.is.too.short.must.be.at.least.6.characters"_s,
			u"Le mot de passe est trop court : il doit comporter au moins 6 caractères"_s
		}),
		$$new($ObjectArray, {
			"Too.many.failures.Key.entry.not.cloned"_s,
			u"Trop d\'erreurs. Entrée de clé non clonée"_s
		}),
		$$new($ObjectArray, {
			"key.password.for.alias."_s,
			u"mot de passe de clé pour <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Keystore.entry.for.id.getName.already.exists"_s,
			u"L\'\'entrée de fichier de clés d\'\'accès pour <{0}> existe déjà"_s
		}),
		$$new($ObjectArray, {
			"Creating.keystore.entry.for.id.getName."_s,
			u"Création d\'\'une entrée de fichier de clés d\'\'accès pour <{0}>..."_s
		}),
		$$new($ObjectArray, {
			"No.entries.from.identity.database.added"_s,
			u"Aucune entrée ajoutée à partir de la base de données d\'identités"_s
		}),
		$$new($ObjectArray, {
			"Alias.name.alias"_s,
			"Nom d\'\'alias : {0}"_s
		}),
		$$new($ObjectArray, {
			"Creation.date.keyStore.getCreationDate.alias."_s,
			u"Date de création : {0,date}"_s
		}),
		$$new($ObjectArray, {
			"alias.keyStore.getCreationDate.alias."_s,
			"{0}, {1,date}, "_s
		}),
		$$new($ObjectArray, {
			"alias."_s,
			"{0}, "_s
		}),
		$$new($ObjectArray, {
			"Entry.type.type."_s,
			u"Type d\'\'entrée : {0}"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.length."_s,
			u"Longueur de chaîne du certificat : "_s
		}),
		$$new($ObjectArray, {
			"Certificate.i.1."_s,
			"Certificat[{0,number,integer}]:"_s
		}),
		$$new($ObjectArray, {
			"Certificate.fingerprint.SHA.256."_s,
			"Empreinte du certificat (SHA-256) : "_s
		}),
		$$new($ObjectArray, {
			"Keystore.type."_s,
			u"Type de fichier de clés : "_s
		}),
		$$new($ObjectArray, {
			"Keystore.provider."_s,
			u"Fournisseur de fichier de clés : "_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entry"_s,
			u"Votre fichier de clés d\'\'accès contient {0,number,integer} entrée"_s
		}),
		$$new($ObjectArray, {
			"Your.keystore.contains.keyStore.size.entries"_s,
			u"Votre fichier de clés d\'\'accès contient {0,number,integer} entrées"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.parse.input"_s,
			u"L\'analyse de l\'entrée a échoué"_s
		}),
		$$new($ObjectArray, {
			"Empty.input"_s,
			u"Entrée vide"_s
		}),
		$$new($ObjectArray, {
			"Not.X.509.certificate"_s,
			"Pas un certificat X.509"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.public.key"_s,
			u"{0} ne possède pas de clé publique"_s
		}),
		$$new($ObjectArray, {
			"alias.has.no.X.509.certificate"_s,
			u"{0} ne possède pas de certificat X.509"_s
		}),
		$$new($ObjectArray, {
			"New.certificate.self.signed."_s,
			u"Nouveau certificat (auto-signé) :"_s
		}),
		$$new($ObjectArray, {
			"Reply.has.no.certificates"_s,
			u"La réponse n\'a pas de certificat"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.imported.alias.alias.already.exists"_s,
			u"Certificat non importé, l\'\'alias <{0}> existe déjà"_s
		}),
		$$new($ObjectArray, {
			"Input.not.an.X.509.certificate"_s,
			u"L\'entrée n\'est pas un certificat X.509"_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.keystore.under.alias.trustalias."_s,
			u"Le certificat existe déjà dans le fichier de clés d\'\'accès sous l\'\'alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.no."_s,
			"Voulez-vous toujours l\'ajouter ? [non] :  "_s
		}),
		$$new($ObjectArray, {
			"Certificate.already.exists.in.system.wide.CA.keystore.under.alias.trustalias."_s,
			u"Le certificat existe déjà dans le fichier de clés d\'\'accès CA système sous l\'\'alias <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Do.you.still.want.to.add.it.to.your.own.keystore.no."_s,
			u"Voulez-vous toujours l\'ajouter à votre fichier de clés ? [non] :  "_s
		}),
		$$new($ObjectArray, {
			"Trust.this.certificate.no."_s,
			u"Faire confiance à ce certificat ? [non] :  "_s
		}),
		$$new($ObjectArray, {
			"YES"_s,
			"OUI"_s
		}),
		$$new($ObjectArray, {
			"New.prompt."_s,
			"Nouveau {0} : "_s
		}),
		$$new($ObjectArray, {
			"Passwords.must.differ"_s,
			u"Les mots de passe doivent différer"_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.prompt."_s,
			"Indiquez encore le nouveau {0} : "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.password."_s,
			u"Répétez le mot de passe : "_s
		}),
		$$new($ObjectArray, {
			"Re.enter.new.password."_s,
			"Ressaisissez le nouveau mot de passe : "_s
		}),
		$$new($ObjectArray, {
			"They.don.t.match.Try.again"_s,
			u"Ils sont différents. Réessayez."_s
		}),
		$$new($ObjectArray, {
			"Enter.prompt.alias.name."_s,
			"Indiquez le nom d\'\'alias {0} :  "_s
		}),
		$$new($ObjectArray, {
			"Enter.new.alias.name.RETURN.to.cancel.import.for.this.entry."_s,
			u"Saisissez le nom du nouvel alias\t(ou appuyez sur Entrée pour annuler l\'import de cette entrée) :  "_s
		}),
		$$new($ObjectArray, {
			"Enter.alias.name."_s,
			"Indiquez le nom d\'alias :  "_s
		}),
		$$new($ObjectArray, {
			".RETURN.if.same.as.for.otherAlias."_s,
			u"\t(appuyez sur Entrée si le résultat est identique à <{0}>)"_s
		}),
		$$new($ObjectArray, {
			"What.is.your.first.and.last.name."_s,
			u"Quels sont vos nom et prénom ?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organizational.unit."_s,
			u"Quel est le nom de votre unité organisationnelle ?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.organization."_s,
			"Quel est le nom de votre entreprise ?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.City.or.Locality."_s,
			u"Quel est le nom de votre ville de résidence ?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.name.of.your.State.or.Province."_s,
			u"Quel est le nom de votre état ou province ?"_s
		}),
		$$new($ObjectArray, {
			"What.is.the.two.letter.country.code.for.this.unit."_s,
			u"Quel est le code pays à deux lettres pour cette unité ?"_s
		}),
		$$new($ObjectArray, {
			"Is.name.correct."_s,
			"Est-ce {0} ?"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"non"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"oui"_s
		}),
		$$new($ObjectArray, {
			"y"_s,
			"o"_s
		}),
		$$new($ObjectArray, {
			".defaultValue."_s,
			"  [{0}]:  "_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.has.no.key"_s,
			u"L\'\'alias <{0}> n\'\'est associé à aucune clé"_s
		}),
		$$new($ObjectArray, {
			"Alias.alias.references.an.entry.type.that.is.not.a.private.key.entry.The.keyclone.command.only.supports.cloning.of.private.key"_s,
			u"L\'\'entrée à laquelle l\'\'alias <{0}> fait référence n\'\'est pas une entrée de type clé privée. La commande -keyclone prend uniquement en charge le clonage des clés privées"_s
		}),
		$$new($ObjectArray, {
			".WARNING.WARNING.WARNING."_s,
			"*****************  WARNING WARNING WARNING  *****************"_s
		}),
		$$new($ObjectArray, {
			"Signer.d."_s,
			u"Signataire n°%d :"_s
		}),
		$$new($ObjectArray, {
			"Timestamp."_s,
			"Horodatage :"_s
		}),
		$$new($ObjectArray, {
			"Signature."_s,
			"Signature :"_s
		}),
		$$new($ObjectArray, {
			"CRLs."_s,
			u"Listes des certificats révoqués (CRL) :"_s
		}),
		$$new($ObjectArray, {
			"Certificate.owner."_s,
			u"Propriétaire du certificat : "_s
		}),
		$$new($ObjectArray, {
			"Not.a.signed.jar.file"_s,
			u"Fichier JAR non signé"_s
		}),
		$$new($ObjectArray, {
			"No.certificate.from.the.SSL.server"_s,
			"Aucun certificat du serveur SSL"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.your.keystore."_s,
			u"* L\'intégrité des informations stockées dans votre fichier de clés  *\n* n\'a PAS été vérifiée. Pour cela, *\n* vous devez fournir le mot de passe de votre fichier de clés.                  *"_s
		}),
		$$new($ObjectArray, {
			".The.integrity.of.the.information.stored.in.the.srckeystore."_s,
			u"* L\'intégrité des informations stockées dans le fichier de clés source  *\n* n\'a PAS été vérifiée. Pour cela, *\n* vous devez fournir le mot de passe de votre fichier de clés source.                  *"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.does.not.contain.public.key.for.alias."_s,
			u"La réponse au certificat ne contient pas de clé publique pour <{0}>"_s
		}),
		$$new($ObjectArray, {
			"Incomplete.certificate.chain.in.reply"_s,
			u"Chaîne de certificat incomplète dans la réponse"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.in.reply.does.not.verify."_s,
			u"La chaîne de certificat de la réponse ne concorde pas : "_s
		}),
		$$new($ObjectArray, {
			"Top.level.certificate.in.reply."_s,
			u"Certificat de niveau supérieur dans la réponse :\n"_s
		}),
		$$new($ObjectArray, {
			".is.not.trusted."_s,
			u"... non sécurisé. "_s
		}),
		$$new($ObjectArray, {
			"Install.reply.anyway.no."_s,
			u"Installer la réponse quand même ? [non] :  "_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"NON"_s
		}),
		$$new($ObjectArray, {
			"Public.keys.in.reply.and.keystore.don.t.match"_s,
			u"Les clés publiques de la réponse et du fichier de clés ne concordent pas"_s
		}),
		$$new($ObjectArray, {
			"Certificate.reply.and.certificate.in.keystore.are.identical"_s,
			u"La réponse au certificat et le certificat du fichier de clés sont identiques"_s
		}),
		$$new($ObjectArray, {
			"Failed.to.establish.chain.from.reply"_s,
			u"Impossible de créer une chaîne à partir de la réponse"_s
		}),
		$$new($ObjectArray, {
			"n"_s,
			"n"_s
		}),
		$$new($ObjectArray, {
			"Wrong.answer.try.again"_s,
			u"Réponse incorrecte, recommencez"_s
		}),
		$$new($ObjectArray, {
			"Secret.key.not.generated.alias.alias.already.exists"_s,
			u"Clé secrète non générée, l\'\'alias <{0}> existe déjà"_s
		}),
		$$new($ObjectArray, {
			"Please.provide.keysize.for.secret.key.generation"_s,
			u"Indiquez -keysize pour la génération de la clé secrète"_s
		}),
		$$new($ObjectArray, {
			"warning.not.verified.make.sure.keystore.is.correct"_s,
			u"AVERTISSEMENT : non vérifié. Assurez-vous que -keystore est correct."_s
		}),
		$$new($ObjectArray, {
			"Extensions."_s,
			u"Extensions : "_s
		}),
		$$new($ObjectArray, {
			".Empty.value."_s,
			"(Valeur vide)"_s
		}),
		$$new($ObjectArray, {
			"Extension.Request."_s,
			"Demande d\'extension :"_s
		}),
		$$new($ObjectArray, {
			"Unknown.keyUsage.type."_s,
			"Type keyUsage inconnu : "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extendedkeyUsage.type."_s,
			"Type extendedkeyUsage inconnu : "_s
		}),
		$$new($ObjectArray, {
			"Unknown.AccessDescription.type."_s,
			"Type AccessDescription inconnu : "_s
		}),
		$$new($ObjectArray, {
			"Unrecognized.GeneralName.type."_s,
			"Type GeneralName non reconnu : "_s
		}),
		$$new($ObjectArray, {
			"This.extension.cannot.be.marked.as.critical."_s,
			u"Cette extension ne peut pas être marquée comme critique. "_s
		}),
		$$new($ObjectArray, {
			"Odd.number.of.hex.digits.found."_s,
			u"Nombre impair de chiffres hexadécimaux trouvé : "_s
		}),
		$$new($ObjectArray, {
			"Unknown.extension.type."_s,
			"Type d\'extension inconnu : "_s
		}),
		$$new($ObjectArray, {
			"command.{0}.is.ambiguous."_s,
			u"commande {0} ambiguë :"_s
		}),
		$$new($ObjectArray, {
			"the.certificate.request"_s,
			"Demande de certificat"_s
		}),
		$$new($ObjectArray, {
			"the.issuer"_s,
			"Emetteur"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate"_s,
			u"Certificat généré"_s
		}),
		$$new($ObjectArray, {
			"the.generated.crl"_s,
			u"Liste des certificats révoqués générée"_s
		}),
		$$new($ObjectArray, {
			"the.generated.certificate.request"_s,
			u"Demande de certificat généré"_s
		}),
		$$new($ObjectArray, {
			"the.certificate"_s,
			"Certificat"_s
		}),
		$$new($ObjectArray, {
			"the.crl"_s,
			u"Liste de certificats révoqués"_s
		}),
		$$new($ObjectArray, {
			"the.tsa.certificate"_s,
			"Certificat TSA"_s
		}),
		$$new($ObjectArray, {
			"the.input"_s,
			u"Entrée"_s
		}),
		$$new($ObjectArray, {
			"reply"_s,
			u"Répondre"_s
		}),
		$$new($ObjectArray, {
			"one.in.many"_s,
			"%1$s #%2$d sur %3$d"_s
		}),
		$$new($ObjectArray, {
			"alias.in.cacerts"_s,
			"Emetteur <%s> dans les certificats CA"_s
		}),
		$$new($ObjectArray, {
			"alias.in.keystore"_s,
			"Emetteur <%s>"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (faible)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"Clé %2$s %1$d bits"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"Clé %2$s %1$d bits (faible)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size.1"_s,
			u"taille de clé %s inconnue"_s
		}),
		$$new($ObjectArray, {
			".PATTERN.printX509Cert.with.weak"_s,
			u"Propriétaire : {0}\nEmetteur : {1}\nNuméro de série : {2}\nValide du {3} au {4}\nEmpreintes du certificat :\n\t SHA 1: {5}\n\t SHA 256: {6}\nNom de l\'\'algorithme de signature : {7}\nAlgorithme de clé publique du sujet : {8}\nVersion : {9}"_s
		}),
		$$new($ObjectArray, {
			"PKCS.10.with.weak"_s,
			u"Demande de certificat PKCS #10 (version 1.0)\nSujet : %1$s\nFormat : %2$s\nClé publique : %3$s\nAlgorithme de signature : %4$s\n"_s
		}),
		$$new($ObjectArray, {
			"verified.by.s.in.s.weak"_s,
			u"Vérifié par %1$s dans %2$s avec un élément %3$s"_s
		}),
		$$new($ObjectArray, {
			"whose.sigalg.risk"_s,
			u"%1$s utilise l\'algorithme de signature %2$s, qui représente un risque pour la sécurité."_s
		}),
		$$new($ObjectArray, {
			"whose.key.risk"_s,
			u"%1$s utilise un élément %2$s, qui représente un risque pour la sécurité."_s
		}),
		$$new($ObjectArray, {
			"jks.storetype.warning"_s,
			u"Le fichier de clés %1$s utilise un format propriétaire. Il est recommandé de migrer vers PKCS12, qui est un format standard de l\'industrie en utilisant \"keytool -importkeystore -srckeystore %2$s -destkeystore %2$s -deststoretype pkcs12\"."_s
		}),
		$$new($ObjectArray, {
			"migrate.keystore.warning"_s,
			u"Elément \"%1$s\" migré vers %4$s. Le fichier de clés %2$s est sauvegardé en tant que \"%3$s\"."_s
		}),
		$$new($ObjectArray, {
			"backup.keystore.warning"_s,
			u"Le fichier de clés d\'origine \"%1$s\" est sauvegardé en tant que \"%3$s\"..."_s
		}),
		$$new($ObjectArray, {
			"importing.keystore.status"_s,
			u"Import du fichier de clés %1$s vers %2$s..."_s
		})
	}));
}

Resources_fr::Resources_fr() {
}

$Class* Resources_fr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_fr, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.keytool.Resources_fr",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_fr, name, initialize, &classInfo$$, Resources_fr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_fr);
	});
	return class$;
}

$Class* Resources_fr::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun