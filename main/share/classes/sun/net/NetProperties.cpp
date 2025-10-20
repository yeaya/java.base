#include <sun/net/NetProperties.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/net/NetProperties$1.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $NetProperties$1 = ::sun::net::NetProperties$1;

namespace sun {
	namespace net {

$FieldInfo _NetProperties_FieldInfo_[] = {
	{"props", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(NetProperties, props)},
	{}
};

$MethodInfo _NetProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NetProperties::*)()>(&NetProperties::init$))},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&NetProperties::get))},
	{"getBoolean", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Boolean*(*)($String*)>(&NetProperties::getBoolean))},
	{"getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Integer*(*)($String*,int32_t)>(&NetProperties::getInteger))},
	{"loadDefaultProperties", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NetProperties::loadDefaultProperties))},
	{}
};

$InnerClassInfo _NetProperties_InnerClassesInfo_[] = {
	{"sun.net.NetProperties$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.NetProperties",
	"java.lang.Object",
	nullptr,
	_NetProperties_FieldInfo_,
	_NetProperties_MethodInfo_,
	nullptr,
	nullptr,
	_NetProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.NetProperties$1"
};

$Object* allocate$NetProperties($Class* clazz) {
	return $of($alloc(NetProperties));
}

$Properties* NetProperties::props = nullptr;

void NetProperties::init$() {
}

void NetProperties::loadDefaultProperties() {
	$init(NetProperties);
	$useLocalCurrentObjectStackCache();
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
		$nc(NetProperties::props)->load(static_cast<$InputStream*>(bin));
		bin->close();
	} catch ($Exception&) {
		$catch();
	}
}

$String* NetProperties::get($String* key) {
	$init(NetProperties);
	$var($String, def, $nc(NetProperties::props)->getProperty(key));
	try {
		return $System::getProperty(key, def);
	} catch ($IllegalArgumentException&) {
		$catch();
	} catch ($NullPointerException&) {
		$catch();
	}
	return nullptr;
}

$Integer* NetProperties::getInteger($String* key, int32_t defval) {
	$init(NetProperties);
	$useLocalCurrentObjectStackCache();
	$var($String, val, nullptr);
	try {
		$assign(val, $System::getProperty(key, $($nc(NetProperties::props)->getProperty(key))));
	} catch ($IllegalArgumentException&) {
		$catch();
	} catch ($NullPointerException&) {
		$catch();
	}
	if (val != nullptr) {
		try {
			return $Integer::decode(val);
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return $Integer::valueOf(defval);
}

$Boolean* NetProperties::getBoolean($String* key) {
	$init(NetProperties);
	$useLocalCurrentObjectStackCache();
	$var($String, val, nullptr);
	try {
		$assign(val, $System::getProperty(key, $($nc(NetProperties::props)->getProperty(key))));
	} catch ($IllegalArgumentException&) {
		$catch();
	} catch ($NullPointerException&) {
		$catch();
	}
	if (val != nullptr) {
		try {
			return $Boolean::valueOf(val);
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return nullptr;
}

void clinit$NetProperties($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(NetProperties::props, $new($Properties));
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NetProperties$1)));
	}
}

NetProperties::NetProperties() {
}

$Class* NetProperties::load$($String* name, bool initialize) {
	$loadClass(NetProperties, name, initialize, &_NetProperties_ClassInfo_, clinit$NetProperties, allocate$NetProperties);
	return class$;
}

$Class* NetProperties::class$ = nullptr;

	} // net
} // sun