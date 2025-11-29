#include <sun/net/www/MimeEntry.h>

#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/util/StringJoiner.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef LAUNCH_APPLICATION
#undef LOAD_INTO_BROWSER
#undef SAVE_TO_FILE
#undef UNKNOWN

using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringJoiner = ::java::util::StringJoiner;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _MimeEntry_FieldInfo_[] = {
	{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, typeName)},
	{"tempFileNameTemplate", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, tempFileNameTemplate)},
	{"action", "I", nullptr, $PRIVATE, $field(MimeEntry, action)},
	{"command", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, command)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, description)},
	{"imageFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, imageFileName)},
	{"fileExtensions", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MimeEntry, fileExtensions)},
	{"starred", "Z", nullptr, 0, $field(MimeEntry, starred)},
	{"UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MimeEntry, UNKNOWN)},
	{"LOAD_INTO_BROWSER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MimeEntry, LOAD_INTO_BROWSER)},
	{"SAVE_TO_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MimeEntry, SAVE_TO_FILE)},
	{"LAUNCH_APPLICATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MimeEntry, LAUNCH_APPLICATION)},
	{"actionKeywords", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MimeEntry, actionKeywords)},
	{}
};

$MethodInfo _MimeEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeEntry::*)($String*)>(&MimeEntry::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MimeEntry::*)($String*,$String*,$String*)>(&MimeEntry::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MimeEntry::*)($String*,int32_t,$String*,$String*)>(&MimeEntry::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MimeEntry::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&MimeEntry::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAction", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getExtensions", "()[Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getExtensionsAsList", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getImageFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLaunchString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTempFileTemplate", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isStarred", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MimeEntry::*)($String*)>(&MimeEntry::isStarred))},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"setAction", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAction", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setExtensions", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setImageFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toProperty", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MimeEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.MimeEntry",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MimeEntry_FieldInfo_,
	_MimeEntry_MethodInfo_
};

$Object* allocate$MimeEntry($Class* clazz) {
	return $of($alloc(MimeEntry));
}

$StringArray* MimeEntry::actionKeywords = nullptr;

void MimeEntry::init$($String* type) {
	MimeEntry::init$(type, MimeEntry::UNKNOWN, nullptr, nullptr, nullptr);
}

void MimeEntry::init$($String* type, $String* imageFileName, $String* extensionString) {
	$set(this, typeName, $nc(type)->toLowerCase());
	this->action = MimeEntry::UNKNOWN;
	$set(this, command, nullptr);
	$set(this, imageFileName, imageFileName);
	setExtensions(extensionString);
	this->starred = isStarred(this->typeName);
}

void MimeEntry::init$($String* typeName, int32_t action, $String* command, $String* tempFileNameTemplate) {
	$set(this, typeName, $nc(typeName)->toLowerCase());
	this->action = action;
	$set(this, command, command);
	$set(this, imageFileName, nullptr);
	$set(this, fileExtensions, nullptr);
	$set(this, tempFileNameTemplate, tempFileNameTemplate);
}

void MimeEntry::init$($String* typeName, int32_t action, $String* command, $String* imageFileName, $StringArray* fileExtensions) {
	$set(this, typeName, $nc(typeName)->toLowerCase());
	this->action = action;
	$set(this, command, command);
	$set(this, imageFileName, imageFileName);
	$set(this, fileExtensions, fileExtensions);
	this->starred = isStarred(typeName);
}

$String* MimeEntry::getType() {
	$synchronized(this) {
		return this->typeName;
	}
}

void MimeEntry::setType($String* type) {
	$synchronized(this) {
		$set(this, typeName, $nc(type)->toLowerCase());
	}
}

int32_t MimeEntry::getAction() {
	$synchronized(this) {
		return this->action;
	}
}

void MimeEntry::setAction(int32_t action, $String* command) {
	$synchronized(this) {
		this->action = action;
		$set(this, command, command);
	}
}

void MimeEntry::setAction(int32_t action) {
	$synchronized(this) {
		this->action = action;
	}
}

$String* MimeEntry::getLaunchString() {
	$synchronized(this) {
		return this->command;
	}
}

void MimeEntry::setCommand($String* command) {
	$synchronized(this) {
		$set(this, command, command);
	}
}

$String* MimeEntry::getDescription() {
	$synchronized(this) {
		return (this->description != nullptr ? this->description : this->typeName);
	}
}

void MimeEntry::setDescription($String* description) {
	$synchronized(this) {
		$set(this, description, description);
	}
}

$String* MimeEntry::getImageFileName() {
	return this->imageFileName;
}

void MimeEntry::setImageFileName($String* filename) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($File, file, $new($File, filename));
		if (file->getParent() == nullptr) {
			$set(this, imageFileName, $System::getProperty($$str({"java.net.ftp.imagepath."_s, filename})));
		} else {
			$set(this, imageFileName, filename);
		}
		if ($nc(filename)->lastIndexOf((int32_t)u'.') < 0) {
			$set(this, imageFileName, $str({this->imageFileName, ".gif"_s}));
		}
	}
}

$String* MimeEntry::getTempFileTemplate() {
	return this->tempFileNameTemplate;
}

$StringArray* MimeEntry::getExtensions() {
	$synchronized(this) {
		return this->fileExtensions;
	}
}

$String* MimeEntry::getExtensionsAsList() {
	$synchronized(this) {
		$var($String, extensionsAsString, ""_s);
		if (this->fileExtensions != nullptr) {
			for (int32_t i = 0; i < $nc(this->fileExtensions)->length; ++i) {
				$plusAssign(extensionsAsString, $nc(this->fileExtensions)->get(i));
				if (i < ($nc(this->fileExtensions)->length - 1)) {
					$plusAssign(extensionsAsString, ","_s);
				}
			}
		}
		return extensionsAsString;
	}
}

void MimeEntry::setExtensions($String* extensionString) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringTokenizer, extTokens, $new($StringTokenizer, extensionString, ","_s));
		int32_t numExts = extTokens->countTokens();
		$var($StringArray, extensionStrings, $new($StringArray, numExts));
		for (int32_t i = 0; i < numExts; ++i) {
			$var($String, ext, $cast($String, extTokens->nextElement()));
			extensionStrings->set(i, $($nc(ext)->trim()));
		}
		$set(this, fileExtensions, extensionStrings);
	}
}

bool MimeEntry::isStarred($String* typeName) {
	return typeName != nullptr && typeName->endsWith("/*"_s);
}

bool MimeEntry::matches($String* type) {
	if (this->starred) {
		return $nc(type)->startsWith(this->typeName);
	} else {
		return $nc(type)->equals(this->typeName);
	}
}

$Object* MimeEntry::clone() {
	$var(MimeEntry, theClone, $new(MimeEntry, this->typeName));
	theClone->action = this->action;
	$set(theClone, command, this->command);
	$set(theClone, description, this->description);
	$set(theClone, imageFileName, this->imageFileName);
	$set(theClone, tempFileNameTemplate, this->tempFileNameTemplate);
	$set(theClone, fileExtensions, this->fileExtensions);
	return $of(theClone);
}

$String* MimeEntry::toProperty() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringJoiner, sj, $new($StringJoiner, "; "_s));
		int32_t action = getAction();
		if (action != MimeEntry::UNKNOWN) {
			sj->add($$str({"action="_s, $nc(MimeEntry::actionKeywords)->get(action)}));
		}
		$var($String, command, getLaunchString());
		if (command != nullptr && command->length() > 0) {
			sj->add($$str({"application="_s, command}));
		}
		$var($String, image, getImageFileName());
		if (image != nullptr) {
			sj->add($$str({"icon="_s, image}));
		}
		$var($String, extensions, getExtensionsAsList());
		if (!$nc(extensions)->isEmpty()) {
			sj->add($$str({"file_extensions="_s, extensions}));
		}
		$var($String, description, getDescription());
		if (description != nullptr && !description->equals($(getType()))) {
			sj->add($$str({"description="_s, description}));
		}
		return sj->toString();
	}
}

$String* MimeEntry::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"MimeEntry[contentType="_s, this->typeName, ", image="_s, this->imageFileName, ", action="_s, $$str(this->action), ", command="_s, this->command, ", extensions="_s, $(getExtensionsAsList()), "]"_s});
}

void clinit$MimeEntry($Class* class$) {
	$assignStatic(MimeEntry::actionKeywords, $new($StringArray, {
		"unknown"_s,
		"browser"_s,
		"save"_s,
		"application"_s
	}));
}

MimeEntry::MimeEntry() {
}

$Class* MimeEntry::load$($String* name, bool initialize) {
	$loadClass(MimeEntry, name, initialize, &_MimeEntry_ClassInfo_, clinit$MimeEntry, allocate$MimeEntry);
	return class$;
}

$Class* MimeEntry::class$ = nullptr;

		} // www
	} // net
} // sun