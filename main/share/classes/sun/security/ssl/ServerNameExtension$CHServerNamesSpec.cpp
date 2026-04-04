#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SNIHostName.h>
#include <javax/net/ssl/SNIServerName.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <javax/net/ssl/StandardConstants.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/ServerNameExtension$CHServerNamesSpec$UnknownServerName.h>
#include <sun/security/ssl/ServerNameExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ILLEGAL_PARAMETER
#undef NAME_HEADER_LENGTH
#undef SNI_HOST_NAME
#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SNIHostName = ::javax::net::ssl::SNIHostName;
using $SNIServerName = ::javax::net::ssl::SNIServerName;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $StandardConstants = ::javax::net::ssl::StandardConstants;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $ServerNameExtension$CHServerNamesSpec$UnknownServerName = ::sun::security::ssl::ServerNameExtension$CHServerNamesSpec$UnknownServerName;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void ServerNameExtension$CHServerNamesSpec::init$($List* serverNames) {
	$set(this, serverNames, $List::copyOf(serverNames));
}

void ServerNameExtension$CHServerNamesSpec::init$($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	if ($nc(buffer)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid server_name extension: insufficient data"_s))));
	}
	int32_t sniLen = $Record::getInt16(buffer);
	if ((sniLen == 0) || sniLen != buffer->remaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid server_name extension: incomplete data"_s))));
	}
	$var($Map, sniMap, $new($LinkedHashMap));
	while (buffer->hasRemaining()) {
		int32_t nameType = $Record::getInt8(buffer);
		$var($SNIServerName, serverName, nullptr);
		$var($bytes, encoded, $Record::getBytes16(buffer));
		if (nameType == $StandardConstants::SNI_HOST_NAME) {
			if ($nc(encoded)->length == 0) {
				$init($Alert);
				$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Empty HostName in server_name extension"_s))));
			}
			try {
				$assign(serverName, $new($SNIHostName, encoded));
			} catch ($IllegalArgumentException& iae) {
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("Illegal server name, type=host_name("_s);
				var$0->append(nameType);
				var$0->append("), name="_s);
				$init($StandardCharsets);
				var$0->append($$new($String, encoded, $StandardCharsets::UTF_8));
				var$0->append(", value={"_s);
				var$0->append($($Utilities::toHexString(encoded)));
				var$0->append("}"_s);
				$var($SSLProtocolException, spe, $new($SSLProtocolException, $$str(var$0)));
				$init($Alert);
				$throw($($nc($nc(hc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$cast($SSLProtocolException, spe->initCause(iae)))));
			}
		} else {
			try {
				$assign(serverName, $new($ServerNameExtension$CHServerNamesSpec$UnknownServerName, nameType, encoded));
			} catch ($IllegalArgumentException& iae) {
				$var($SSLProtocolException, spe, $new($SSLProtocolException, $$str({"Illegal server name, type=("_s, $$str(nameType), "), value={"_s, $($Utilities::toHexString(encoded)), "}"_s})));
				$init($Alert);
				$throw($($nc($nc(hc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$cast($SSLProtocolException, spe->initCause(iae)))));
			}
		}
		if (sniMap->put($($Integer::valueOf($nc(serverName)->getType())), serverName) != nullptr) {
			$init($Alert);
			$throw($($nc($nc(hc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, $$new($SSLProtocolException, $$str({"Duplicated server name of type "_s, $$str(serverName->getType())})))));
		}
	}
	$set(this, serverNames, $new($ArrayList, $(sniMap->values())));
}

$String* ServerNameExtension$CHServerNamesSpec::toString() {
	$useLocalObjectStack();
	if (this->serverNames == nullptr || this->serverNames->isEmpty()) {
		return "<no server name indicator specified>"_s;
	} else {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		{
			$var($Iterator, i$, this->serverNames->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SNIServerName, sn, $cast($SNIServerName, i$->next()));
				{
					builder->append($($nc(sn)->toString()));
					builder->append("\n"_s);
				}
			}
		}
		return builder->toString();
	}
}

ServerNameExtension$CHServerNamesSpec::ServerNameExtension$CHServerNamesSpec() {
}

$Class* ServerNameExtension$CHServerNamesSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAME_HEADER_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(ServerNameExtension$CHServerNamesSpec, NAME_HEADER_LENGTH)},
		{"serverNames", "Ljava/util/List;", "Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;", $FINAL, $field(ServerNameExtension$CHServerNamesSpec, serverNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/net/ssl/SNIServerName;>;)V", $PRIVATE, $method(ServerNameExtension$CHServerNamesSpec, init$, void, $List*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(ServerNameExtension$CHServerNamesSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ServerNameExtension$CHServerNamesSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "sun.security.ssl.ServerNameExtension", "CHServerNamesSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.ssl.ServerNameExtension$CHServerNamesSpec$UnknownServerName", "sun.security.ssl.ServerNameExtension$CHServerNamesSpec", "UnknownServerName", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerNameExtension$CHServerNamesSpec",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$SSLExtensionSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerNameExtension"
	};
	$loadClass(ServerNameExtension$CHServerNamesSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNameExtension$CHServerNamesSpec);
	});
	return class$;
}

$Class* ServerNameExtension$CHServerNamesSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun