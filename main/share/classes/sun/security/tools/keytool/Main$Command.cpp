#include <sun/security/tools/keytool/Main$Command.h>

#include <java/lang/Enum.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <sun/security/tools/keytool/Main$Option.h>
#include <sun/security/tools/keytool/Main.h>
#include <jcpp.h>

#undef ADDPROVIDER
#undef ALIAS
#undef CACERTS
#undef CERTREQ
#undef CHANGEALIAS
#undef CURVENAME
#undef DELETE
#undef DESTALIAS
#undef DESTKEYPASS
#undef DESTKEYSTORE
#undef DESTPROTECTED
#undef DESTPROVIDERNAME
#undef DESTSTOREPASS
#undef DESTSTORETYPE
#undef DNAME
#undef ENGLISH
#undef EXPORTCERT
#undef EXT
#undef FILEIN
#undef FILEOUT
#undef GENCERT
#undef GENCRL
#undef GENKEYPAIR
#undef GENSECKEY
#undef ID
#undef IDENTITYDB
#undef IMPORTCERT
#undef IMPORTKEYSTORE
#undef IMPORTPASS
#undef INFILE
#undef JARFILE
#undef KEYALG
#undef KEYCLONE
#undef KEYPASS
#undef KEYPASSWD
#undef KEYSIZE
#undef KEYSTORE
#undef LIST
#undef NEW
#undef NOPROMPT
#undef OUTFILE
#undef PRINTCERT
#undef PRINTCERTREQ
#undef PRINTCRL
#undef PROTECTED
#undef PROVIDERCLASS
#undef PROVIDERNAME
#undef PROVIDERPATH
#undef RFC
#undef SELFCERT
#undef SHOWINFO
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
#undef STOREPASSWD
#undef STORETYPE
#undef TLS
#undef TRUSTCACERTS
#undef V
#undef VALIDITY

using $Main$CommandArray = $Array<::sun::security::tools::keytool::Main$Command>;
using $Main$OptionArray = $Array<::sun::security::tools::keytool::Main$Option>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;
using $Main = ::sun::security::tools::keytool::Main;
using $Main$Option = ::sun::security::tools::keytool::Main$Option;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _Main$Command_FieldInfo_[] = {
	{"CERTREQ", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, CERTREQ)},
	{"CHANGEALIAS", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, CHANGEALIAS)},
	{"DELETE", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, DELETE)},
	{"EXPORTCERT", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, EXPORTCERT)},
	{"GENKEYPAIR", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, GENKEYPAIR)},
	{"GENSECKEY", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, GENSECKEY)},
	{"GENCERT", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, GENCERT)},
	{"IMPORTCERT", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, IMPORTCERT)},
	{"IMPORTPASS", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, IMPORTPASS)},
	{"IMPORTKEYSTORE", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, IMPORTKEYSTORE)},
	{"KEYPASSWD", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, KEYPASSWD)},
	{"LIST", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, LIST)},
	{"PRINTCERT", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, PRINTCERT)},
	{"PRINTCERTREQ", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, PRINTCERTREQ)},
	{"PRINTCRL", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, PRINTCRL)},
	{"STOREPASSWD", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, STOREPASSWD)},
	{"SHOWINFO", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, SHOWINFO)},
	{"KEYCLONE", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, KEYCLONE)},
	{"SELFCERT", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, SELFCERT)},
	{"GENCRL", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, GENCRL)},
	{"IDENTITYDB", "Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Command, IDENTITYDB)},
	{"$VALUES", "[Lsun/security/tools/keytool/Main$Command;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Main$Command, $VALUES)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Command, description)},
	{"options", "[Lsun/security/tools/keytool/Main$Option;", nullptr, $FINAL, $field(Main$Command, options)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Main$Command, name$)},
	{"altName", "Ljava/lang/String;", nullptr, 0, $field(Main$Command, altName)},
	{}
};

$MethodInfo _Main$Command_MethodInfo_[] = {
	{"$values", "()[Lsun/security/tools/keytool/Main$Command;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Main$CommandArray*(*)()>(&Main$Command::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;[Lsun/security/tools/keytool/Main$Option;)V", "(Ljava/lang/String;[Lsun/security/tools/keytool/Main$Option;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(Main$Command::*)($String*,int32_t,$String*,$Main$OptionArray*)>(&Main$Command::init$))},
	{"getAltName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Main$Command::*)()>(&Main$Command::getAltName))},
	{"getCommand", "(Ljava/lang/String;)Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Main$Command*(*)($String*)>(&Main$Command::getCommand))},
	{"setAltName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$Command::*)($String*)>(&Main$Command::setAltName))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Main$Command*(*)($String*)>(&Main$Command::valueOf))},
	{"values", "()[Lsun/security/tools/keytool/Main$Command;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Main$CommandArray*(*)()>(&Main$Command::values))},
	{}
};

$InnerClassInfo _Main$Command_InnerClassesInfo_[] = {
	{"sun.security.tools.keytool.Main$Command", "sun.security.tools.keytool.Main", "Command", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Main$Command_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.tools.keytool.Main$Command",
	"java.lang.Enum",
	nullptr,
	_Main$Command_FieldInfo_,
	_Main$Command_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/tools/keytool/Main$Command;>;",
	nullptr,
	_Main$Command_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.tools.keytool.Main"
};

$Object* allocate$Main$Command($Class* clazz) {
	return $of($alloc(Main$Command));
}

Main$Command* Main$Command::CERTREQ = nullptr;
Main$Command* Main$Command::CHANGEALIAS = nullptr;
Main$Command* Main$Command::DELETE = nullptr;
Main$Command* Main$Command::EXPORTCERT = nullptr;
Main$Command* Main$Command::GENKEYPAIR = nullptr;
Main$Command* Main$Command::GENSECKEY = nullptr;
Main$Command* Main$Command::GENCERT = nullptr;
Main$Command* Main$Command::IMPORTCERT = nullptr;
Main$Command* Main$Command::IMPORTPASS = nullptr;
Main$Command* Main$Command::IMPORTKEYSTORE = nullptr;
Main$Command* Main$Command::KEYPASSWD = nullptr;
Main$Command* Main$Command::LIST = nullptr;
Main$Command* Main$Command::PRINTCERT = nullptr;
Main$Command* Main$Command::PRINTCERTREQ = nullptr;
Main$Command* Main$Command::PRINTCRL = nullptr;
Main$Command* Main$Command::STOREPASSWD = nullptr;
Main$Command* Main$Command::SHOWINFO = nullptr;
Main$Command* Main$Command::KEYCLONE = nullptr;
Main$Command* Main$Command::SELFCERT = nullptr;
Main$Command* Main$Command::GENCRL = nullptr;
Main$Command* Main$Command::IDENTITYDB = nullptr;
$Main$CommandArray* Main$Command::$VALUES = nullptr;

$Main$CommandArray* Main$Command::$values() {
	$init(Main$Command);
	return $new($Main$CommandArray, {
		Main$Command::CERTREQ,
		Main$Command::CHANGEALIAS,
		Main$Command::DELETE,
		Main$Command::EXPORTCERT,
		Main$Command::GENKEYPAIR,
		Main$Command::GENSECKEY,
		Main$Command::GENCERT,
		Main$Command::IMPORTCERT,
		Main$Command::IMPORTPASS,
		Main$Command::IMPORTKEYSTORE,
		Main$Command::KEYPASSWD,
		Main$Command::LIST,
		Main$Command::PRINTCERT,
		Main$Command::PRINTCERTREQ,
		Main$Command::PRINTCRL,
		Main$Command::STOREPASSWD,
		Main$Command::SHOWINFO,
		Main$Command::KEYCLONE,
		Main$Command::SELFCERT,
		Main$Command::GENCRL,
		Main$Command::IDENTITYDB
	});
}

$Main$CommandArray* Main$Command::values() {
	$init(Main$Command);
	return $cast($Main$CommandArray, Main$Command::$VALUES->clone());
}

Main$Command* Main$Command::valueOf($String* name) {
	$init(Main$Command);
	return $cast(Main$Command, $Enum::valueOf(Main$Command::class$, name));
}

void Main$Command::init$($String* $enum$name, int32_t $enum$ordinal, $String* d, $Main$OptionArray* o) {
	$useLocalCurrentObjectStackCache();
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, description, d);
	$set(this, options, o);
	$init($Locale);
	$set(this, name$, $str({"-"_s, $($nc($(name()))->toLowerCase($Locale::ENGLISH))}));
}

$String* Main$Command::toString() {
	return this->name$;
}

$String* Main$Command::getAltName() {
	return this->altName;
}

void Main$Command::setAltName($String* altName) {
	$set(this, altName, altName);
}

Main$Command* Main$Command::getCommand($String* cmd) {
	$init(Main$Command);
	{
		$var($Main$CommandArray, arr$, Main$Command::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Main$Command* c = arr$->get(i$);
			{
				$init($Main);
				bool var$0 = $nc($Main::collator)->compare(cmd, $nc(c)->name$) == 0;
				if (var$0 || ($nc(c)->altName != nullptr && $nc($Main::collator)->compare(cmd, c->altName) == 0)) {
					return c;
				}
			}
		}
	}
	return nullptr;
}

void clinit$Main$Command($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Main$Option);
	$assignStatic(Main$Command::CERTREQ, $new(Main$Command, "CERTREQ"_s, 0, "Generates.a.certificate.request"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::SIGALG,
		$Main$Option::FILEOUT,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::DNAME,
		$Main$Option::EXT,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::CHANGEALIAS, $new(Main$Command, "CHANGEALIAS"_s, 1, "Changes.an.entry.s.alias"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::DESTALIAS,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::DELETE, $new(Main$Command, "DELETE"_s, 2, "Deletes.an.entry"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::EXPORTCERT, $new(Main$Command, "EXPORTCERT"_s, 3, "Exports.certificate"_s, $$new($Main$OptionArray, {
		$Main$Option::RFC,
		$Main$Option::ALIAS,
		$Main$Option::FILEOUT,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::GENKEYPAIR, $new(Main$Command, "GENKEYPAIR"_s, 4, "Generates.a.key.pair"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::KEYALG,
		$Main$Option::KEYSIZE,
		$Main$Option::CURVENAME,
		$Main$Option::SIGALG,
		$Main$Option::DNAME,
		$Main$Option::STARTDATE,
		$Main$Option::EXT,
		$Main$Option::VALIDITY,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::SIGNER,
		$Main$Option::SIGNERKEYPASS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::GENSECKEY, $new(Main$Command, "GENSECKEY"_s, 5, "Generates.a.secret.key"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::KEYPASS,
		$Main$Option::KEYALG,
		$Main$Option::KEYSIZE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::GENCERT, $new(Main$Command, "GENCERT"_s, 6, "Generates.certificate.from.a.certificate.request"_s, $$new($Main$OptionArray, {
		$Main$Option::RFC,
		$Main$Option::INFILE,
		$Main$Option::OUTFILE,
		$Main$Option::ALIAS,
		$Main$Option::SIGALG,
		$Main$Option::DNAME,
		$Main$Option::STARTDATE,
		$Main$Option::EXT,
		$Main$Option::VALIDITY,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::IMPORTCERT, $new(Main$Command, "IMPORTCERT"_s, 7, "Imports.a.certificate.or.a.certificate.chain"_s, $$new($Main$OptionArray, {
		$Main$Option::NOPROMPT,
		$Main$Option::TRUSTCACERTS,
		$Main$Option::PROTECTED,
		$Main$Option::ALIAS,
		$Main$Option::FILEIN,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::IMPORTPASS, $new(Main$Command, "IMPORTPASS"_s, 8, "Imports.a.password"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::KEYPASS,
		$Main$Option::KEYALG,
		$Main$Option::KEYSIZE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::IMPORTKEYSTORE, $new(Main$Command, "IMPORTKEYSTORE"_s, 9, "Imports.one.or.all.entries.from.another.keystore"_s, $$new($Main$OptionArray, {
		$Main$Option::SRCKEYSTORE,
		$Main$Option::DESTKEYSTORE,
		$Main$Option::SRCSTORETYPE,
		$Main$Option::DESTSTORETYPE,
		$Main$Option::SRCSTOREPASS,
		$Main$Option::DESTSTOREPASS,
		$Main$Option::SRCPROTECTED,
		$Main$Option::DESTPROTECTED,
		$Main$Option::SRCPROVIDERNAME,
		$Main$Option::DESTPROVIDERNAME,
		$Main$Option::SRCALIAS,
		$Main$Option::DESTALIAS,
		$Main$Option::SRCKEYPASS,
		$Main$Option::DESTKEYPASS,
		$Main$Option::NOPROMPT,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::KEYPASSWD, $new(Main$Command, "KEYPASSWD"_s, 10, "Changes.the.key.password.of.an.entry"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::KEYPASS,
		$Main$Option::NEW,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::LIST, $new(Main$Command, "LIST"_s, 11, "Lists.entries.in.a.keystore"_s, $$new($Main$OptionArray, {
		$Main$Option::RFC,
		$Main$Option::ALIAS,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::PRINTCERT, $new(Main$Command, "PRINTCERT"_s, 12, "Prints.the.content.of.a.certificate"_s, $$new($Main$OptionArray, {
		$Main$Option::RFC,
		$Main$Option::FILEIN,
		$Main$Option::SSLSERVER,
		$Main$Option::JARFILE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::TRUSTCACERTS,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::PRINTCERTREQ, $new(Main$Command, "PRINTCERTREQ"_s, 13, "Prints.the.content.of.a.certificate.request"_s, $$new($Main$OptionArray, {
		$Main$Option::FILEIN,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::PRINTCRL, $new(Main$Command, "PRINTCRL"_s, 14, "Prints.the.content.of.a.CRL.file"_s, $$new($Main$OptionArray, {
		$Main$Option::FILEIN,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::TRUSTCACERTS,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::STOREPASSWD, $new(Main$Command, "STOREPASSWD"_s, 15, "Changes.the.store.password.of.a.keystore"_s, $$new($Main$OptionArray, {
		$Main$Option::NEW,
		$Main$Option::KEYSTORE,
		$Main$Option::CACERTS,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::SHOWINFO, $new(Main$Command, "SHOWINFO"_s, 16, "showinfo.command.help"_s, $$new($Main$OptionArray, {
		$Main$Option::TLS,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::KEYCLONE, $new(Main$Command, "KEYCLONE"_s, 17, "Clones.a.key.entry"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::DESTALIAS,
		$Main$Option::KEYPASS,
		$Main$Option::NEW,
		$Main$Option::STORETYPE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::SELFCERT, $new(Main$Command, "SELFCERT"_s, 18, "Generates.a.self.signed.certificate"_s, $$new($Main$OptionArray, {
		$Main$Option::ALIAS,
		$Main$Option::SIGALG,
		$Main$Option::DNAME,
		$Main$Option::STARTDATE,
		$Main$Option::EXT,
		$Main$Option::VALIDITY,
		$Main$Option::KEYPASS,
		$Main$Option::STORETYPE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::GENCRL, $new(Main$Command, "GENCRL"_s, 19, "Generates.CRL"_s, $$new($Main$OptionArray, {
		$Main$Option::RFC,
		$Main$Option::FILEOUT,
		$Main$Option::ID,
		$Main$Option::ALIAS,
		$Main$Option::SIGALG,
		$Main$Option::KEYPASS,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::STORETYPE,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V,
		$Main$Option::PROTECTED
	})));
	$assignStatic(Main$Command::IDENTITYDB, $new(Main$Command, "IDENTITYDB"_s, 20, "Imports.entries.from.a.JDK.1.1.x.style.identity.database"_s, $$new($Main$OptionArray, {
		$Main$Option::FILEIN,
		$Main$Option::STORETYPE,
		$Main$Option::KEYSTORE,
		$Main$Option::STOREPASS,
		$Main$Option::PROVIDERNAME,
		$Main$Option::ADDPROVIDER,
		$Main$Option::PROVIDERCLASS,
		$Main$Option::PROVIDERPATH,
		$Main$Option::V
	})));
	$assignStatic(Main$Command::$VALUES, Main$Command::$values());
}

Main$Command::Main$Command() {
}

$Class* Main$Command::load$($String* name, bool initialize) {
	$loadClass(Main$Command, name, initialize, &_Main$Command_ClassInfo_, clinit$Main$Command, allocate$Main$Command);
	return class$;
}

$Class* Main$Command::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun