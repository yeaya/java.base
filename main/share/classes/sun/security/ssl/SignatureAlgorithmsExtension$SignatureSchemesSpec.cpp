#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$SignatureSchemesSpec::init$($List* schemes) {
	if (schemes != nullptr) {
		$set(this, signatureSchemes, $new($ints, schemes->size()));
		int32_t i = 0;
		{
			$var($Iterator, i$, schemes->iterator());
			for (; $nc(i$)->hasNext();) {
				$SignatureScheme* scheme = $cast($SignatureScheme, i$->next());
				{
					this->signatureSchemes->set(i++, $nc(scheme)->id);
				}
			}
		}
	} else {
		$set(this, signatureSchemes, $new($ints, 0));
	}
}

void SignatureAlgorithmsExtension$SignatureSchemesSpec::init$($HandshakeContext* hc, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	if ($nc(buffer)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid signature_algorithms: insufficient data"_s))));
	}
	$var($bytes, algs, $Record::getBytes16(buffer));
	if (buffer->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid signature_algorithms: unknown extra data"_s))));
	}
	if (algs == nullptr || algs->length == 0 || (algs->length & 1) != 0) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid signature_algorithms: incomplete data"_s))));
	}
	$var($ints, schemes, $new($ints, $nc(algs)->length / 2));
	for (int32_t i = 0, j = 0; i < algs->length;) {
		int8_t hash = algs->get(i++);
		int8_t sign = algs->get(i++);
		schemes->set(j++, ((hash & 0xff) << 8) | (sign & 0xff));
	}
	$set(this, signatureSchemes, schemes);
}

$String* SignatureAlgorithmsExtension$SignatureSchemesSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"signature schemes\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	if (this->signatureSchemes == nullptr || this->signatureSchemes->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {"<no supported signature schemes specified>"_s}));
		return messageFormat->format(messageFields);
	} else {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		bool isFirst = true;
		{
			$var($ints, arr$, this->signatureSchemes);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t pv = arr$->get(i$);
				{
					if (isFirst) {
						isFirst = false;
					} else {
						builder->append(", "_s);
					}
					builder->append($($SignatureScheme::nameOf(pv)));
				}
			}
		}
		$var($ObjectArray, messageFields, $new($ObjectArray, {$(builder->toString())}));
		return messageFormat->format(messageFields);
	}
}

SignatureAlgorithmsExtension$SignatureSchemesSpec::SignatureAlgorithmsExtension$SignatureSchemesSpec() {
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"signatureSchemes", "[I", nullptr, $FINAL, $field(SignatureAlgorithmsExtension$SignatureSchemesSpec, signatureSchemes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/ssl/SignatureScheme;>;)V", 0, $method(SignatureAlgorithmsExtension$SignatureSchemesSpec, init$, void, $List*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(SignatureAlgorithmsExtension$SignatureSchemesSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$SignatureSchemesSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesSpec", "sun.security.ssl.SignatureAlgorithmsExtension", "SignatureSchemesSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$SignatureSchemesSpec",
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
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$SignatureSchemesSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$SignatureSchemesSpec);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$SignatureSchemesSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun