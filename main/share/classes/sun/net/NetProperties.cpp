#include <sun/net/NetProperties.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Error.h>
#include <java/lang/NumberFormatException.h>
#include <java/security/AccessController.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/net/NetProperties$1.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $NetProperties$1 = ::sun::net::NetProperties$1;

namespace sun {
	namespace net {

$Properties* NetProperties::props = nullptr;

void NetProperties::init$() {
}

void NetProperties::loadDefaultProperties() {
	$init(NetProperties);
	$useLocalObjectStack();
	$var($String, fname, $StaticProperty::javaHome());
	if (fname == nullptr) {
		$throwNew($Error, "Can\'t find java.home ??"_s);
	}
	try {
		$var($File, f, $new($File, fname, "conf"_s));
		$assign(f, $new($File, f, "net.properties"_s));
		$assign(fname, f->getCanonicalPath());
		$var($InputStream, in, $new($FileInputStream, fname));
		$var($BufferedInputStream, bin, $new($BufferedInputStream, in));
		$nc(NetProperties::props)->load(bin);
		bin->close();
	} catch ($Exception& e) {
	}
}

$String* NetProperties::get($String* key) {
	$init(NetProperties);
	$var($String, def, $nc(NetProperties::props)->getProperty(key));
	try {
		return $System::getProperty(key, def);
	} catch ($IllegalArgumentException& e) {
	} catch ($NullPointerException& e) {
	}
	return nullptr;
}

$Integer* NetProperties::getInteger($String* key, int32_t defval) {
	$init(NetProperties);
	$useLocalObjectStack();
	$var($String, val, nullptr);
	try {
		$assign(val, $System::getProperty(key, $($nc(NetProperties::props)->getProperty(key))));
	} catch ($IllegalArgumentException& e) {
	} catch ($NullPointerException& e) {
	}
	if (val != nullptr) {
		try {
			return $Integer::decode(val);
		} catch ($NumberFormatException& ex) {
		}
	}
	return $Integer::valueOf(defval);
}

$Boolean* NetProperties::getBoolean($String* key) {
	$init(NetProperties);
	$useLocalObjectStack();
	$var($String, val, nullptr);
	try {
		$assign(val, $System::getProperty(key, $($nc(NetProperties::props)->getProperty(key))));
	} catch ($IllegalArgumentException& e) {
	} catch ($NullPointerException& e) {
	}
	if (val != nullptr) {
		try {
			return $Boolean::valueOf(val);
		} catch ($NumberFormatException& ex) {
		}
	}
	return nullptr;
}

void NetProperties::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(NetProperties::props, $new($Properties));
	{
		$AccessController::doPrivileged($$new($NetProperties$1));
	}
}

NetProperties::NetProperties() {
}

$Class* NetProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"props", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(NetProperties, props)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NetProperties, init$, void)},
		{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetProperties, get, $String*, $String*)},
		{"getBoolean", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetProperties, getBoolean, $Boolean*, $String*)},
		{"getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $staticMethod(NetProperties, getInteger, $Integer*, $String*, int32_t)},
		{"loadDefaultProperties", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(NetProperties, loadDefaultProperties, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetProperties$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.NetProperties",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.NetProperties$1"
	};
	$loadClass(NetProperties, name, initialize, &classInfo$$, NetProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NetProperties);
	});
	return class$;
}

$Class* NetProperties::class$ = nullptr;

	} // net
} // sun