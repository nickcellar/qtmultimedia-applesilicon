/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qaudioinputselectorcontrol.h"

QT_BEGIN_NAMESPACE

/*!
    \class QAudioInputSelectorControl

    \brief The QAudioInputSelectorControl class provides an audio input selector media control.
    \inmodule QtMultimedia
    \ingroup multimedia_control

    The QAudioInputSelectorControl class provides descriptions of the audio
    inputs available on a system and allows one to be selected as the audio
    input of a media service.

    The interface name of QAudioInputSelectorControl is \c org.qt-project.qt.audioinputselectorcontrol/5.0 as
    defined in QAudioInputSelectorControl_iid.

    \sa QMediaService::requestControl()
*/

/*!
    \macro QAudioInputSelectorControl_iid

    \c org.qt-project.qt.audioinputselectorcontrol/5.0

    Defines the interface name of the QAudioInputSelectorControl class.

    \relates QAudioInputSelectorControl
*/

/*!
    Constructs a new audio input selector control with the given \a parent.
*/
QAudioInputSelectorControl::QAudioInputSelectorControl(QObject *parent)
    :QMediaControl(parent)
{
}

/*!
    Destroys an audio input selector control.
*/
QAudioInputSelectorControl::~QAudioInputSelectorControl()
{
}

/*!
    \fn QList<QString> QAudioInputSelectorControl::availableInputs() const

    Returns a list of the names of the available audio inputs.
*/

/*!
    \fn QString QAudioInputSelectorControl::inputDescription(const QString& name) const

    Returns the description of the input \a name.
*/

/*!
    \fn QString QAudioInputSelectorControl::defaultInput() const

    Returns the name of the default audio input.
*/

/*!
    \fn QString QAudioInputSelectorControl::activeInput() const

    Returns the name of the currently selected audio input.
*/

/*!
    \fn QAudioInputSelectorControl::setActiveInput(const QString& name)

    Set the active audio input to \a name.
*/

/*!
    \fn QAudioInputSelectorControl::activeInputChanged(const QString& name)

    Signals that the audio input has changed to \a name.
*/

/*!
    \fn QAudioInputSelectorControl::availableInputsChanged()

    Signals that list of available inputs has changed.
*/

#include "moc_qaudioinputselectorcontrol.cpp"
QT_END_NAMESPACE

