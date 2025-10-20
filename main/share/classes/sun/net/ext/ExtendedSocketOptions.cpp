#include <sun/net/ext/ExtendedSocketOptions.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketOption.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/net/ext/ExtendedSocketOptions$NoExtendedSocketOptions.h>
#include <jcpp.h>

#undef SOCK_DGRAM
#undef SOCK_STREAM

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions$NoExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions$NoExtendedSocketOptions;

namespace sun {
	namespace net {
		namespace ext {

$FieldInfo _ExtendedSocketOptions_FieldInfo_[] = {
	{"SOCK_STREAM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExtendedSocketOptions, SOCK_STREAM)},
	{"SOCK_DGRAM", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExtendedSocketOptions, SOCK_DGRAM)},
	{"options", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions, options$)},
	{"datagramOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions, datagramOptions)},
	{"clientStreamOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions, clientStreamOptions)},
	{"serverStreamOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions, serverStreamOptions)},
	{"unixDomainClientOptions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions, unixDomainClientOptions$)},
	{"instance", "Lsun/net/ext/ExtendedSocketOptions;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ExtendedSocketOptions, instance)},
	{}
};

$MethodInfo _ExtendedSocketOptions_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/net/SocketOption<*>;>;)V", $PROTECTED, $method(static_cast<void(ExtendedSocketOptions::*)($Set*)>(&ExtendedSocketOptions::init$))},
	{"clientSocketOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ExtendedSocketOptions::clientSocketOptions))},
	{"datagramSocketOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ExtendedSocketOptions::datagramSocketOptions))},
	{"getInstance", "()Lsun/net/ext/ExtendedSocketOptions;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ExtendedSocketOptions*(*)()>(&ExtendedSocketOptions::getInstance))},
	{"getOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.net.SocketException"},
	{"isDatagramOption", "(Ljava/net/SocketOption;)Z", "(Ljava/net/SocketOption<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($SocketOption*)>(&ExtendedSocketOptions::isDatagramOption))},
	{"isOptionSupported", "(Ljava/net/SocketOption;)Z", "(Ljava/net/SocketOption<*>;)Z", $PUBLIC | $FINAL, $method(static_cast<bool(ExtendedSocketOptions::*)($SocketOption*)>(&ExtendedSocketOptions::isOptionSupported))},
	{"isStreamOption", "(Ljava/net/SocketOption;Z)Z", "(Ljava/net/SocketOption<*>;Z)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($SocketOption*,bool)>(&ExtendedSocketOptions::isStreamOption))},
	{"isUnixDomainOption", "(Ljava/net/SocketOption;)Z", "(Ljava/net/SocketOption<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($SocketOption*)>(&ExtendedSocketOptions::isUnixDomainOption))},
	{"options", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $FINAL, $method(static_cast<$Set*(ExtendedSocketOptions::*)()>(&ExtendedSocketOptions::options))},
	{"options0", "(SZ)Ljava/util/Set;", "(SZ)Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE, $method(static_cast<$Set*(ExtendedSocketOptions::*)(int16_t,bool)>(&ExtendedSocketOptions::options0))},
	{"register", "(Lsun/net/ext/ExtendedSocketOptions;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(ExtendedSocketOptions*)>(&ExtendedSocketOptions::register$))},
	{"serverSocketOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ExtendedSocketOptions::serverSocketOptions))},
	{"setOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $PUBLIC | $ABSTRACT, nullptr, "java.net.SocketException"},
	{"unixDomainClientOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PRIVATE | $FINAL, $method(static_cast<$Set*(ExtendedSocketOptions::*)()>(&ExtendedSocketOptions::unixDomainClientOptions))},
	{"unixDomainSocketOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&ExtendedSocketOptions::unixDomainSocketOptions))},
	{}
};

$InnerClassInfo _ExtendedSocketOptions_InnerClassesInfo_[] = {
	{"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions", "sun.net.ext.ExtendedSocketOptions", "NoExtendedSocketOptions", $STATIC | $FINAL},
	{}
};

$ClassInfo _ExtendedSocketOptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.ext.ExtendedSocketOptions",
	"java.lang.Object",
	nullptr,
	_ExtendedSocketOptions_FieldInfo_,
	_ExtendedSocketOptions_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedSocketOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions));
}

$volatile(ExtendedSocketOptions*) ExtendedSocketOptions::instance = nullptr;

bool ExtendedSocketOptions::isOptionSupported($SocketOption* option) {
	return $nc($(options()))->contains(option);
}

$Set* ExtendedSocketOptions::options() {
	return this->options$;
}

$Set* ExtendedSocketOptions::serverSocketOptions() {
	return $nc($(getInstance()))->options0(ExtendedSocketOptions::SOCK_STREAM, true);
}

$Set* ExtendedSocketOptions::clientSocketOptions() {
	return $nc($(getInstance()))->options0(ExtendedSocketOptions::SOCK_STREAM, false);
}

$Set* ExtendedSocketOptions::unixDomainClientOptions() {
	return this->unixDomainClientOptions$;
}

$Set* ExtendedSocketOptions::unixDomainSocketOptions() {
	return $nc($(getInstance()))->unixDomainClientOptions();
}

$Set* ExtendedSocketOptions::datagramSocketOptions() {
	return $nc($(getInstance()))->options0(ExtendedSocketOptions::SOCK_DGRAM, false);
}

bool ExtendedSocketOptions::isDatagramOption($SocketOption* option) {
	bool var$0 = $nc($($nc(option)->name()))->startsWith("TCP_"_s);
	if (var$0 || isUnixDomainOption(option)) {
		return false;
	} else {
		return true;
	}
}

bool ExtendedSocketOptions::isUnixDomainOption($SocketOption* option) {
	return $nc($($nc(option)->name()))->equals("SO_PEERCRED"_s);
}

bool ExtendedSocketOptions::isStreamOption($SocketOption* option, bool server) {
	bool var$0 = $nc($($nc(option)->name()))->startsWith("UDP_"_s);
	if (var$0 || isUnixDomainOption(option)) {
		return false;
	} else {
		return true;
	}
}

$Set* ExtendedSocketOptions::options0(int16_t type, bool server) {
	switch (type) {
	case ExtendedSocketOptions::SOCK_DGRAM:
		{
			return this->datagramOptions;
		}
	case ExtendedSocketOptions::SOCK_STREAM:
		{
			if (server) {
				return this->serverStreamOptions;
			} else {
				return this->clientStreamOptions;
			}
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Invalid socket option type"_s);
		}
	}
}

void ExtendedSocketOptions::init$($Set* options) {
	$useLocalCurrentObjectStackCache();
	$set(this, options$, options);
	$var($HashSet, datagramOptions, $new($HashSet));
	$var($HashSet, serverStreamOptions, $new($HashSet));
	$var($HashSet, clientStreamOptions, $new($HashSet));
	$var($HashSet, unixDomainClientOptions, $new($HashSet));
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SocketOption, option, $cast($SocketOption, i$->next()));
			{
				if (isDatagramOption(option)) {
					datagramOptions->add(option);
				}
				if (isStreamOption(option, true)) {
					serverStreamOptions->add(option);
				}
				if (isStreamOption(option, false)) {
					clientStreamOptions->add(option);
				}
				if (isUnixDomainOption(option)) {
					unixDomainClientOptions->add(option);
				}
			}
		}
	}
	$set(this, datagramOptions, $Set::copyOf(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(datagramOptions)))));
	$set(this, serverStreamOptions, $Set::copyOf(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(serverStreamOptions)))));
	$set(this, clientStreamOptions, $Set::copyOf(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(clientStreamOptions)))));
	$set(this, unixDomainClientOptions$, $Set::copyOf(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(unixDomainClientOptions)))));
}

ExtendedSocketOptions* ExtendedSocketOptions::getInstance() {
	$load(ExtendedSocketOptions);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init(ExtendedSocketOptions);
	$var(ExtendedSocketOptions, ext, ExtendedSocketOptions::instance);
	if (ext != nullptr) {
		return ext;
	}
	try {
		$Class* c = $Class::forName("jdk.net.ExtendedSocketOptions"_s);
		$assign(ext, ExtendedSocketOptions::instance);
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		$synchronized(ExtendedSocketOptions::class$) {
			$assign(ext, ExtendedSocketOptions::instance);
			if (ext != nullptr) {
				return ext;
			}
			$assign(ext, ($assignStatic(ExtendedSocketOptions::instance, $new($ExtendedSocketOptions$NoExtendedSocketOptions))));
		}
	}
	return ext;
}

void ExtendedSocketOptions::register$(ExtendedSocketOptions* extOptions) {
	$load(ExtendedSocketOptions);
	$synchronized(class$) {
		$init(ExtendedSocketOptions);
		if (ExtendedSocketOptions::instance != nullptr) {
			$throwNew($InternalError, "Attempting to reregister extended options"_s);
		}
		$assignStatic(ExtendedSocketOptions::instance, extOptions);
	}
}

ExtendedSocketOptions::ExtendedSocketOptions() {
}

$Class* ExtendedSocketOptions::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions, name, initialize, &_ExtendedSocketOptions_ClassInfo_, allocate$ExtendedSocketOptions);
	return class$;
}

$Class* ExtendedSocketOptions::class$ = nullptr;

		} // ext
	} // net
} // sun