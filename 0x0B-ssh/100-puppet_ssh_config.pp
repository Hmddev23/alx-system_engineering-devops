# configuration file with puppet

file_line { 'Disable passwordd auth':
  ensure => present,
  line   => 'PasswordAuthentication no',
  path   => '/etc/ssh/ssh_config',
}

file_line { 'Use private ssh key':
  ensure => present,
  line   => 'IdentityFile ~/.ssh/school',
  path   => '/etc/ssh/ssh_config',
}
