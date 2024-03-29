#pragma once
#include <string>
#include<unordered_map>
#include "icons.h"
namespace icon {
const std::unordered_map<std::string, IconInfo> iconDirs{
  {"config",         iconSet.at("dir-config")},
  {".config",        iconSet.at("dir-config")},
  {"configs",        iconSet.at("dir-config")},
  {"configuration",  iconSet.at("dir-config")},
  {"configurations", iconSet.at("dir-config")},
  {"settings",       iconSet.at("dir-config")},
  {".settings",      iconSet.at("dir-config")},
  {"META-INF",       iconSet.at("dir-config")},
  {"controller",     iconSet.at("dir-controller")},
  {"controllers",    iconSet.at("dir-controller")},
  {"service",        iconSet.at("dir-controller")},
  {"services",       iconSet.at("dir-controller")},
  {"provider",       iconSet.at("dir-controller")},
  {"providers",      iconSet.at("dir-controller")},
  {".git",           iconSet.at("dir-git")},
  {"githooks",       iconSet.at("dir-git")},
  {".githooks",      iconSet.at("dir-git")},
  {"submodules",     iconSet.at("dir-git")},
  {".submodules",    iconSet.at("dir-git")},
  {".github",        iconSet.at("dir-github")},
  {"node_modules",   iconSet.at("dir-npm")},
  {"include",        iconSet.at("dir-include")},
  {"includes",       iconSet.at("dir-include")},
  {"_includes",      iconSet.at("dir-include")},
  {"import",         iconSet.at("dir-import")},
  {"imports",        iconSet.at("dir-import")},
  {"imported",       iconSet.at("dir-import")},
  {"uploads",        iconSet.at("dir-upload")},
  {"upload",         iconSet.at("dir-upload")},
  {"downloads",      iconSet.at("dir-download")},
  {"download",       iconSet.at("dir-download")},
  {"auth",           iconSet.at("dir-secure")},
  {"authentication", iconSet.at("dir-secure")},
  {"secure",         iconSet.at("dir-secure")},
  {"security",       iconSet.at("dir-secure")},
  {"cert",           iconSet.at("dir-secure")},
  {"certs",          iconSet.at("dir-secure")},
  {"certificate",    iconSet.at("dir-secure")},
  {"certificates",   iconSet.at("dir-secure")},
  {"ssl",            iconSet.at("dir-secure")},
  {"images",         iconSet.at("dir-images")},
  {"image",          iconSet.at("dir-images")},
  {"pics",           iconSet.at("dir-images")},
  {"pic",            iconSet.at("dir-images")},
  {"pictures",       iconSet.at("dir-images")},
  {"picture",        iconSet.at("dir-images")},
  {"img",            iconSet.at("dir-images")},
  {"icons",          iconSet.at("dir-images")},
  {"icon",           iconSet.at("dir-images")},
  {"ico",            iconSet.at("dir-images")},
  {"screenshot",     iconSet.at("dir-images")},
  {"screenshots",    iconSet.at("dir-images")},
  {".env",           iconSet.at("dir-environment")},
  {".environment",   iconSet.at("dir-environment")},
  {"env",            iconSet.at("dir-environment")},
  {"environment",    iconSet.at("dir-environment")},
  {"environments",   iconSet.at("dir-environment")},
  {"src",            iconSet.at("dir-source")},
  {"test",           iconSet.at("dir-test")},
};
}

