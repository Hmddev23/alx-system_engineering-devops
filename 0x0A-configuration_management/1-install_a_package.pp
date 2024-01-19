# install flask from pip3
class { 'python':
    version => 'system',
}
package { 'flask' :
    ensure   => '2.1.0',
    provider => 'pip3',
}
