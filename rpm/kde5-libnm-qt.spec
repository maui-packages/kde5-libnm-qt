# 
# Do NOT Edit the Auto-generated Part!
# Generated by: spectacle version 0.22
# 
# >> macros
# << macros

Name:       kde5-libnm-qt
Summary:    Library that wraps NetworkManager DBus API
Version:    5.0.0
Release:    1
Group:      System/Base
License:    GPLv2+
URL:        http://www.kde.org
Source0:    %{name}-%{version}.tar.xz
Source100:  kde5-libnm-qt.yaml
Source101:  kde5-libnm-qt-rpmlintrc
Requires:   kde5-filesystem
Requires:   NetworkManager
Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5DBus)
BuildRequires:  pkgconfig(Qt5Xml)
BuildRequires:  pkgconfig(Qt5Network)
BuildRequires:  pkgconfig(Qt5Gui)
BuildRequires:  pkgconfig(Qt5Widgets)
BuildRequires:  pkgconfig(Qt5Concurrent)
BuildRequires:  pkgconfig(Qt5Test)
BuildRequires:  pkgconfig(Qt5PrintSupport)
BuildRequires:  pkgconfig(NetworkManager)
BuildRequires:  pkgconfig(libnm-glib)
BuildRequires:  pkgconfig(libnm-util)
BuildRequires:  kde5-rpm-macros
BuildRequires:  extra-cmake-modules
BuildRequires:  qt5-tools


%description
Library that wraps NetworkManager DBus API



%package devel
Summary:    Development files for %{name}
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description devel
The %{name}-devel package contains the files necessary to develop applications
that use %{name}.



%prep
%setup -q -n %{name}-%{version}/upstream

# >> setup
# << setup

%build
# >> build pre
%kde5_make
# << build pre



# >> build post
# << build post
%install
rm -rf %{buildroot}
# >> install pre
%kde5_make_install
# << install pre

# >> install post
# << install post









%files
%defattr(-,root,root,-)
%{_kde5_libdir}/libKF5NetworkManagerQt.so.*
# >> files
# << files


%files devel
%defattr(-,root,root,-)
%{_kde5_libdir}/libKF5NetworkManagerQt.so
%{_kde5_libdir}/cmake/KF5NetworkManagerQt
%{_kde5_includedir}/NetworkManagerQt
%{_kde5_includedir}/networkmanagerqt_version.h
%{_kde5_archdatadir}/mkspecs/modules/qt_NetworkManagerQt.pri
%{_datadir}/qt5/mkspecs/modules/*.pri
# >> files devel
# << files devel

