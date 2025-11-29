#include <sun/security/tools/keytool/Main$Option.h>

#include <java/lang/Enum.h>
#include <sun/security/tools/keytool/Main.h>
#include <jcpp.h>

#undef ADDPROVIDER
#undef ALIAS
#undef CACERTS
#undef CURVENAME
#undef DESTALIAS
#undef DESTKEYPASS
#undef DESTKEYSTORE
#undef DESTPROTECTED
#undef DESTPROVIDERNAME
#undef DESTSTOREPASS
#undef DESTSTORETYPE
#undef DNAME
#undef EXT
#undef FILEIN
#undef FILEOUT
#undef ID
#undef INFILE
#undef JARFILE
#undef KEYALG
#undef KEYPASS
#undef KEYSIZE
#undef KEYSTORE
#undef NEW
#undef NOPROMPT
#undef OUTFILE
#undef PROTECTED
#undef PROVIDERCLASS
#undef PROVIDERNAME
#undef PROVIDERPATH
#undef RFC
#undef SIGALG
#undef SIGNER
#undef SIGNERKEYPASS
#undef SRCALIAS
#undef SRCKEYPASS
#undef SRCKEYSTORE
#undef SRCPROTECTED
#undef SRCPROVIDERNAME
#undef SRCSTOREPASS
#undef SRCSTORETYPE
#undef SSLSERVER
#undef STARTDATE
#undef STOREPASS
#undef STORETYPE
#undef TLS
#undef TRUSTCACERTS
#undef V
#undef VALIDITY

using $Main$OptionArray = $Array<::sun::security::tools::keytool::Main$Option>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _Main$Option_FieldInfo_[] = {
	{"ALIAS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, ALIAS)},
	{"CURVENAME", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, CURVENAME)},
	{"DESTALIAS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTALIAS)},
	{"DESTKEYPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTKEYPASS)},
	{"DESTKEYSTORE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTKEYSTORE)},
	{"DESTPROTECTED", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTPROTECTED)},
	{"DESTPROVIDERNAME", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTPROVIDERNAME)},
	{"DESTSTOREPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTSTOREPASS)},
	{"DESTSTORETYPE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DESTSTORETYPE)},
	{"DNAME", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, DNAME)},
	{"EXT", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, EXT)},
	{"FILEOUT", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, FILEOUT)},
	{"FILEIN", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, FILEIN)},
	{"ID", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, ID)},
	{"INFILE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, INFILE)},
	{"KEYALG", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, KEYALG)},
	{"KEYPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, KEYPASS)},
	{"KEYSIZE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, KEYSIZE)},
	{"KEYSTORE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, KEYSTORE)},
	{"CACERTS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, CACERTS)},
	{"NEW", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, NEW)},
	{"NOPROMPT", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, NOPROMPT)},
	{"OUTFILE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, OUTFILE)},
	{"PROTECTED", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, PROTECTED)},
	{"PROVIDERCLASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, PROVIDERCLASS)},
	{"ADDPROVIDER", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, ADDPROVIDER)},
	{"PROVIDERNAME", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, PROVIDERNAME)},
	{"PROVIDERPATH", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, PROVIDERPATH)},
	{"RFC", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, RFC)},
	{"SIGALG", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SIGALG)},
	{"SIGNER", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SIGNER)},
	{"SIGNERKEYPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SIGNERKEYPASS)},
	{"SRCALIAS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCALIAS)},
	{"SRCKEYPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCKEYPASS)},
	{"SRCKEYSTORE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCKEYSTORE)},
	{"SRCPROTECTED", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCPROTECTED)},
	{"SRCPROVIDERNAME", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCPROVIDERNAME)},
	{"SRCSTOREPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCSTOREPASS)},
	{"SRCSTORETYPE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SRCSTORETYPE)},
	{"SSLSERVER", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, SSLSERVER)},
	{"JARFILE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, JARFILE)},
	{"STARTDATE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, STARTDATE)},
	{"STOREPASS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, STOREPASS)},
	{"STORETYPE", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, STORETYPE)},
	{"TLS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, TLS)},
	{"TRUSTCACERTS", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, TRUSTCACERTS)},
	{"V", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, V)},
	{"VALIDITY", "Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Option, VALIDITY)},
	{"$VALUES", "[Lsun/security/tools/keytool/Main$Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Main$Option, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Option, name$)},
	{"arg", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Option, arg)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Option, description)},
	{}
};

$MethodInfo _Main$Option_MethodInfo_[] = {
	{"$values", "()[Lsun/security/tools/keytool/Main$Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$OptionArray*(*)()>(&Main$Option::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Main$Option::*)($String*,int32_t,$String*,$String*,$String*)>(&Main$Option::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Main$Option*(*)($String*)>(&Main$Option::valueOf))},
	{"values", "()[Lsun/security/tools/keytool/Main$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Main$OptionArray*(*)()>(&Main$Option::values))},
	{}
};

$InnerClassInfo _Main$Option_InnerClassesInfo_[] = {
	{"sun.security.tools.keytool.Main$Option", "sun.security.tools.keytool.Main", "Option", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Main$Option_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.tools.keytool.Main$Option",
	"java.lang.Enum",
	nullptr,
	_Main$Option_FieldInfo_,
	_Main$Option_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/tools/keytool/Main$Option;>;",
	nullptr,
	_Main$Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.tools.keytool.Main"
};

$Object* allocate$Main$Option($Class* clazz) {
	return $of($alloc(Main$Option));
}

Main$Option* Main$Option::ALIAS = nullptr;
Main$Option* Main$Option::CURVENAME = nullptr;
Main$Option* Main$Option::DESTALIAS = nullptr;
Main$Option* Main$Option::DESTKEYPASS = nullptr;
Main$Option* Main$Option::DESTKEYSTORE = nullptr;
Main$Option* Main$Option::DESTPROTECTED = nullptr;
Main$Option* Main$Option::DESTPROVIDERNAME = nullptr;
Main$Option* Main$Option::DESTSTOREPASS = nullptr;
Main$Option* Main$Option::DESTSTORETYPE = nullptr;
Main$Option* Main$Option::DNAME = nullptr;
Main$Option* Main$Option::EXT = nullptr;
Main$Option* Main$Option::FILEOUT = nullptr;
Main$Option* Main$Option::FILEIN = nullptr;
Main$Option* Main$Option::ID = nullptr;
Main$Option* Main$Option::INFILE = nullptr;
Main$Option* Main$Option::KEYALG = nullptr;
Main$Option* Main$Option::KEYPASS = nullptr;
Main$Option* Main$Option::KEYSIZE = nullptr;
Main$Option* Main$Option::KEYSTORE = nullptr;
Main$Option* Main$Option::CACERTS = nullptr;
Main$Option* Main$Option::NEW = nullptr;
Main$Option* Main$Option::NOPROMPT = nullptr;
Main$Option* Main$Option::OUTFILE = nullptr;
Main$Option* Main$Option::PROTECTED = nullptr;
Main$Option* Main$Option::PROVIDERCLASS = nullptr;
Main$Option* Main$Option::ADDPROVIDER = nullptr;
Main$Option* Main$Option::PROVIDERNAME = nullptr;
Main$Option* Main$Option::PROVIDERPATH = nullptr;
Main$Option* Main$Option::RFC = nullptr;
Main$Option* Main$Option::SIGALG = nullptr;
Main$Option* Main$Option::SIGNER = nullptr;
Main$Option* Main$Option::SIGNERKEYPASS = nullptr;
Main$Option* Main$Option::SRCALIAS = nullptr;
Main$Option* Main$Option::SRCKEYPASS = nullptr;
Main$Option* Main$Option::SRCKEYSTORE = nullptr;
Main$Option* Main$Option::SRCPROTECTED = nullptr;
Main$Option* Main$Option::SRCPROVIDERNAME = nullptr;
Main$Option* Main$Option::SRCSTOREPASS = nullptr;
Main$Option* Main$Option::SRCSTORETYPE = nullptr;
Main$Option* Main$Option::SSLSERVER = nullptr;
Main$Option* Main$Option::JARFILE = nullptr;
Main$Option* Main$Option::STARTDATE = nullptr;
Main$Option* Main$Option::STOREPASS = nullptr;
Main$Option* Main$Option::STORETYPE = nullptr;
Main$Option* Main$Option::TLS = nullptr;
Main$Option* Main$Option::TRUSTCACERTS = nullptr;
Main$Option* Main$Option::V = nullptr;
Main$Option* Main$Option::VALIDITY = nullptr;
$Main$OptionArray* Main$Option::$VALUES = nullptr;

$Main$OptionArray* Main$Option::$values() {
	$init(Main$Option);
	return $new($Main$OptionArray, {
		Main$Option::ALIAS,
		Main$Option::CURVENAME,
		Main$Option::DESTALIAS,
		Main$Option::DESTKEYPASS,
		Main$Option::DESTKEYSTORE,
		Main$Option::DESTPROTECTED,
		Main$Option::DESTPROVIDERNAME,
		Main$Option::DESTSTOREPASS,
		Main$Option::DESTSTORETYPE,
		Main$Option::DNAME,
		Main$Option::EXT,
		Main$Option::FILEOUT,
		Main$Option::FILEIN,
		Main$Option::ID,
		Main$Option::INFILE,
		Main$Option::KEYALG,
		Main$Option::KEYPASS,
		Main$Option::KEYSIZE,
		Main$Option::KEYSTORE,
		Main$Option::CACERTS,
		Main$Option::NEW,
		Main$Option::NOPROMPT,
		Main$Option::OUTFILE,
		Main$Option::PROTECTED,
		Main$Option::PROVIDERCLASS,
		Main$Option::ADDPROVIDER,
		Main$Option::PROVIDERNAME,
		Main$Option::PROVIDERPATH,
		Main$Option::RFC,
		Main$Option::SIGALG,
		Main$Option::SIGNER,
		Main$Option::SIGNERKEYPASS,
		Main$Option::SRCALIAS,
		Main$Option::SRCKEYPASS,
		Main$Option::SRCKEYSTORE,
		Main$Option::SRCPROTECTED,
		Main$Option::SRCPROVIDERNAME,
		Main$Option::SRCSTOREPASS,
		Main$Option::SRCSTORETYPE,
		Main$Option::SSLSERVER,
		Main$Option::JARFILE,
		Main$Option::STARTDATE,
		Main$Option::STOREPASS,
		Main$Option::STORETYPE,
		Main$Option::TLS,
		Main$Option::TRUSTCACERTS,
		Main$Option::V,
		Main$Option::VALIDITY
	});
}

$Main$OptionArray* Main$Option::values() {
	$init(Main$Option);
	return $cast($Main$OptionArray, Main$Option::$VALUES->clone());
}

Main$Option* Main$Option::valueOf($String* name) {
	$init(Main$Option);
	return $cast(Main$Option, $Enum::valueOf(Main$Option::class$, name));
}

void Main$Option::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* arg, $String* description) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, arg, arg);
	$set(this, description, description);
}

$String* Main$Option::toString() {
	return $str({"-"_s, this->name$});
}

void clinit$Main$Option($Class* class$) {
	$assignStatic(Main$Option::ALIAS, $new(Main$Option, "ALIAS"_s, 0, "alias"_s, "<alias>"_s, "alias.name.of.the.entry.to.process"_s));
	$assignStatic(Main$Option::CURVENAME, $new(Main$Option, "CURVENAME"_s, 1, "groupname"_s, "<name>"_s, "groupname.option.help"_s));
	$assignStatic(Main$Option::DESTALIAS, $new(Main$Option, "DESTALIAS"_s, 2, "destalias"_s, "<alias>"_s, "destination.alias"_s));
	$assignStatic(Main$Option::DESTKEYPASS, $new(Main$Option, "DESTKEYPASS"_s, 3, "destkeypass"_s, "<arg>"_s, "destination.key.password"_s));
	$assignStatic(Main$Option::DESTKEYSTORE, $new(Main$Option, "DESTKEYSTORE"_s, 4, "destkeystore"_s, "<keystore>"_s, "destination.keystore.name"_s));
	$assignStatic(Main$Option::DESTPROTECTED, $new(Main$Option, "DESTPROTECTED"_s, 5, "destprotected"_s, nullptr, "destination.keystore.password.protected"_s));
	$assignStatic(Main$Option::DESTPROVIDERNAME, $new(Main$Option, "DESTPROVIDERNAME"_s, 6, "destprovidername"_s, "<name>"_s, "destination.keystore.provider.name"_s));
	$assignStatic(Main$Option::DESTSTOREPASS, $new(Main$Option, "DESTSTOREPASS"_s, 7, "deststorepass"_s, "<arg>"_s, "destination.keystore.password"_s));
	$assignStatic(Main$Option::DESTSTORETYPE, $new(Main$Option, "DESTSTORETYPE"_s, 8, "deststoretype"_s, "<type>"_s, "destination.keystore.type"_s));
	$assignStatic(Main$Option::DNAME, $new(Main$Option, "DNAME"_s, 9, "dname"_s, "<name>"_s, "distinguished.name"_s));
	$assignStatic(Main$Option::EXT, $new(Main$Option, "EXT"_s, 10, "ext"_s, "<value>"_s, "X.509.extension"_s));
	$assignStatic(Main$Option::FILEOUT, $new(Main$Option, "FILEOUT"_s, 11, "file"_s, "<file>"_s, "output.file.name"_s));
	$assignStatic(Main$Option::FILEIN, $new(Main$Option, "FILEIN"_s, 12, "file"_s, "<file>"_s, "input.file.name"_s));
	$assignStatic(Main$Option::ID, $new(Main$Option, "ID"_s, 13, "id"_s, "<id:reason>"_s, "Serial.ID.of.cert.to.revoke"_s));
	$assignStatic(Main$Option::INFILE, $new(Main$Option, "INFILE"_s, 14, "infile"_s, "<file>"_s, "input.file.name"_s));
	$assignStatic(Main$Option::KEYALG, $new(Main$Option, "KEYALG"_s, 15, "keyalg"_s, "<alg>"_s, "key.algorithm.name"_s));
	$assignStatic(Main$Option::KEYPASS, $new(Main$Option, "KEYPASS"_s, 16, "keypass"_s, "<arg>"_s, "key.password"_s));
	$assignStatic(Main$Option::KEYSIZE, $new(Main$Option, "KEYSIZE"_s, 17, "keysize"_s, "<size>"_s, "key.bit.size"_s));
	$assignStatic(Main$Option::KEYSTORE, $new(Main$Option, "KEYSTORE"_s, 18, "keystore"_s, "<keystore>"_s, "keystore.name"_s));
	$assignStatic(Main$Option::CACERTS, $new(Main$Option, "CACERTS"_s, 19, "cacerts"_s, nullptr, "access.the.cacerts.keystore"_s));
	$assignStatic(Main$Option::NEW, $new(Main$Option, "NEW"_s, 20, "new"_s, "<arg>"_s, "new.password"_s));
	$assignStatic(Main$Option::NOPROMPT, $new(Main$Option, "NOPROMPT"_s, 21, "noprompt"_s, nullptr, "do.not.prompt"_s));
	$assignStatic(Main$Option::OUTFILE, $new(Main$Option, "OUTFILE"_s, 22, "outfile"_s, "<file>"_s, "output.file.name"_s));
	$assignStatic(Main$Option::PROTECTED, $new(Main$Option, "PROTECTED"_s, 23, "protected"_s, nullptr, "password.through.protected.mechanism"_s));
	$assignStatic(Main$Option::PROVIDERCLASS, $new(Main$Option, "PROVIDERCLASS"_s, 24, "providerclass"_s, "<class>\n[-providerarg <arg>]"_s, "provider.class.option"_s));
	$assignStatic(Main$Option::ADDPROVIDER, $new(Main$Option, "ADDPROVIDER"_s, 25, "addprovider"_s, "<name>\n[-providerarg <arg>]"_s, "addprovider.option"_s));
	$assignStatic(Main$Option::PROVIDERNAME, $new(Main$Option, "PROVIDERNAME"_s, 26, "providername"_s, "<name>"_s, "provider.name"_s));
	$assignStatic(Main$Option::PROVIDERPATH, $new(Main$Option, "PROVIDERPATH"_s, 27, "providerpath"_s, "<list>"_s, "provider.classpath"_s));
	$assignStatic(Main$Option::RFC, $new(Main$Option, "RFC"_s, 28, "rfc"_s, nullptr, "output.in.RFC.style"_s));
	$assignStatic(Main$Option::SIGALG, $new(Main$Option, "SIGALG"_s, 29, "sigalg"_s, "<alg>"_s, "signature.algorithm.name"_s));
	$assignStatic(Main$Option::SIGNER, $new(Main$Option, "SIGNER"_s, 30, "signer"_s, "<alias>"_s, "signer.alias"_s));
	$assignStatic(Main$Option::SIGNERKEYPASS, $new(Main$Option, "SIGNERKEYPASS"_s, 31, "signerkeypass"_s, "<arg>"_s, "signer.key.password"_s));
	$assignStatic(Main$Option::SRCALIAS, $new(Main$Option, "SRCALIAS"_s, 32, "srcalias"_s, "<alias>"_s, "source.alias"_s));
	$assignStatic(Main$Option::SRCKEYPASS, $new(Main$Option, "SRCKEYPASS"_s, 33, "srckeypass"_s, "<arg>"_s, "source.key.password"_s));
	$assignStatic(Main$Option::SRCKEYSTORE, $new(Main$Option, "SRCKEYSTORE"_s, 34, "srckeystore"_s, "<keystore>"_s, "source.keystore.name"_s));
	$assignStatic(Main$Option::SRCPROTECTED, $new(Main$Option, "SRCPROTECTED"_s, 35, "srcprotected"_s, nullptr, "source.keystore.password.protected"_s));
	$assignStatic(Main$Option::SRCPROVIDERNAME, $new(Main$Option, "SRCPROVIDERNAME"_s, 36, "srcprovidername"_s, "<name>"_s, "source.keystore.provider.name"_s));
	$assignStatic(Main$Option::SRCSTOREPASS, $new(Main$Option, "SRCSTOREPASS"_s, 37, "srcstorepass"_s, "<arg>"_s, "source.keystore.password"_s));
	$assignStatic(Main$Option::SRCSTORETYPE, $new(Main$Option, "SRCSTORETYPE"_s, 38, "srcstoretype"_s, "<type>"_s, "source.keystore.type"_s));
	$assignStatic(Main$Option::SSLSERVER, $new(Main$Option, "SSLSERVER"_s, 39, "sslserver"_s, "<server[:port]>"_s, "SSL.server.host.and.port"_s));
	$assignStatic(Main$Option::JARFILE, $new(Main$Option, "JARFILE"_s, 40, "jarfile"_s, "<file>"_s, "signed.jar.file"_s));
	$assignStatic(Main$Option::STARTDATE, $new(Main$Option, "STARTDATE"_s, 41, "startdate"_s, "<date>"_s, "certificate.validity.start.date.time"_s));
	$assignStatic(Main$Option::STOREPASS, $new(Main$Option, "STOREPASS"_s, 42, "storepass"_s, "<arg>"_s, "keystore.password"_s));
	$assignStatic(Main$Option::STORETYPE, $new(Main$Option, "STORETYPE"_s, 43, "storetype"_s, "<type>"_s, "keystore.type"_s));
	$assignStatic(Main$Option::TLS, $new(Main$Option, "TLS"_s, 44, "tls"_s, nullptr, "tls.option.help"_s));
	$assignStatic(Main$Option::TRUSTCACERTS, $new(Main$Option, "TRUSTCACERTS"_s, 45, "trustcacerts"_s, nullptr, "trust.certificates.from.cacerts"_s));
	$assignStatic(Main$Option::V, $new(Main$Option, "V"_s, 46, "v"_s, nullptr, "verbose.output"_s));
	$assignStatic(Main$Option::VALIDITY, $new(Main$Option, "VALIDITY"_s, 47, "validity"_s, "<days>"_s, "validity.number.of.days"_s));
	$assignStatic(Main$Option::$VALUES, Main$Option::$values());
}

Main$Option::Main$Option() {
}

$Class* Main$Option::load$($String* name, bool initialize) {
	$loadClass(Main$Option, name, initialize, &_Main$Option_ClassInfo_, clinit$Main$Option, allocate$Main$Option);
	return class$;
}

$Class* Main$Option::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun