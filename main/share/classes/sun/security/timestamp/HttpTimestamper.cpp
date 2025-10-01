#include <sun/security/timestamp/HttpTimestamper.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/security/timestamp/TSRequest.h>
#include <sun/security/timestamp/TSResponse.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef TS_QUERY_MIME_TYPE
#undef CONNECT_TIMEOUT
#undef TS_REPLY_MIME_TYPE

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $EOFException = ::java::io::EOFException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $TSRequest = ::sun::security::timestamp::TSRequest;
using $TSResponse = ::sun::security::timestamp::TSResponse;
using $Timestamper = ::sun::security::timestamp::Timestamper;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace timestamp {

$FieldInfo _HttpTimestamper_FieldInfo_[] = {
	{"CONNECT_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpTimestamper, CONNECT_TIMEOUT)},
	{"TS_QUERY_MIME_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpTimestamper, TS_QUERY_MIME_TYPE)},
	{"TS_REPLY_MIME_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpTimestamper, TS_REPLY_MIME_TYPE)},
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpTimestamper, debug)},
	{"tsaURI", "Ljava/net/URI;", nullptr, $PRIVATE, $field(HttpTimestamper, tsaURI)},
	{}
};

$MethodInfo _HttpTimestamper_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpTimestamper::*)($URI*)>(&HttpTimestamper::init$))},
	{"generateTimestamp", "(Lsun/security/timestamp/TSRequest;)Lsun/security/timestamp/TSResponse;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"verifyMimeType", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&HttpTimestamper::verifyMimeType)), "java.io.IOException"},
	{}
};

$ClassInfo _HttpTimestamper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.timestamp.HttpTimestamper",
	"java.lang.Object",
	"sun.security.timestamp.Timestamper",
	_HttpTimestamper_FieldInfo_,
	_HttpTimestamper_MethodInfo_
};

$Object* allocate$HttpTimestamper($Class* clazz) {
	return $of($alloc(HttpTimestamper));
}

$String* HttpTimestamper::TS_QUERY_MIME_TYPE = nullptr;
$String* HttpTimestamper::TS_REPLY_MIME_TYPE = nullptr;
$Debug* HttpTimestamper::debug = nullptr;

void HttpTimestamper::init$($URI* tsaURI) {
	$set(this, tsaURI, nullptr);
	bool var$0 = !$nc($($nc(tsaURI)->getScheme()))->equalsIgnoreCase("http"_s);
	if (var$0 && !$nc($(tsaURI->getScheme()))->equalsIgnoreCase("https"_s)) {
		$throwNew($IllegalArgumentException, "TSA must be an HTTP or HTTPS URI"_s);
	}
	$set(this, tsaURI, tsaURI);
}

$TSResponse* HttpTimestamper::generateTimestamp($TSRequest* tsQuery) {
	$var($HttpURLConnection, connection, $cast($HttpURLConnection, $nc($($nc(this->tsaURI)->toURL()))->openConnection()));
	$nc(connection)->setDoOutput(true);
	connection->setUseCaches(false);
	connection->setRequestProperty("Content-Type"_s, HttpTimestamper::TS_QUERY_MIME_TYPE);
	connection->setRequestMethod("POST"_s);
	connection->setConnectTimeout(HttpTimestamper::CONNECT_TIMEOUT);
	if (HttpTimestamper::debug != nullptr) {
		$var($Set, headers, $nc($(connection->getRequestProperties()))->entrySet());
		$nc(HttpTimestamper::debug)->println($$str({$(connection->getRequestMethod()), " "_s, this->tsaURI, " HTTP/1.1"_s}));
		{
			$var($Iterator, i$, $nc(headers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$nc(HttpTimestamper::debug)->println($$str({"  "_s, e}));
				}
			}
		}
		$nc(HttpTimestamper::debug)->println();
	}
	connection->connect();
	$var($DataOutputStream, output, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(output, $new($DataOutputStream, $(connection->getOutputStream())));
			$var($bytes, request, $nc(tsQuery)->encode());
			output->write(request, 0, $nc(request)->length);
			output->flush();
			if (HttpTimestamper::debug != nullptr) {
				$nc(HttpTimestamper::debug)->println($$str({"sent timestamp query (length="_s, $$str($nc(request)->length), ")"_s}));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (output != nullptr) {
				output->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($BufferedInputStream, input, nullptr);
	$var($bytes, replyBuffer, nullptr);
	{
		$var($Throwable, var$1, nullptr);
		try {
			$assign(input, $new($BufferedInputStream, $(connection->getInputStream())));
			if (HttpTimestamper::debug != nullptr) {
				$var($String, header, connection->getHeaderField(0));
				$nc(HttpTimestamper::debug)->println(header);
				int32_t i = 1;
				while (($assign(header, connection->getHeaderField(i))) != nullptr) {
					$var($String, key, connection->getHeaderFieldKey(i));
					$nc(HttpTimestamper::debug)->println($$str({"  "_s, ((key == nullptr) ? ""_s : $$str({key, ": "_s})), header}));
					++i;
				}
				$nc(HttpTimestamper::debug)->println();
			}
			verifyMimeType($(connection->getContentType()));
			int32_t clen = connection->getContentLength();
			$assign(replyBuffer, input->readAllBytes());
			if (clen != -1 && $nc(replyBuffer)->length != clen) {
				$throwNew($EOFException, $$str({"Expected:"_s, $$str(clen), ", read:"_s, $$str(replyBuffer->length)}));
			}
			if (HttpTimestamper::debug != nullptr) {
				$nc(HttpTimestamper::debug)->println($$str({"received timestamp response (length="_s, $$str($nc(replyBuffer)->length), ")"_s}));
			}
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} /*finally*/ {
			if (input != nullptr) {
				input->close();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	return $new($TSResponse, replyBuffer);
}

void HttpTimestamper::verifyMimeType($String* contentType) {
	$init(HttpTimestamper);
	if (!$nc(HttpTimestamper::TS_REPLY_MIME_TYPE)->equalsIgnoreCase(contentType)) {
		$throwNew($IOException, $$str({"MIME Content-Type is not "_s, HttpTimestamper::TS_REPLY_MIME_TYPE}));
	}
}

void clinit$HttpTimestamper($Class* class$) {
	$assignStatic(HttpTimestamper::TS_QUERY_MIME_TYPE, "application/timestamp-query"_s);
	$assignStatic(HttpTimestamper::TS_REPLY_MIME_TYPE, "application/timestamp-reply"_s);
	$assignStatic(HttpTimestamper::debug, $Debug::getInstance("ts"_s));
}

HttpTimestamper::HttpTimestamper() {
}

$Class* HttpTimestamper::load$($String* name, bool initialize) {
	$loadClass(HttpTimestamper, name, initialize, &_HttpTimestamper_ClassInfo_, clinit$HttpTimestamper, allocate$HttpTimestamper);
	return class$;
}

$Class* HttpTimestamper::class$ = nullptr;

		} // timestamp
	} // security
} // sun