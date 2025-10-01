#include <java/util/jar/Manifest.h>

#include <java/io/DataOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarVerifier.h>
#include <java/util/jar/Manifest$FastInputStream.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/nio/cs/Unicode.h>
#include <sun/security/util/SecurityProperties.h>
#include <jcpp.h>

#undef INSTANCE
#undef INCLUDE_JAR_NAME_IN_EXCEPTIONS

using $DataOutputStream = ::java::io::DataOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Charset = ::java::nio::charset::Charset;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Attributes = ::java::util::jar::Attributes;
using $JarVerifier = ::java::util::jar::JarVerifier;
using $Manifest$FastInputStream = ::java::util::jar::Manifest$FastInputStream;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $Unicode = ::sun::nio::cs::Unicode;
using $SecurityProperties = ::sun::security::util::SecurityProperties;

namespace java {
	namespace util {
		namespace jar {

$NamedAttribute Manifest_Attribute_var$0[] = {
	{"since", 's', "13"},
	{}
};

$CompoundAttribute _Manifest_MethodAnnotations_make72Safe14[] = {
	{"Ljava/lang/Deprecated;", Manifest_Attribute_var$0},
	{}
};

$FieldInfo _Manifest_FieldInfo_[] = {
	{"attr", "Ljava/util/jar/Attributes;", nullptr, $PRIVATE | $FINAL, $field(Manifest, attr)},
	{"entries", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/jar/Attributes;>;", $PRIVATE | $FINAL, $field(Manifest, entries)},
	{"jv", "Ljava/util/jar/JarVerifier;", nullptr, $PRIVATE | $FINAL, $field(Manifest, jv)},
	{}
};

$MethodInfo _Manifest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)()>(&Manifest::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)($InputStream*)>(&Manifest::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Manifest::*)($InputStream*,$String*)>(&Manifest::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Manifest::*)($JarVerifier*,$InputStream*,$String*)>(&Manifest::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/util/jar/Manifest;)V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)(Manifest*)>(&Manifest::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttributes", "(Ljava/lang/String;)Ljava/util/jar/Attributes;", nullptr, $PUBLIC},
	{"getEntries", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/jar/Attributes;>;", $PUBLIC},
	{"getErrorPosition", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&Manifest::getErrorPosition))},
	{"getMainAttributes", "()Ljava/util/jar/Attributes;", nullptr, $PUBLIC},
	{"getTrustedAttributes", "(Ljava/lang/String;)Ljava/util/jar/Attributes;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"make72Safe", "(Ljava/lang/StringBuffer;)V", nullptr, $STATIC | $DEPRECATED, $method(static_cast<void(*)($StringBuffer*)>(&Manifest::make72Safe)), nullptr, nullptr, _Manifest_MethodAnnotations_make72Safe14},
	{"parseName", "([BI)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Manifest::*)($bytes*,int32_t)>(&Manifest::parseName))},
	{"println", "(Ljava/io/OutputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($OutputStream*)>(&Manifest::println)), "java.io.IOException"},
	{"println72", "(Ljava/io/OutputStream;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($OutputStream*,$String*)>(&Manifest::println72)), "java.io.IOException"},
	{"read", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Manifest::*)($InputStream*,$String*)>(&Manifest::read)), "java.io.IOException"},
	{"toLower", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Manifest::*)(int32_t)>(&Manifest::toLower))},
	{"write", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Manifest_InnerClassesInfo_[] = {
	{"java.util.jar.Manifest$FastInputStream", "java.util.jar.Manifest", "FastInputStream", $STATIC},
	{}
};

$ClassInfo _Manifest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.jar.Manifest",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Manifest_FieldInfo_,
	_Manifest_MethodInfo_,
	nullptr,
	nullptr,
	_Manifest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.jar.Manifest$FastInputStream"
};

$Object* allocate$Manifest($Class* clazz) {
	return $of($alloc(Manifest));
}

void Manifest::init$() {
	$set(this, attr, $new($Attributes));
	$set(this, entries, $new($HashMap));
	$set(this, jv, nullptr);
}

void Manifest::init$($InputStream* is) {
	Manifest::init$(nullptr, is, nullptr);
}

void Manifest::init$($InputStream* is, $String* jarFilename) {
	Manifest::init$(nullptr, is, jarFilename);
}

void Manifest::init$($JarVerifier* jv, $InputStream* is, $String* jarFilename) {
	$set(this, attr, $new($Attributes));
	$set(this, entries, $new($HashMap));
	read(is, jarFilename);
	$set(this, jv, jv);
}

void Manifest::init$(Manifest* man) {
	$set(this, attr, $new($Attributes));
	$set(this, entries, $new($HashMap));
	$nc(this->attr)->putAll($($nc(man)->getMainAttributes()));
	$nc(this->entries)->putAll($($nc(man)->getEntries()));
	$set(this, jv, $nc(man)->jv);
}

$Attributes* Manifest::getMainAttributes() {
	return this->attr;
}

$Map* Manifest::getEntries() {
	return this->entries;
}

$Attributes* Manifest::getAttributes($String* name) {
	return $cast($Attributes, $nc($(getEntries()))->get(name));
}

$Attributes* Manifest::getTrustedAttributes($String* name) {
	$var($Attributes, result, getAttributes(name));
	if (result != nullptr && this->jv != nullptr && !$nc(this->jv)->isTrustedManifestEntry(name)) {
		$throwNew($SecurityException, $$str({"Untrusted manifest entry: "_s, name}));
	}
	return result;
}

void Manifest::clear() {
	$nc(this->attr)->clear();
	$nc(this->entries)->clear();
}

void Manifest::write($OutputStream* out) {
	$var($DataOutputStream, dos, $new($DataOutputStream, out));
	$nc(this->attr)->writeMain(dos);
	$var($StringBuilder, buffer, $nc(this->entries)->isEmpty() ? ($StringBuilder*)nullptr : $new($StringBuilder, 72));
	{
		$var($Iterator, i$, $nc($($nc(this->entries)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$nc(buffer)->setLength(0);
				buffer->append("Name: "_s);
				buffer->append($cast($String, $($nc(e)->getKey())));
				println72(dos, $(buffer->toString()));
				$nc(($cast($Attributes, $($nc(e)->getValue()))))->write(dos);
			}
		}
	}
	dos->flush();
}

void Manifest::make72Safe($StringBuffer* line) {
	$init(Manifest);
	int32_t length = $nc(line)->length();
	int32_t index = 72;
	while (index < length) {
		line->insert(index, "\r\n "_s);
		index += 74;
		length += 3;
	}
}

void Manifest::println72($OutputStream* out, $String* line) {
	$init(Manifest);
	if (!$nc(line)->isEmpty()) {
		$init($UTF_8);
		$var($bytes, lineBytes, line->getBytes(static_cast<$Charset*>($UTF_8::INSTANCE)));
		int32_t length = lineBytes->length;
		$nc(out)->write((int32_t)lineBytes->get(0));
		int32_t pos = 1;
		while (length - pos > 71) {
			out->write(lineBytes, pos, 71);
			pos += 71;
			println(out);
			out->write((int32_t)u' ');
		}
		out->write(lineBytes, pos, length - pos);
	}
	println(out);
}

void Manifest::println($OutputStream* out) {
	$init(Manifest);
	$nc(out)->write((int32_t)u'\r');
	out->write((int32_t)u'\n');
}

$String* Manifest::getErrorPosition($String* filename, int32_t lineNumber) {
	$init(Manifest);
	$init($SecurityProperties);
	if (filename == nullptr || !$SecurityProperties::INCLUDE_JAR_NAME_IN_EXCEPTIONS) {
		return $str({"line "_s, $$str(lineNumber)});
	}
	return $str({"manifest of "_s, filename, ":"_s, $$str(lineNumber)});
}

void Manifest::read($InputStream* is) {
	read(is, nullptr);
}

void Manifest::read($InputStream* is, $String* jarFilename) {
	$var($Manifest$FastInputStream, fis, $new($Manifest$FastInputStream, is));
	$var($bytes, lbuf, $new($bytes, 512));
	int32_t lineNumber = $nc(this->attr)->read(fis, lbuf, jarFilename, 0);
	int32_t ecount = 0;
	int32_t acount = 0;
	int32_t asize = 2;
	int32_t len = 0;
	$var($String, name, nullptr);
	bool skipEmptyLines = true;
	$var($bytes, lastline, nullptr);
	while ((len = fis->readLine(lbuf)) != -1) {
		int8_t c = lbuf->get(--len);
		++lineNumber;
		if (c != u'\n' && c != u'\r') {
			$throwNew($IOException, $$str({"manifest line too long ("_s, $(getErrorPosition(jarFilename, lineNumber)), ")"_s}));
		}
		if (len > 0 && lbuf->get(len - 1) == u'\r') {
			--len;
		}
		if (len == 0 && skipEmptyLines) {
			continue;
		}
		skipEmptyLines = false;
		if (name == nullptr) {
			$assign(name, parseName(lbuf, len));
			if (name == nullptr) {
				$throwNew($IOException, $$str({"invalid manifest format ("_s, $(getErrorPosition(jarFilename, lineNumber)), ")"_s}));
			}
			if (fis->peek() == u' ') {
				$assign(lastline, $new($bytes, len - 6));
				$System::arraycopy(lbuf, 6, lastline, 0, len - 6);
				continue;
			}
		} else {
			$var($bytes, buf, $new($bytes, $nc(lastline)->length + len - 1));
			$System::arraycopy(lastline, 0, buf, 0, lastline->length);
			$System::arraycopy(lbuf, 1, buf, lastline->length, len - 1);
			if (fis->peek() == u' ') {
				$assign(lastline, buf);
				continue;
			}
			$init($UTF_8);
			$assign(name, $new($String, buf, 0, buf->length, static_cast<$Charset*>($UTF_8::INSTANCE)));
			$assign(lastline, nullptr);
		}
		$var($Attributes, attr, getAttributes(name));
		if (attr == nullptr) {
			$assign(attr, $new($Attributes, asize));
			$nc(this->entries)->put(name, attr);
		}
		lineNumber = $nc(attr)->read(fis, lbuf, jarFilename, lineNumber);
		++ecount;
		acount += attr->size();
		asize = $Math::max(2, $div(acount, ecount));
		$assign(name, nullptr);
		skipEmptyLines = true;
	}
}

$String* Manifest::parseName($bytes* lbuf, int32_t len) {
	bool var$2 = toLower($nc(lbuf)->get(0)) == u'n';
	bool var$1 = var$2 && toLower($nc(lbuf)->get(1)) == u'a';
	bool var$0 = var$1 && toLower($nc(lbuf)->get(2)) == u'm';
	if (var$0 && toLower($nc(lbuf)->get(3)) == u'e' && $nc(lbuf)->get(4) == u':' && lbuf->get(5) == u' ') {
		$init($UTF_8);
		return $new($String, lbuf, 6, len - 6, static_cast<$Charset*>($UTF_8::INSTANCE));
	}
	return nullptr;
}

int32_t Manifest::toLower(int32_t c) {
	return (c >= u'A' && c <= u'Z') ? u'a' + (c - u'A') : c;
}

bool Manifest::equals(Object$* o) {
	$var(Manifest, m, nullptr);
	bool var$2 = $instanceOf(Manifest, o);
	if (var$2) {
		$assign(m, $cast(Manifest, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->attr)->equals($($nc(m)->getMainAttributes()));
	return var$0 && $nc(this->entries)->equals($($nc(m)->getEntries()));
}

int32_t Manifest::hashCode() {
	int32_t var$0 = $nc(this->attr)->hashCode();
	return var$0 + $nc(this->entries)->hashCode();
}

$Object* Manifest::clone() {
	return $of($new(Manifest, this));
}

Manifest::Manifest() {
}

$Class* Manifest::load$($String* name, bool initialize) {
	$loadClass(Manifest, name, initialize, &_Manifest_ClassInfo_, allocate$Manifest);
	return class$;
}

$Class* Manifest::class$ = nullptr;

		} // jar
	} // util
} // java